/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/EncryptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class PutDefaultEncryptionConfigurationRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API PutDefaultEncryptionConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDefaultEncryptionConfiguration"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of encryption used for the encryption configuration.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The type of encryption used for the encryption configuration.</p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The type of encryption used for the encryption configuration.</p>
     */
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The type of encryption used for the encryption configuration.</p>
     */
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The type of encryption used for the encryption configuration.</p>
     */
    inline PutDefaultEncryptionConfigurationRequest& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The type of encryption used for the encryption configuration.</p>
     */
    inline PutDefaultEncryptionConfigurationRequest& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The Key ID of the customer managed key used for KMS encryption. This is
     * required if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Key ID of the customer managed key used for KMS encryption. This is
     * required if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Key ID of the customer managed key used for KMS encryption. This is
     * required if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Key ID of the customer managed key used for KMS encryption. This is
     * required if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Key ID of the customer managed key used for KMS encryption. This is
     * required if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Key ID of the customer managed key used for KMS encryption. This is
     * required if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline PutDefaultEncryptionConfigurationRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Key ID of the customer managed key used for KMS encryption. This is
     * required if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline PutDefaultEncryptionConfigurationRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Key ID of the customer managed key used for KMS encryption. This is
     * required if you use <code>KMS_BASED_ENCRYPTION</code>.</p>
     */
    inline PutDefaultEncryptionConfigurationRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
