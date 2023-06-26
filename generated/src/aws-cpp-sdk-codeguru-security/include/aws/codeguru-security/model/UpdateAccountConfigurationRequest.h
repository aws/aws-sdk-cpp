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
    AWS_CODEGURUSECURITY_API UpdateAccountConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountConfiguration"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;


    /**
     * <p>The KMS key ARN you want to use for encryption. Defaults to service-side
     * encryption if missing.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>The KMS key ARN you want to use for encryption. Defaults to service-side
     * encryption if missing.</p>
     */
    inline bool EncryptionConfigHasBeenSet() const { return m_encryptionConfigHasBeenSet; }

    /**
     * <p>The KMS key ARN you want to use for encryption. Defaults to service-side
     * encryption if missing.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = value; }

    /**
     * <p>The KMS key ARN you want to use for encryption. Defaults to service-side
     * encryption if missing.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::move(value); }

    /**
     * <p>The KMS key ARN you want to use for encryption. Defaults to service-side
     * encryption if missing.</p>
     */
    inline UpdateAccountConfigurationRequest& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The KMS key ARN you want to use for encryption. Defaults to service-side
     * encryption if missing.</p>
     */
    inline UpdateAccountConfigurationRequest& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}

  private:

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
