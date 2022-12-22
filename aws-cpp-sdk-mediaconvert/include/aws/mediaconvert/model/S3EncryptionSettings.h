/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/S3ServerSideEncryptionType.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for how your job outputs are encrypted as they are uploaded to Amazon
   * S3.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/S3EncryptionSettings">AWS
   * API Reference</a></p>
   */
  class S3EncryptionSettings
  {
  public:
    AWS_MEDIACONVERT_API S3EncryptionSettings();
    AWS_MEDIACONVERT_API S3EncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API S3EncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify how you want your data keys managed. AWS uses data keys to encrypt your
     * content. AWS also encrypts the data keys themselves, using a customer master key
     * (CMK), and then stores the encrypted data keys alongside your encrypted content.
     * Use this setting to specify which AWS service manages the CMK. For simplest set
     * up, choose Amazon S3 (SERVER_SIDE_ENCRYPTION_S3). If you want your master key to
     * be managed by AWS Key Management Service (KMS), choose AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). By default, when you choose AWS KMS, KMS uses the
     * AWS managed customer master key (CMK) associated with Amazon S3 to encrypt your
     * data keys. You can optionally choose to specify a different, customer managed
     * CMK. Do so by specifying the Amazon Resource Name (ARN) of the key for the
     * setting  KMS ARN (kmsKeyArn).
     */
    inline const S3ServerSideEncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * Specify how you want your data keys managed. AWS uses data keys to encrypt your
     * content. AWS also encrypts the data keys themselves, using a customer master key
     * (CMK), and then stores the encrypted data keys alongside your encrypted content.
     * Use this setting to specify which AWS service manages the CMK. For simplest set
     * up, choose Amazon S3 (SERVER_SIDE_ENCRYPTION_S3). If you want your master key to
     * be managed by AWS Key Management Service (KMS), choose AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). By default, when you choose AWS KMS, KMS uses the
     * AWS managed customer master key (CMK) associated with Amazon S3 to encrypt your
     * data keys. You can optionally choose to specify a different, customer managed
     * CMK. Do so by specifying the Amazon Resource Name (ARN) of the key for the
     * setting  KMS ARN (kmsKeyArn).
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * Specify how you want your data keys managed. AWS uses data keys to encrypt your
     * content. AWS also encrypts the data keys themselves, using a customer master key
     * (CMK), and then stores the encrypted data keys alongside your encrypted content.
     * Use this setting to specify which AWS service manages the CMK. For simplest set
     * up, choose Amazon S3 (SERVER_SIDE_ENCRYPTION_S3). If you want your master key to
     * be managed by AWS Key Management Service (KMS), choose AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). By default, when you choose AWS KMS, KMS uses the
     * AWS managed customer master key (CMK) associated with Amazon S3 to encrypt your
     * data keys. You can optionally choose to specify a different, customer managed
     * CMK. Do so by specifying the Amazon Resource Name (ARN) of the key for the
     * setting  KMS ARN (kmsKeyArn).
     */
    inline void SetEncryptionType(const S3ServerSideEncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * Specify how you want your data keys managed. AWS uses data keys to encrypt your
     * content. AWS also encrypts the data keys themselves, using a customer master key
     * (CMK), and then stores the encrypted data keys alongside your encrypted content.
     * Use this setting to specify which AWS service manages the CMK. For simplest set
     * up, choose Amazon S3 (SERVER_SIDE_ENCRYPTION_S3). If you want your master key to
     * be managed by AWS Key Management Service (KMS), choose AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). By default, when you choose AWS KMS, KMS uses the
     * AWS managed customer master key (CMK) associated with Amazon S3 to encrypt your
     * data keys. You can optionally choose to specify a different, customer managed
     * CMK. Do so by specifying the Amazon Resource Name (ARN) of the key for the
     * setting  KMS ARN (kmsKeyArn).
     */
    inline void SetEncryptionType(S3ServerSideEncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * Specify how you want your data keys managed. AWS uses data keys to encrypt your
     * content. AWS also encrypts the data keys themselves, using a customer master key
     * (CMK), and then stores the encrypted data keys alongside your encrypted content.
     * Use this setting to specify which AWS service manages the CMK. For simplest set
     * up, choose Amazon S3 (SERVER_SIDE_ENCRYPTION_S3). If you want your master key to
     * be managed by AWS Key Management Service (KMS), choose AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). By default, when you choose AWS KMS, KMS uses the
     * AWS managed customer master key (CMK) associated with Amazon S3 to encrypt your
     * data keys. You can optionally choose to specify a different, customer managed
     * CMK. Do so by specifying the Amazon Resource Name (ARN) of the key for the
     * setting  KMS ARN (kmsKeyArn).
     */
    inline S3EncryptionSettings& WithEncryptionType(const S3ServerSideEncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * Specify how you want your data keys managed. AWS uses data keys to encrypt your
     * content. AWS also encrypts the data keys themselves, using a customer master key
     * (CMK), and then stores the encrypted data keys alongside your encrypted content.
     * Use this setting to specify which AWS service manages the CMK. For simplest set
     * up, choose Amazon S3 (SERVER_SIDE_ENCRYPTION_S3). If you want your master key to
     * be managed by AWS Key Management Service (KMS), choose AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). By default, when you choose AWS KMS, KMS uses the
     * AWS managed customer master key (CMK) associated with Amazon S3 to encrypt your
     * data keys. You can optionally choose to specify a different, customer managed
     * CMK. Do so by specifying the Amazon Resource Name (ARN) of the key for the
     * setting  KMS ARN (kmsKeyArn).
     */
    inline S3EncryptionSettings& WithEncryptionType(S3ServerSideEncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    /**
     * Optionally, specify the encryption context that you want to use alongside your
     * KMS key. AWS KMS uses this encryption context as additional authenticated data
     * (AAD) to support authenticated encryption. This value must be a base64-encoded
     * UTF-8 string holding JSON which represents a string-string map. To use this
     * setting, you must also set Server-side encryption (S3ServerSideEncryptionType)
     * to AWS KMS (SERVER_SIDE_ENCRYPTION_KMS). For more information about encryption
     * context, see:
     * https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context.
     */
    inline const Aws::String& GetKmsEncryptionContext() const{ return m_kmsEncryptionContext; }

    /**
     * Optionally, specify the encryption context that you want to use alongside your
     * KMS key. AWS KMS uses this encryption context as additional authenticated data
     * (AAD) to support authenticated encryption. This value must be a base64-encoded
     * UTF-8 string holding JSON which represents a string-string map. To use this
     * setting, you must also set Server-side encryption (S3ServerSideEncryptionType)
     * to AWS KMS (SERVER_SIDE_ENCRYPTION_KMS). For more information about encryption
     * context, see:
     * https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context.
     */
    inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }

    /**
     * Optionally, specify the encryption context that you want to use alongside your
     * KMS key. AWS KMS uses this encryption context as additional authenticated data
     * (AAD) to support authenticated encryption. This value must be a base64-encoded
     * UTF-8 string holding JSON which represents a string-string map. To use this
     * setting, you must also set Server-side encryption (S3ServerSideEncryptionType)
     * to AWS KMS (SERVER_SIDE_ENCRYPTION_KMS). For more information about encryption
     * context, see:
     * https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context.
     */
    inline void SetKmsEncryptionContext(const Aws::String& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = value; }

    /**
     * Optionally, specify the encryption context that you want to use alongside your
     * KMS key. AWS KMS uses this encryption context as additional authenticated data
     * (AAD) to support authenticated encryption. This value must be a base64-encoded
     * UTF-8 string holding JSON which represents a string-string map. To use this
     * setting, you must also set Server-side encryption (S3ServerSideEncryptionType)
     * to AWS KMS (SERVER_SIDE_ENCRYPTION_KMS). For more information about encryption
     * context, see:
     * https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context.
     */
    inline void SetKmsEncryptionContext(Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = std::move(value); }

    /**
     * Optionally, specify the encryption context that you want to use alongside your
     * KMS key. AWS KMS uses this encryption context as additional authenticated data
     * (AAD) to support authenticated encryption. This value must be a base64-encoded
     * UTF-8 string holding JSON which represents a string-string map. To use this
     * setting, you must also set Server-side encryption (S3ServerSideEncryptionType)
     * to AWS KMS (SERVER_SIDE_ENCRYPTION_KMS). For more information about encryption
     * context, see:
     * https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context.
     */
    inline void SetKmsEncryptionContext(const char* value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.assign(value); }

    /**
     * Optionally, specify the encryption context that you want to use alongside your
     * KMS key. AWS KMS uses this encryption context as additional authenticated data
     * (AAD) to support authenticated encryption. This value must be a base64-encoded
     * UTF-8 string holding JSON which represents a string-string map. To use this
     * setting, you must also set Server-side encryption (S3ServerSideEncryptionType)
     * to AWS KMS (SERVER_SIDE_ENCRYPTION_KMS). For more information about encryption
     * context, see:
     * https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context.
     */
    inline S3EncryptionSettings& WithKmsEncryptionContext(const Aws::String& value) { SetKmsEncryptionContext(value); return *this;}

    /**
     * Optionally, specify the encryption context that you want to use alongside your
     * KMS key. AWS KMS uses this encryption context as additional authenticated data
     * (AAD) to support authenticated encryption. This value must be a base64-encoded
     * UTF-8 string holding JSON which represents a string-string map. To use this
     * setting, you must also set Server-side encryption (S3ServerSideEncryptionType)
     * to AWS KMS (SERVER_SIDE_ENCRYPTION_KMS). For more information about encryption
     * context, see:
     * https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context.
     */
    inline S3EncryptionSettings& WithKmsEncryptionContext(Aws::String&& value) { SetKmsEncryptionContext(std::move(value)); return *this;}

    /**
     * Optionally, specify the encryption context that you want to use alongside your
     * KMS key. AWS KMS uses this encryption context as additional authenticated data
     * (AAD) to support authenticated encryption. This value must be a base64-encoded
     * UTF-8 string holding JSON which represents a string-string map. To use this
     * setting, you must also set Server-side encryption (S3ServerSideEncryptionType)
     * to AWS KMS (SERVER_SIDE_ENCRYPTION_KMS). For more information about encryption
     * context, see:
     * https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context.
     */
    inline S3EncryptionSettings& WithKmsEncryptionContext(const char* value) { SetKmsEncryptionContext(value); return *this;}


    /**
     * Optionally, specify the customer master key (CMK) that you want to use to
     * encrypt the data key that AWS uses to encrypt your output content. Enter the
     * Amazon Resource Name (ARN) of the CMK. To use this setting, you must also set
     * Server-side encryption (S3ServerSideEncryptionType) to AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). If you set Server-side encryption to AWS KMS but
     * don't specify a CMK here, AWS uses the AWS managed CMK associated with Amazon
     * S3.
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * Optionally, specify the customer master key (CMK) that you want to use to
     * encrypt the data key that AWS uses to encrypt your output content. Enter the
     * Amazon Resource Name (ARN) of the CMK. To use this setting, you must also set
     * Server-side encryption (S3ServerSideEncryptionType) to AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). If you set Server-side encryption to AWS KMS but
     * don't specify a CMK here, AWS uses the AWS managed CMK associated with Amazon
     * S3.
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * Optionally, specify the customer master key (CMK) that you want to use to
     * encrypt the data key that AWS uses to encrypt your output content. Enter the
     * Amazon Resource Name (ARN) of the CMK. To use this setting, you must also set
     * Server-side encryption (S3ServerSideEncryptionType) to AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). If you set Server-side encryption to AWS KMS but
     * don't specify a CMK here, AWS uses the AWS managed CMK associated with Amazon
     * S3.
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * Optionally, specify the customer master key (CMK) that you want to use to
     * encrypt the data key that AWS uses to encrypt your output content. Enter the
     * Amazon Resource Name (ARN) of the CMK. To use this setting, you must also set
     * Server-side encryption (S3ServerSideEncryptionType) to AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). If you set Server-side encryption to AWS KMS but
     * don't specify a CMK here, AWS uses the AWS managed CMK associated with Amazon
     * S3.
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * Optionally, specify the customer master key (CMK) that you want to use to
     * encrypt the data key that AWS uses to encrypt your output content. Enter the
     * Amazon Resource Name (ARN) of the CMK. To use this setting, you must also set
     * Server-side encryption (S3ServerSideEncryptionType) to AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). If you set Server-side encryption to AWS KMS but
     * don't specify a CMK here, AWS uses the AWS managed CMK associated with Amazon
     * S3.
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * Optionally, specify the customer master key (CMK) that you want to use to
     * encrypt the data key that AWS uses to encrypt your output content. Enter the
     * Amazon Resource Name (ARN) of the CMK. To use this setting, you must also set
     * Server-side encryption (S3ServerSideEncryptionType) to AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). If you set Server-side encryption to AWS KMS but
     * don't specify a CMK here, AWS uses the AWS managed CMK associated with Amazon
     * S3.
     */
    inline S3EncryptionSettings& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * Optionally, specify the customer master key (CMK) that you want to use to
     * encrypt the data key that AWS uses to encrypt your output content. Enter the
     * Amazon Resource Name (ARN) of the CMK. To use this setting, you must also set
     * Server-side encryption (S3ServerSideEncryptionType) to AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). If you set Server-side encryption to AWS KMS but
     * don't specify a CMK here, AWS uses the AWS managed CMK associated with Amazon
     * S3.
     */
    inline S3EncryptionSettings& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * Optionally, specify the customer master key (CMK) that you want to use to
     * encrypt the data key that AWS uses to encrypt your output content. Enter the
     * Amazon Resource Name (ARN) of the CMK. To use this setting, you must also set
     * Server-side encryption (S3ServerSideEncryptionType) to AWS KMS
     * (SERVER_SIDE_ENCRYPTION_KMS). If you set Server-side encryption to AWS KMS but
     * don't specify a CMK here, AWS uses the AWS managed CMK associated with Amazon
     * S3.
     */
    inline S3EncryptionSettings& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    S3ServerSideEncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsEncryptionContext;
    bool m_kmsEncryptionContextHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
