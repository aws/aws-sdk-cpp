/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/iot/model/EncryptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateEncryptionConfigurationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateEncryptionConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEncryptionConfiguration"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of the Amazon Web Services Key Management Service (KMS) key.</p>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline UpdateEncryptionConfigurationRequest& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the customer-managed KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    UpdateEncryptionConfigurationRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role assumed by Amazon Web Services
     * IoT Core to call KMS on behalf of the customer.</p>
     */
    inline const Aws::String& GetKmsAccessRoleArn() const { return m_kmsAccessRoleArn; }
    inline bool KmsAccessRoleArnHasBeenSet() const { return m_kmsAccessRoleArnHasBeenSet; }
    template<typename KmsAccessRoleArnT = Aws::String>
    void SetKmsAccessRoleArn(KmsAccessRoleArnT&& value) { m_kmsAccessRoleArnHasBeenSet = true; m_kmsAccessRoleArn = std::forward<KmsAccessRoleArnT>(value); }
    template<typename KmsAccessRoleArnT = Aws::String>
    UpdateEncryptionConfigurationRequest& WithKmsAccessRoleArn(KmsAccessRoleArnT&& value) { SetKmsAccessRoleArn(std::forward<KmsAccessRoleArnT>(value)); return *this;}
    ///@}
  private:

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_kmsAccessRoleArn;
    bool m_kmsAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
