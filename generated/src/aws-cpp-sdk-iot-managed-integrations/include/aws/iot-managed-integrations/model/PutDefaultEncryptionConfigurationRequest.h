/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/iot-managed-integrations/model/EncryptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class PutDefaultEncryptionConfigurationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API PutDefaultEncryptionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDefaultEncryptionConfiguration"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of encryption used for the encryption configuration.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }
    inline PutDefaultEncryptionConfigurationRequest& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}
    inline PutDefaultEncryptionConfigurationRequest& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Amazon Resource Name (ARN) of the AWS KMS key used for KMS encryption
     * if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline PutDefaultEncryptionConfigurationRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline PutDefaultEncryptionConfigurationRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline PutDefaultEncryptionConfigurationRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}
  private:

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
