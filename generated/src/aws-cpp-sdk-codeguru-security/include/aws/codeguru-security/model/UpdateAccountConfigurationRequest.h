/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/codeguru-security/model/EncryptionConfig.h>
#include <utility>

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   */
  class UpdateAccountConfigurationRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API UpdateAccountConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountConfiguration"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The customer-managed KMS key ARN you want to use for encryption. If not
     * specified, CodeGuru Security will use an AWS-managed key for encryption. If you
     * previously specified a customer-managed KMS key and want CodeGuru Security to
     * use an AWS-managed key for encryption instead, pass nothing.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    UpdateAccountConfigurationRequest& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}
  private:

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
