/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/MLUserDataEncryptionModeString.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>The encryption-at-rest settings of the transform that apply to accessing user
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MLUserDataEncryption">AWS
   * API Reference</a></p>
   */
  class MLUserDataEncryption
  {
  public:
    AWS_GLUE_API MLUserDataEncryption();
    AWS_GLUE_API MLUserDataEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MLUserDataEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption mode applied to user data. Valid values are:</p> <ul> <li>
     * <p>DISABLED: encryption is disabled</p> </li> <li> <p>SSEKMS: use of server-side
     * encryption with Key Management Service (SSE-KMS) for user data stored in Amazon
     * S3.</p> </li> </ul>
     */
    inline const MLUserDataEncryptionModeString& GetMlUserDataEncryptionMode() const{ return m_mlUserDataEncryptionMode; }

    /**
     * <p>The encryption mode applied to user data. Valid values are:</p> <ul> <li>
     * <p>DISABLED: encryption is disabled</p> </li> <li> <p>SSEKMS: use of server-side
     * encryption with Key Management Service (SSE-KMS) for user data stored in Amazon
     * S3.</p> </li> </ul>
     */
    inline bool MlUserDataEncryptionModeHasBeenSet() const { return m_mlUserDataEncryptionModeHasBeenSet; }

    /**
     * <p>The encryption mode applied to user data. Valid values are:</p> <ul> <li>
     * <p>DISABLED: encryption is disabled</p> </li> <li> <p>SSEKMS: use of server-side
     * encryption with Key Management Service (SSE-KMS) for user data stored in Amazon
     * S3.</p> </li> </ul>
     */
    inline void SetMlUserDataEncryptionMode(const MLUserDataEncryptionModeString& value) { m_mlUserDataEncryptionModeHasBeenSet = true; m_mlUserDataEncryptionMode = value; }

    /**
     * <p>The encryption mode applied to user data. Valid values are:</p> <ul> <li>
     * <p>DISABLED: encryption is disabled</p> </li> <li> <p>SSEKMS: use of server-side
     * encryption with Key Management Service (SSE-KMS) for user data stored in Amazon
     * S3.</p> </li> </ul>
     */
    inline void SetMlUserDataEncryptionMode(MLUserDataEncryptionModeString&& value) { m_mlUserDataEncryptionModeHasBeenSet = true; m_mlUserDataEncryptionMode = std::move(value); }

    /**
     * <p>The encryption mode applied to user data. Valid values are:</p> <ul> <li>
     * <p>DISABLED: encryption is disabled</p> </li> <li> <p>SSEKMS: use of server-side
     * encryption with Key Management Service (SSE-KMS) for user data stored in Amazon
     * S3.</p> </li> </ul>
     */
    inline MLUserDataEncryption& WithMlUserDataEncryptionMode(const MLUserDataEncryptionModeString& value) { SetMlUserDataEncryptionMode(value); return *this;}

    /**
     * <p>The encryption mode applied to user data. Valid values are:</p> <ul> <li>
     * <p>DISABLED: encryption is disabled</p> </li> <li> <p>SSEKMS: use of server-side
     * encryption with Key Management Service (SSE-KMS) for user data stored in Amazon
     * S3.</p> </li> </ul>
     */
    inline MLUserDataEncryption& WithMlUserDataEncryptionMode(MLUserDataEncryptionModeString&& value) { SetMlUserDataEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>The ID for the customer-provided KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID for the customer-provided KMS key.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID for the customer-provided KMS key.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID for the customer-provided KMS key.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID for the customer-provided KMS key.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID for the customer-provided KMS key.</p>
     */
    inline MLUserDataEncryption& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID for the customer-provided KMS key.</p>
     */
    inline MLUserDataEncryption& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID for the customer-provided KMS key.</p>
     */
    inline MLUserDataEncryption& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    MLUserDataEncryptionModeString m_mlUserDataEncryptionMode;
    bool m_mlUserDataEncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
