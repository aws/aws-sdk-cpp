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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DecryptionMode.h>
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
   * Specify the decryption settings used to decrypt encrypted input<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InputDecryptionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API InputDecryptionSettings
  {
  public:
    InputDecryptionSettings();
    InputDecryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    InputDecryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DecryptionMode& GetDecryptionMode() const{ return m_decryptionMode; }

    
    inline void SetDecryptionMode(const DecryptionMode& value) { m_decryptionModeHasBeenSet = true; m_decryptionMode = value; }

    
    inline void SetDecryptionMode(DecryptionMode&& value) { m_decryptionModeHasBeenSet = true; m_decryptionMode = std::move(value); }

    
    inline InputDecryptionSettings& WithDecryptionMode(const DecryptionMode& value) { SetDecryptionMode(value); return *this;}

    
    inline InputDecryptionSettings& WithDecryptionMode(DecryptionMode&& value) { SetDecryptionMode(std::move(value)); return *this;}


    /**
     * Decryption key either 128 or 192 or 256 bits encrypted with KMS
     */
    inline const Aws::String& GetEncryptedDecryptionKey() const{ return m_encryptedDecryptionKey; }

    /**
     * Decryption key either 128 or 192 or 256 bits encrypted with KMS
     */
    inline void SetEncryptedDecryptionKey(const Aws::String& value) { m_encryptedDecryptionKeyHasBeenSet = true; m_encryptedDecryptionKey = value; }

    /**
     * Decryption key either 128 or 192 or 256 bits encrypted with KMS
     */
    inline void SetEncryptedDecryptionKey(Aws::String&& value) { m_encryptedDecryptionKeyHasBeenSet = true; m_encryptedDecryptionKey = std::move(value); }

    /**
     * Decryption key either 128 or 192 or 256 bits encrypted with KMS
     */
    inline void SetEncryptedDecryptionKey(const char* value) { m_encryptedDecryptionKeyHasBeenSet = true; m_encryptedDecryptionKey.assign(value); }

    /**
     * Decryption key either 128 or 192 or 256 bits encrypted with KMS
     */
    inline InputDecryptionSettings& WithEncryptedDecryptionKey(const Aws::String& value) { SetEncryptedDecryptionKey(value); return *this;}

    /**
     * Decryption key either 128 or 192 or 256 bits encrypted with KMS
     */
    inline InputDecryptionSettings& WithEncryptedDecryptionKey(Aws::String&& value) { SetEncryptedDecryptionKey(std::move(value)); return *this;}

    /**
     * Decryption key either 128 or 192 or 256 bits encrypted with KMS
     */
    inline InputDecryptionSettings& WithEncryptedDecryptionKey(const char* value) { SetEncryptedDecryptionKey(value); return *this;}


    /**
     * Initialization Vector 96 bits (CTR/GCM mode only) or 128 bits.
     */
    inline const Aws::String& GetInitializationVector() const{ return m_initializationVector; }

    /**
     * Initialization Vector 96 bits (CTR/GCM mode only) or 128 bits.
     */
    inline void SetInitializationVector(const Aws::String& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = value; }

    /**
     * Initialization Vector 96 bits (CTR/GCM mode only) or 128 bits.
     */
    inline void SetInitializationVector(Aws::String&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::move(value); }

    /**
     * Initialization Vector 96 bits (CTR/GCM mode only) or 128 bits.
     */
    inline void SetInitializationVector(const char* value) { m_initializationVectorHasBeenSet = true; m_initializationVector.assign(value); }

    /**
     * Initialization Vector 96 bits (CTR/GCM mode only) or 128 bits.
     */
    inline InputDecryptionSettings& WithInitializationVector(const Aws::String& value) { SetInitializationVector(value); return *this;}

    /**
     * Initialization Vector 96 bits (CTR/GCM mode only) or 128 bits.
     */
    inline InputDecryptionSettings& WithInitializationVector(Aws::String&& value) { SetInitializationVector(std::move(value)); return *this;}

    /**
     * Initialization Vector 96 bits (CTR/GCM mode only) or 128 bits.
     */
    inline InputDecryptionSettings& WithInitializationVector(const char* value) { SetInitializationVector(value); return *this;}


    /**
     * The AWS region in which decryption key was encrypted with KMS
     */
    inline const Aws::String& GetKmsKeyRegion() const{ return m_kmsKeyRegion; }

    /**
     * The AWS region in which decryption key was encrypted with KMS
     */
    inline void SetKmsKeyRegion(const Aws::String& value) { m_kmsKeyRegionHasBeenSet = true; m_kmsKeyRegion = value; }

    /**
     * The AWS region in which decryption key was encrypted with KMS
     */
    inline void SetKmsKeyRegion(Aws::String&& value) { m_kmsKeyRegionHasBeenSet = true; m_kmsKeyRegion = std::move(value); }

    /**
     * The AWS region in which decryption key was encrypted with KMS
     */
    inline void SetKmsKeyRegion(const char* value) { m_kmsKeyRegionHasBeenSet = true; m_kmsKeyRegion.assign(value); }

    /**
     * The AWS region in which decryption key was encrypted with KMS
     */
    inline InputDecryptionSettings& WithKmsKeyRegion(const Aws::String& value) { SetKmsKeyRegion(value); return *this;}

    /**
     * The AWS region in which decryption key was encrypted with KMS
     */
    inline InputDecryptionSettings& WithKmsKeyRegion(Aws::String&& value) { SetKmsKeyRegion(std::move(value)); return *this;}

    /**
     * The AWS region in which decryption key was encrypted with KMS
     */
    inline InputDecryptionSettings& WithKmsKeyRegion(const char* value) { SetKmsKeyRegion(value); return *this;}

  private:

    DecryptionMode m_decryptionMode;
    bool m_decryptionModeHasBeenSet;

    Aws::String m_encryptedDecryptionKey;
    bool m_encryptedDecryptionKeyHasBeenSet;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet;

    Aws::String m_kmsKeyRegion;
    bool m_kmsKeyRegionHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
