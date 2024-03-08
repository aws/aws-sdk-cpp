/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/IoTFleetWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/EncryptionType.h>
#include <utility>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

  /**
   */
  class PutEncryptionConfigurationRequest : public IoTFleetWiseRequest
  {
  public:
    AWS_IOTFLEETWISE_API PutEncryptionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEncryptionConfiguration"; }

    AWS_IOTFLEETWISE_API Aws::String SerializePayload() const override;

    AWS_IOTFLEETWISE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline PutEncryptionConfigurationRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline PutEncryptionConfigurationRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key that is used for encryption.</p>
     */
    inline PutEncryptionConfigurationRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The type of encryption. Choose <code>KMS_BASED_ENCRYPTION</code> to use a KMS
     * key or <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services
     * managed key.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The type of encryption. Choose <code>KMS_BASED_ENCRYPTION</code> to use a KMS
     * key or <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services
     * managed key.</p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The type of encryption. Choose <code>KMS_BASED_ENCRYPTION</code> to use a KMS
     * key or <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services
     * managed key.</p>
     */
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The type of encryption. Choose <code>KMS_BASED_ENCRYPTION</code> to use a KMS
     * key or <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services
     * managed key.</p>
     */
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The type of encryption. Choose <code>KMS_BASED_ENCRYPTION</code> to use a KMS
     * key or <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services
     * managed key.</p>
     */
    inline PutEncryptionConfigurationRequest& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The type of encryption. Choose <code>KMS_BASED_ENCRYPTION</code> to use a KMS
     * key or <code>FLEETWISE_DEFAULT_ENCRYPTION</code> to use an Amazon Web Services
     * managed key.</p>
     */
    inline PutEncryptionConfigurationRequest& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
