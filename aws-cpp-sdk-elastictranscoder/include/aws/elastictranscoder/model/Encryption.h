/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>The encryption settings, if any, that are used for decrypting your input
   * files or encrypting your output files. If your input file is encrypted, you must
   * specify the mode that Elastic Transcoder uses to decrypt your file, otherwise
   * you must specify the mode you want Elastic Transcoder to use to encrypt your
   * output files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Encryption">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API Encryption
  {
  public:
    Encryption();
    Encryption(Aws::Utils::Json::JsonView jsonValue);
    Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specific server-side encryption mode that you want Elastic Transcoder to
     * use when decrypting your input files or encrypting your output files. Elastic
     * Transcoder supports the following options:</p> <ul> <li> <p> <b>s3:</b> Amazon
     * S3 creates and manages the keys used for encrypting your files.</p> </li> <li>
     * <p> <b>s3-aws-kms:</b> Amazon S3 calls the Amazon Key Management Service, which
     * creates and manages the keys that are used for encrypting your files. If you
     * specify <code>s3-aws-kms</code> and you don't want to use the default key, you
     * must add the AWS-KMS key that you want to use to your pipeline.</p> </li> <li>
     * <p> <b>aes-cbc-pkcs7:</b> A padded cipher-block mode of operation originally
     * used for HLS files.</p> </li> <li> <p> <b>aes-ctr:</b> AES Counter Mode.</p>
     * </li> <li> <p> <b>aes-gcm:</b> AES Galois Counter Mode, a mode of operation that
     * is an authenticated encryption format, meaning that a file, key, or
     * initialization vector that has been tampered with fails the decryption
     * process.</p> </li> </ul> <p>For all three AES options, you must provide the
     * following settings, which must be base64-encoded:</p> <ul> <li> <p> <b>Key</b>
     * </p> </li> <li> <p> <b>Key MD5</b> </p> </li> <li> <p> <b>Initialization
     * Vector</b> </p> </li> </ul> <important> <p>For the AES modes, your private
     * encryption keys and your unencrypted data are never stored by AWS; therefore, it
     * is important that you safely manage your encryption keys. If you lose them, you
     * won't be able to unencrypt your data.</p> </important>
     */
    inline const Aws::String& GetMode() const{ return m_mode; }

    /**
     * <p>The specific server-side encryption mode that you want Elastic Transcoder to
     * use when decrypting your input files or encrypting your output files. Elastic
     * Transcoder supports the following options:</p> <ul> <li> <p> <b>s3:</b> Amazon
     * S3 creates and manages the keys used for encrypting your files.</p> </li> <li>
     * <p> <b>s3-aws-kms:</b> Amazon S3 calls the Amazon Key Management Service, which
     * creates and manages the keys that are used for encrypting your files. If you
     * specify <code>s3-aws-kms</code> and you don't want to use the default key, you
     * must add the AWS-KMS key that you want to use to your pipeline.</p> </li> <li>
     * <p> <b>aes-cbc-pkcs7:</b> A padded cipher-block mode of operation originally
     * used for HLS files.</p> </li> <li> <p> <b>aes-ctr:</b> AES Counter Mode.</p>
     * </li> <li> <p> <b>aes-gcm:</b> AES Galois Counter Mode, a mode of operation that
     * is an authenticated encryption format, meaning that a file, key, or
     * initialization vector that has been tampered with fails the decryption
     * process.</p> </li> </ul> <p>For all three AES options, you must provide the
     * following settings, which must be base64-encoded:</p> <ul> <li> <p> <b>Key</b>
     * </p> </li> <li> <p> <b>Key MD5</b> </p> </li> <li> <p> <b>Initialization
     * Vector</b> </p> </li> </ul> <important> <p>For the AES modes, your private
     * encryption keys and your unencrypted data are never stored by AWS; therefore, it
     * is important that you safely manage your encryption keys. If you lose them, you
     * won't be able to unencrypt your data.</p> </important>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The specific server-side encryption mode that you want Elastic Transcoder to
     * use when decrypting your input files or encrypting your output files. Elastic
     * Transcoder supports the following options:</p> <ul> <li> <p> <b>s3:</b> Amazon
     * S3 creates and manages the keys used for encrypting your files.</p> </li> <li>
     * <p> <b>s3-aws-kms:</b> Amazon S3 calls the Amazon Key Management Service, which
     * creates and manages the keys that are used for encrypting your files. If you
     * specify <code>s3-aws-kms</code> and you don't want to use the default key, you
     * must add the AWS-KMS key that you want to use to your pipeline.</p> </li> <li>
     * <p> <b>aes-cbc-pkcs7:</b> A padded cipher-block mode of operation originally
     * used for HLS files.</p> </li> <li> <p> <b>aes-ctr:</b> AES Counter Mode.</p>
     * </li> <li> <p> <b>aes-gcm:</b> AES Galois Counter Mode, a mode of operation that
     * is an authenticated encryption format, meaning that a file, key, or
     * initialization vector that has been tampered with fails the decryption
     * process.</p> </li> </ul> <p>For all three AES options, you must provide the
     * following settings, which must be base64-encoded:</p> <ul> <li> <p> <b>Key</b>
     * </p> </li> <li> <p> <b>Key MD5</b> </p> </li> <li> <p> <b>Initialization
     * Vector</b> </p> </li> </ul> <important> <p>For the AES modes, your private
     * encryption keys and your unencrypted data are never stored by AWS; therefore, it
     * is important that you safely manage your encryption keys. If you lose them, you
     * won't be able to unencrypt your data.</p> </important>
     */
    inline void SetMode(const Aws::String& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The specific server-side encryption mode that you want Elastic Transcoder to
     * use when decrypting your input files or encrypting your output files. Elastic
     * Transcoder supports the following options:</p> <ul> <li> <p> <b>s3:</b> Amazon
     * S3 creates and manages the keys used for encrypting your files.</p> </li> <li>
     * <p> <b>s3-aws-kms:</b> Amazon S3 calls the Amazon Key Management Service, which
     * creates and manages the keys that are used for encrypting your files. If you
     * specify <code>s3-aws-kms</code> and you don't want to use the default key, you
     * must add the AWS-KMS key that you want to use to your pipeline.</p> </li> <li>
     * <p> <b>aes-cbc-pkcs7:</b> A padded cipher-block mode of operation originally
     * used for HLS files.</p> </li> <li> <p> <b>aes-ctr:</b> AES Counter Mode.</p>
     * </li> <li> <p> <b>aes-gcm:</b> AES Galois Counter Mode, a mode of operation that
     * is an authenticated encryption format, meaning that a file, key, or
     * initialization vector that has been tampered with fails the decryption
     * process.</p> </li> </ul> <p>For all three AES options, you must provide the
     * following settings, which must be base64-encoded:</p> <ul> <li> <p> <b>Key</b>
     * </p> </li> <li> <p> <b>Key MD5</b> </p> </li> <li> <p> <b>Initialization
     * Vector</b> </p> </li> </ul> <important> <p>For the AES modes, your private
     * encryption keys and your unencrypted data are never stored by AWS; therefore, it
     * is important that you safely manage your encryption keys. If you lose them, you
     * won't be able to unencrypt your data.</p> </important>
     */
    inline void SetMode(Aws::String&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The specific server-side encryption mode that you want Elastic Transcoder to
     * use when decrypting your input files or encrypting your output files. Elastic
     * Transcoder supports the following options:</p> <ul> <li> <p> <b>s3:</b> Amazon
     * S3 creates and manages the keys used for encrypting your files.</p> </li> <li>
     * <p> <b>s3-aws-kms:</b> Amazon S3 calls the Amazon Key Management Service, which
     * creates and manages the keys that are used for encrypting your files. If you
     * specify <code>s3-aws-kms</code> and you don't want to use the default key, you
     * must add the AWS-KMS key that you want to use to your pipeline.</p> </li> <li>
     * <p> <b>aes-cbc-pkcs7:</b> A padded cipher-block mode of operation originally
     * used for HLS files.</p> </li> <li> <p> <b>aes-ctr:</b> AES Counter Mode.</p>
     * </li> <li> <p> <b>aes-gcm:</b> AES Galois Counter Mode, a mode of operation that
     * is an authenticated encryption format, meaning that a file, key, or
     * initialization vector that has been tampered with fails the decryption
     * process.</p> </li> </ul> <p>For all three AES options, you must provide the
     * following settings, which must be base64-encoded:</p> <ul> <li> <p> <b>Key</b>
     * </p> </li> <li> <p> <b>Key MD5</b> </p> </li> <li> <p> <b>Initialization
     * Vector</b> </p> </li> </ul> <important> <p>For the AES modes, your private
     * encryption keys and your unencrypted data are never stored by AWS; therefore, it
     * is important that you safely manage your encryption keys. If you lose them, you
     * won't be able to unencrypt your data.</p> </important>
     */
    inline void SetMode(const char* value) { m_modeHasBeenSet = true; m_mode.assign(value); }

    /**
     * <p>The specific server-side encryption mode that you want Elastic Transcoder to
     * use when decrypting your input files or encrypting your output files. Elastic
     * Transcoder supports the following options:</p> <ul> <li> <p> <b>s3:</b> Amazon
     * S3 creates and manages the keys used for encrypting your files.</p> </li> <li>
     * <p> <b>s3-aws-kms:</b> Amazon S3 calls the Amazon Key Management Service, which
     * creates and manages the keys that are used for encrypting your files. If you
     * specify <code>s3-aws-kms</code> and you don't want to use the default key, you
     * must add the AWS-KMS key that you want to use to your pipeline.</p> </li> <li>
     * <p> <b>aes-cbc-pkcs7:</b> A padded cipher-block mode of operation originally
     * used for HLS files.</p> </li> <li> <p> <b>aes-ctr:</b> AES Counter Mode.</p>
     * </li> <li> <p> <b>aes-gcm:</b> AES Galois Counter Mode, a mode of operation that
     * is an authenticated encryption format, meaning that a file, key, or
     * initialization vector that has been tampered with fails the decryption
     * process.</p> </li> </ul> <p>For all three AES options, you must provide the
     * following settings, which must be base64-encoded:</p> <ul> <li> <p> <b>Key</b>
     * </p> </li> <li> <p> <b>Key MD5</b> </p> </li> <li> <p> <b>Initialization
     * Vector</b> </p> </li> </ul> <important> <p>For the AES modes, your private
     * encryption keys and your unencrypted data are never stored by AWS; therefore, it
     * is important that you safely manage your encryption keys. If you lose them, you
     * won't be able to unencrypt your data.</p> </important>
     */
    inline Encryption& WithMode(const Aws::String& value) { SetMode(value); return *this;}

    /**
     * <p>The specific server-side encryption mode that you want Elastic Transcoder to
     * use when decrypting your input files or encrypting your output files. Elastic
     * Transcoder supports the following options:</p> <ul> <li> <p> <b>s3:</b> Amazon
     * S3 creates and manages the keys used for encrypting your files.</p> </li> <li>
     * <p> <b>s3-aws-kms:</b> Amazon S3 calls the Amazon Key Management Service, which
     * creates and manages the keys that are used for encrypting your files. If you
     * specify <code>s3-aws-kms</code> and you don't want to use the default key, you
     * must add the AWS-KMS key that you want to use to your pipeline.</p> </li> <li>
     * <p> <b>aes-cbc-pkcs7:</b> A padded cipher-block mode of operation originally
     * used for HLS files.</p> </li> <li> <p> <b>aes-ctr:</b> AES Counter Mode.</p>
     * </li> <li> <p> <b>aes-gcm:</b> AES Galois Counter Mode, a mode of operation that
     * is an authenticated encryption format, meaning that a file, key, or
     * initialization vector that has been tampered with fails the decryption
     * process.</p> </li> </ul> <p>For all three AES options, you must provide the
     * following settings, which must be base64-encoded:</p> <ul> <li> <p> <b>Key</b>
     * </p> </li> <li> <p> <b>Key MD5</b> </p> </li> <li> <p> <b>Initialization
     * Vector</b> </p> </li> </ul> <important> <p>For the AES modes, your private
     * encryption keys and your unencrypted data are never stored by AWS; therefore, it
     * is important that you safely manage your encryption keys. If you lose them, you
     * won't be able to unencrypt your data.</p> </important>
     */
    inline Encryption& WithMode(Aws::String&& value) { SetMode(std::move(value)); return *this;}

    /**
     * <p>The specific server-side encryption mode that you want Elastic Transcoder to
     * use when decrypting your input files or encrypting your output files. Elastic
     * Transcoder supports the following options:</p> <ul> <li> <p> <b>s3:</b> Amazon
     * S3 creates and manages the keys used for encrypting your files.</p> </li> <li>
     * <p> <b>s3-aws-kms:</b> Amazon S3 calls the Amazon Key Management Service, which
     * creates and manages the keys that are used for encrypting your files. If you
     * specify <code>s3-aws-kms</code> and you don't want to use the default key, you
     * must add the AWS-KMS key that you want to use to your pipeline.</p> </li> <li>
     * <p> <b>aes-cbc-pkcs7:</b> A padded cipher-block mode of operation originally
     * used for HLS files.</p> </li> <li> <p> <b>aes-ctr:</b> AES Counter Mode.</p>
     * </li> <li> <p> <b>aes-gcm:</b> AES Galois Counter Mode, a mode of operation that
     * is an authenticated encryption format, meaning that a file, key, or
     * initialization vector that has been tampered with fails the decryption
     * process.</p> </li> </ul> <p>For all three AES options, you must provide the
     * following settings, which must be base64-encoded:</p> <ul> <li> <p> <b>Key</b>
     * </p> </li> <li> <p> <b>Key MD5</b> </p> </li> <li> <p> <b>Initialization
     * Vector</b> </p> </li> </ul> <important> <p>For the AES modes, your private
     * encryption keys and your unencrypted data are never stored by AWS; therefore, it
     * is important that you safely manage your encryption keys. If you lose them, you
     * won't be able to unencrypt your data.</p> </important>
     */
    inline Encryption& WithMode(const char* value) { SetMode(value); return *this;}


    /**
     * <p>The data encryption key that you want Elastic Transcoder to use to encrypt
     * your output file, or that was used to encrypt your input file. The key must be
     * base64-encoded and it must be one of the following bit lengths before being
     * base64-encoded:</p> <p> <code>128</code>, <code>192</code>, or <code>256</code>.
     * </p> <p>The key must also be encrypted by using the Amazon Key Management
     * Service.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The data encryption key that you want Elastic Transcoder to use to encrypt
     * your output file, or that was used to encrypt your input file. The key must be
     * base64-encoded and it must be one of the following bit lengths before being
     * base64-encoded:</p> <p> <code>128</code>, <code>192</code>, or <code>256</code>.
     * </p> <p>The key must also be encrypted by using the Amazon Key Management
     * Service.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The data encryption key that you want Elastic Transcoder to use to encrypt
     * your output file, or that was used to encrypt your input file. The key must be
     * base64-encoded and it must be one of the following bit lengths before being
     * base64-encoded:</p> <p> <code>128</code>, <code>192</code>, or <code>256</code>.
     * </p> <p>The key must also be encrypted by using the Amazon Key Management
     * Service.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The data encryption key that you want Elastic Transcoder to use to encrypt
     * your output file, or that was used to encrypt your input file. The key must be
     * base64-encoded and it must be one of the following bit lengths before being
     * base64-encoded:</p> <p> <code>128</code>, <code>192</code>, or <code>256</code>.
     * </p> <p>The key must also be encrypted by using the Amazon Key Management
     * Service.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The data encryption key that you want Elastic Transcoder to use to encrypt
     * your output file, or that was used to encrypt your input file. The key must be
     * base64-encoded and it must be one of the following bit lengths before being
     * base64-encoded:</p> <p> <code>128</code>, <code>192</code>, or <code>256</code>.
     * </p> <p>The key must also be encrypted by using the Amazon Key Management
     * Service.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The data encryption key that you want Elastic Transcoder to use to encrypt
     * your output file, or that was used to encrypt your input file. The key must be
     * base64-encoded and it must be one of the following bit lengths before being
     * base64-encoded:</p> <p> <code>128</code>, <code>192</code>, or <code>256</code>.
     * </p> <p>The key must also be encrypted by using the Amazon Key Management
     * Service.</p>
     */
    inline Encryption& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The data encryption key that you want Elastic Transcoder to use to encrypt
     * your output file, or that was used to encrypt your input file. The key must be
     * base64-encoded and it must be one of the following bit lengths before being
     * base64-encoded:</p> <p> <code>128</code>, <code>192</code>, or <code>256</code>.
     * </p> <p>The key must also be encrypted by using the Amazon Key Management
     * Service.</p>
     */
    inline Encryption& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The data encryption key that you want Elastic Transcoder to use to encrypt
     * your output file, or that was used to encrypt your input file. The key must be
     * base64-encoded and it must be one of the following bit lengths before being
     * base64-encoded:</p> <p> <code>128</code>, <code>192</code>, or <code>256</code>.
     * </p> <p>The key must also be encrypted by using the Amazon Key Management
     * Service.</p>
     */
    inline Encryption& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The MD5 digest of the key that you used to encrypt your input file, or that
     * you want Elastic Transcoder to use to encrypt your output file. Elastic
     * Transcoder uses the key digest as a checksum to make sure your key was not
     * corrupted in transit. The key MD5 must be base64-encoded, and it must be exactly
     * 16 bytes long before being base64-encoded.</p>
     */
    inline const Aws::String& GetKeyMd5() const{ return m_keyMd5; }

    /**
     * <p>The MD5 digest of the key that you used to encrypt your input file, or that
     * you want Elastic Transcoder to use to encrypt your output file. Elastic
     * Transcoder uses the key digest as a checksum to make sure your key was not
     * corrupted in transit. The key MD5 must be base64-encoded, and it must be exactly
     * 16 bytes long before being base64-encoded.</p>
     */
    inline bool KeyMd5HasBeenSet() const { return m_keyMd5HasBeenSet; }

    /**
     * <p>The MD5 digest of the key that you used to encrypt your input file, or that
     * you want Elastic Transcoder to use to encrypt your output file. Elastic
     * Transcoder uses the key digest as a checksum to make sure your key was not
     * corrupted in transit. The key MD5 must be base64-encoded, and it must be exactly
     * 16 bytes long before being base64-encoded.</p>
     */
    inline void SetKeyMd5(const Aws::String& value) { m_keyMd5HasBeenSet = true; m_keyMd5 = value; }

    /**
     * <p>The MD5 digest of the key that you used to encrypt your input file, or that
     * you want Elastic Transcoder to use to encrypt your output file. Elastic
     * Transcoder uses the key digest as a checksum to make sure your key was not
     * corrupted in transit. The key MD5 must be base64-encoded, and it must be exactly
     * 16 bytes long before being base64-encoded.</p>
     */
    inline void SetKeyMd5(Aws::String&& value) { m_keyMd5HasBeenSet = true; m_keyMd5 = std::move(value); }

    /**
     * <p>The MD5 digest of the key that you used to encrypt your input file, or that
     * you want Elastic Transcoder to use to encrypt your output file. Elastic
     * Transcoder uses the key digest as a checksum to make sure your key was not
     * corrupted in transit. The key MD5 must be base64-encoded, and it must be exactly
     * 16 bytes long before being base64-encoded.</p>
     */
    inline void SetKeyMd5(const char* value) { m_keyMd5HasBeenSet = true; m_keyMd5.assign(value); }

    /**
     * <p>The MD5 digest of the key that you used to encrypt your input file, or that
     * you want Elastic Transcoder to use to encrypt your output file. Elastic
     * Transcoder uses the key digest as a checksum to make sure your key was not
     * corrupted in transit. The key MD5 must be base64-encoded, and it must be exactly
     * 16 bytes long before being base64-encoded.</p>
     */
    inline Encryption& WithKeyMd5(const Aws::String& value) { SetKeyMd5(value); return *this;}

    /**
     * <p>The MD5 digest of the key that you used to encrypt your input file, or that
     * you want Elastic Transcoder to use to encrypt your output file. Elastic
     * Transcoder uses the key digest as a checksum to make sure your key was not
     * corrupted in transit. The key MD5 must be base64-encoded, and it must be exactly
     * 16 bytes long before being base64-encoded.</p>
     */
    inline Encryption& WithKeyMd5(Aws::String&& value) { SetKeyMd5(std::move(value)); return *this;}

    /**
     * <p>The MD5 digest of the key that you used to encrypt your input file, or that
     * you want Elastic Transcoder to use to encrypt your output file. Elastic
     * Transcoder uses the key digest as a checksum to make sure your key was not
     * corrupted in transit. The key MD5 must be base64-encoded, and it must be exactly
     * 16 bytes long before being base64-encoded.</p>
     */
    inline Encryption& WithKeyMd5(const char* value) { SetKeyMd5(value); return *this;}


    /**
     * <p>The series of random bits created by a random bit generator, unique for every
     * encryption operation, that you used to encrypt your input files or that you want
     * Elastic Transcoder to use to encrypt your output files. The initialization
     * vector must be base64-encoded, and it must be exactly 16 bytes long before being
     * base64-encoded.</p>
     */
    inline const Aws::String& GetInitializationVector() const{ return m_initializationVector; }

    /**
     * <p>The series of random bits created by a random bit generator, unique for every
     * encryption operation, that you used to encrypt your input files or that you want
     * Elastic Transcoder to use to encrypt your output files. The initialization
     * vector must be base64-encoded, and it must be exactly 16 bytes long before being
     * base64-encoded.</p>
     */
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }

    /**
     * <p>The series of random bits created by a random bit generator, unique for every
     * encryption operation, that you used to encrypt your input files or that you want
     * Elastic Transcoder to use to encrypt your output files. The initialization
     * vector must be base64-encoded, and it must be exactly 16 bytes long before being
     * base64-encoded.</p>
     */
    inline void SetInitializationVector(const Aws::String& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = value; }

    /**
     * <p>The series of random bits created by a random bit generator, unique for every
     * encryption operation, that you used to encrypt your input files or that you want
     * Elastic Transcoder to use to encrypt your output files. The initialization
     * vector must be base64-encoded, and it must be exactly 16 bytes long before being
     * base64-encoded.</p>
     */
    inline void SetInitializationVector(Aws::String&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::move(value); }

    /**
     * <p>The series of random bits created by a random bit generator, unique for every
     * encryption operation, that you used to encrypt your input files or that you want
     * Elastic Transcoder to use to encrypt your output files. The initialization
     * vector must be base64-encoded, and it must be exactly 16 bytes long before being
     * base64-encoded.</p>
     */
    inline void SetInitializationVector(const char* value) { m_initializationVectorHasBeenSet = true; m_initializationVector.assign(value); }

    /**
     * <p>The series of random bits created by a random bit generator, unique for every
     * encryption operation, that you used to encrypt your input files or that you want
     * Elastic Transcoder to use to encrypt your output files. The initialization
     * vector must be base64-encoded, and it must be exactly 16 bytes long before being
     * base64-encoded.</p>
     */
    inline Encryption& WithInitializationVector(const Aws::String& value) { SetInitializationVector(value); return *this;}

    /**
     * <p>The series of random bits created by a random bit generator, unique for every
     * encryption operation, that you used to encrypt your input files or that you want
     * Elastic Transcoder to use to encrypt your output files. The initialization
     * vector must be base64-encoded, and it must be exactly 16 bytes long before being
     * base64-encoded.</p>
     */
    inline Encryption& WithInitializationVector(Aws::String&& value) { SetInitializationVector(std::move(value)); return *this;}

    /**
     * <p>The series of random bits created by a random bit generator, unique for every
     * encryption operation, that you used to encrypt your input files or that you want
     * Elastic Transcoder to use to encrypt your output files. The initialization
     * vector must be base64-encoded, and it must be exactly 16 bytes long before being
     * base64-encoded.</p>
     */
    inline Encryption& WithInitializationVector(const char* value) { SetInitializationVector(value); return *this;}

  private:

    Aws::String m_mode;
    bool m_modeHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_keyMd5;
    bool m_keyMd5HasBeenSet;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
