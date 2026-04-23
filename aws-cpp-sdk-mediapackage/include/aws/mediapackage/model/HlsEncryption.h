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
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/EncryptionMethod.h>
#include <aws/mediapackage/model/SpekeKeyProvider.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * An HTTP Live Streaming (HLS) encryption configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/HlsEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API HlsEncryption
  {
  public:
    HlsEncryption();
    HlsEncryption(Aws::Utils::Json::JsonView jsonValue);
    HlsEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline const Aws::String& GetConstantInitializationVector() const{ return m_constantInitializationVector; }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline void SetConstantInitializationVector(const Aws::String& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = value; }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline void SetConstantInitializationVector(Aws::String&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::move(value); }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline void SetConstantInitializationVector(const char* value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector.assign(value); }

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline HlsEncryption& WithConstantInitializationVector(const Aws::String& value) { SetConstantInitializationVector(value); return *this;}

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline HlsEncryption& WithConstantInitializationVector(Aws::String&& value) { SetConstantInitializationVector(std::move(value)); return *this;}

    /**
     * A constant initialization vector for encryption (optional).
When not specified
     * the initialization vector will be periodically rotated.

     */
    inline HlsEncryption& WithConstantInitializationVector(const char* value) { SetConstantInitializationVector(value); return *this;}


    /**
     * The encryption method to use.
     */
    inline const EncryptionMethod& GetEncryptionMethod() const{ return m_encryptionMethod; }

    /**
     * The encryption method to use.
     */
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }

    /**
     * The encryption method to use.
     */
    inline void SetEncryptionMethod(const EncryptionMethod& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }

    /**
     * The encryption method to use.
     */
    inline void SetEncryptionMethod(EncryptionMethod&& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = std::move(value); }

    /**
     * The encryption method to use.
     */
    inline HlsEncryption& WithEncryptionMethod(const EncryptionMethod& value) { SetEncryptionMethod(value); return *this;}

    /**
     * The encryption method to use.
     */
    inline HlsEncryption& WithEncryptionMethod(EncryptionMethod&& value) { SetEncryptionMethod(std::move(value)); return *this;}


    /**
     * Interval (in seconds) between each encryption key rotation.
     */
    inline int GetKeyRotationIntervalSeconds() const{ return m_keyRotationIntervalSeconds; }

    /**
     * Interval (in seconds) between each encryption key rotation.
     */
    inline bool KeyRotationIntervalSecondsHasBeenSet() const { return m_keyRotationIntervalSecondsHasBeenSet; }

    /**
     * Interval (in seconds) between each encryption key rotation.
     */
    inline void SetKeyRotationIntervalSeconds(int value) { m_keyRotationIntervalSecondsHasBeenSet = true; m_keyRotationIntervalSeconds = value; }

    /**
     * Interval (in seconds) between each encryption key rotation.
     */
    inline HlsEncryption& WithKeyRotationIntervalSeconds(int value) { SetKeyRotationIntervalSeconds(value); return *this;}


    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline bool GetRepeatExtXKey() const{ return m_repeatExtXKey; }

    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline bool RepeatExtXKeyHasBeenSet() const { return m_repeatExtXKeyHasBeenSet; }

    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline void SetRepeatExtXKey(bool value) { m_repeatExtXKeyHasBeenSet = true; m_repeatExtXKey = value; }

    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline HlsEncryption& WithRepeatExtXKey(bool value) { SetRepeatExtXKey(value); return *this;}


    
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    
    inline HlsEncryption& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    
    inline HlsEncryption& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}

  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet;

    EncryptionMethod m_encryptionMethod;
    bool m_encryptionMethodHasBeenSet;

    int m_keyRotationIntervalSeconds;
    bool m_keyRotationIntervalSecondsHasBeenSet;

    bool m_repeatExtXKey;
    bool m_repeatExtXKeyHasBeenSet;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
