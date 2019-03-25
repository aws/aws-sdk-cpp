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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/HlsEncryptionType.h>
#include <aws/mediaconvert/model/HlsInitializationVectorInManifest.h>
#include <aws/mediaconvert/model/HlsOfflineEncrypted.h>
#include <aws/mediaconvert/model/SpekeKeyProvider.h>
#include <aws/mediaconvert/model/StaticKeyProvider.h>
#include <aws/mediaconvert/model/HlsKeyProviderType.h>
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
   * Settings for HLS encryption<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsEncryptionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API HlsEncryptionSettings
  {
  public:
    HlsEncryptionSettings();
    HlsEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    HlsEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline const Aws::String& GetConstantInitializationVector() const{ return m_constantInitializationVector; }

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline bool ConstantInitializationVectorHasBeenSet() const { return m_constantInitializationVectorHasBeenSet; }

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline void SetConstantInitializationVector(const Aws::String& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = value; }

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline void SetConstantInitializationVector(Aws::String&& value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector = std::move(value); }

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline void SetConstantInitializationVector(const char* value) { m_constantInitializationVectorHasBeenSet = true; m_constantInitializationVector.assign(value); }

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline HlsEncryptionSettings& WithConstantInitializationVector(const Aws::String& value) { SetConstantInitializationVector(value); return *this;}

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline HlsEncryptionSettings& WithConstantInitializationVector(Aws::String&& value) { SetConstantInitializationVector(std::move(value)); return *this;}

    /**
     * This is a 128-bit, 16-byte hex value represented by a 32-character text string.
     * If this parameter is not set then the Initialization Vector will follow the
     * segment number by default.
     */
    inline HlsEncryptionSettings& WithConstantInitializationVector(const char* value) { SetConstantInitializationVector(value); return *this;}


    /**
     * Encrypts the segments with the given encryption scheme. Leave blank to disable.
     * Selecting 'Disabled' in the web interface also disables encryption.
     */
    inline const HlsEncryptionType& GetEncryptionMethod() const{ return m_encryptionMethod; }

    /**
     * Encrypts the segments with the given encryption scheme. Leave blank to disable.
     * Selecting 'Disabled' in the web interface also disables encryption.
     */
    inline bool EncryptionMethodHasBeenSet() const { return m_encryptionMethodHasBeenSet; }

    /**
     * Encrypts the segments with the given encryption scheme. Leave blank to disable.
     * Selecting 'Disabled' in the web interface also disables encryption.
     */
    inline void SetEncryptionMethod(const HlsEncryptionType& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = value; }

    /**
     * Encrypts the segments with the given encryption scheme. Leave blank to disable.
     * Selecting 'Disabled' in the web interface also disables encryption.
     */
    inline void SetEncryptionMethod(HlsEncryptionType&& value) { m_encryptionMethodHasBeenSet = true; m_encryptionMethod = std::move(value); }

    /**
     * Encrypts the segments with the given encryption scheme. Leave blank to disable.
     * Selecting 'Disabled' in the web interface also disables encryption.
     */
    inline HlsEncryptionSettings& WithEncryptionMethod(const HlsEncryptionType& value) { SetEncryptionMethod(value); return *this;}

    /**
     * Encrypts the segments with the given encryption scheme. Leave blank to disable.
     * Selecting 'Disabled' in the web interface also disables encryption.
     */
    inline HlsEncryptionSettings& WithEncryptionMethod(HlsEncryptionType&& value) { SetEncryptionMethod(std::move(value)); return *this;}


    /**
     * The Initialization Vector is a 128-bit number used in conjunction with the key
     * for encrypting blocks. If set to INCLUDE, Initialization Vector is listed in the
     * manifest. Otherwise Initialization Vector is not in the manifest.
     */
    inline const HlsInitializationVectorInManifest& GetInitializationVectorInManifest() const{ return m_initializationVectorInManifest; }

    /**
     * The Initialization Vector is a 128-bit number used in conjunction with the key
     * for encrypting blocks. If set to INCLUDE, Initialization Vector is listed in the
     * manifest. Otherwise Initialization Vector is not in the manifest.
     */
    inline bool InitializationVectorInManifestHasBeenSet() const { return m_initializationVectorInManifestHasBeenSet; }

    /**
     * The Initialization Vector is a 128-bit number used in conjunction with the key
     * for encrypting blocks. If set to INCLUDE, Initialization Vector is listed in the
     * manifest. Otherwise Initialization Vector is not in the manifest.
     */
    inline void SetInitializationVectorInManifest(const HlsInitializationVectorInManifest& value) { m_initializationVectorInManifestHasBeenSet = true; m_initializationVectorInManifest = value; }

    /**
     * The Initialization Vector is a 128-bit number used in conjunction with the key
     * for encrypting blocks. If set to INCLUDE, Initialization Vector is listed in the
     * manifest. Otherwise Initialization Vector is not in the manifest.
     */
    inline void SetInitializationVectorInManifest(HlsInitializationVectorInManifest&& value) { m_initializationVectorInManifestHasBeenSet = true; m_initializationVectorInManifest = std::move(value); }

    /**
     * The Initialization Vector is a 128-bit number used in conjunction with the key
     * for encrypting blocks. If set to INCLUDE, Initialization Vector is listed in the
     * manifest. Otherwise Initialization Vector is not in the manifest.
     */
    inline HlsEncryptionSettings& WithInitializationVectorInManifest(const HlsInitializationVectorInManifest& value) { SetInitializationVectorInManifest(value); return *this;}

    /**
     * The Initialization Vector is a 128-bit number used in conjunction with the key
     * for encrypting blocks. If set to INCLUDE, Initialization Vector is listed in the
     * manifest. Otherwise Initialization Vector is not in the manifest.
     */
    inline HlsEncryptionSettings& WithInitializationVectorInManifest(HlsInitializationVectorInManifest&& value) { SetInitializationVectorInManifest(std::move(value)); return *this;}


    /**
     * Enable this setting to insert the EXT-X-SESSION-KEY element into the master
     * playlist. This allows for offline Apple HLS FairPlay content protection.
     */
    inline const HlsOfflineEncrypted& GetOfflineEncrypted() const{ return m_offlineEncrypted; }

    /**
     * Enable this setting to insert the EXT-X-SESSION-KEY element into the master
     * playlist. This allows for offline Apple HLS FairPlay content protection.
     */
    inline bool OfflineEncryptedHasBeenSet() const { return m_offlineEncryptedHasBeenSet; }

    /**
     * Enable this setting to insert the EXT-X-SESSION-KEY element into the master
     * playlist. This allows for offline Apple HLS FairPlay content protection.
     */
    inline void SetOfflineEncrypted(const HlsOfflineEncrypted& value) { m_offlineEncryptedHasBeenSet = true; m_offlineEncrypted = value; }

    /**
     * Enable this setting to insert the EXT-X-SESSION-KEY element into the master
     * playlist. This allows for offline Apple HLS FairPlay content protection.
     */
    inline void SetOfflineEncrypted(HlsOfflineEncrypted&& value) { m_offlineEncryptedHasBeenSet = true; m_offlineEncrypted = std::move(value); }

    /**
     * Enable this setting to insert the EXT-X-SESSION-KEY element into the master
     * playlist. This allows for offline Apple HLS FairPlay content protection.
     */
    inline HlsEncryptionSettings& WithOfflineEncrypted(const HlsOfflineEncrypted& value) { SetOfflineEncrypted(value); return *this;}

    /**
     * Enable this setting to insert the EXT-X-SESSION-KEY element into the master
     * playlist. This allows for offline Apple HLS FairPlay content protection.
     */
    inline HlsEncryptionSettings& WithOfflineEncrypted(HlsOfflineEncrypted&& value) { SetOfflineEncrypted(std::move(value)); return *this;}


    /**
     * Settings for use with a SPEKE key provider
     */
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    /**
     * Settings for use with a SPEKE key provider
     */
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    /**
     * Settings for use with a SPEKE key provider
     */
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    /**
     * Settings for use with a SPEKE key provider
     */
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    /**
     * Settings for use with a SPEKE key provider
     */
    inline HlsEncryptionSettings& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    /**
     * Settings for use with a SPEKE key provider
     */
    inline HlsEncryptionSettings& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}


    /**
     * Use these settings to set up encryption with a static key provider.
     */
    inline const StaticKeyProvider& GetStaticKeyProvider() const{ return m_staticKeyProvider; }

    /**
     * Use these settings to set up encryption with a static key provider.
     */
    inline bool StaticKeyProviderHasBeenSet() const { return m_staticKeyProviderHasBeenSet; }

    /**
     * Use these settings to set up encryption with a static key provider.
     */
    inline void SetStaticKeyProvider(const StaticKeyProvider& value) { m_staticKeyProviderHasBeenSet = true; m_staticKeyProvider = value; }

    /**
     * Use these settings to set up encryption with a static key provider.
     */
    inline void SetStaticKeyProvider(StaticKeyProvider&& value) { m_staticKeyProviderHasBeenSet = true; m_staticKeyProvider = std::move(value); }

    /**
     * Use these settings to set up encryption with a static key provider.
     */
    inline HlsEncryptionSettings& WithStaticKeyProvider(const StaticKeyProvider& value) { SetStaticKeyProvider(value); return *this;}

    /**
     * Use these settings to set up encryption with a static key provider.
     */
    inline HlsEncryptionSettings& WithStaticKeyProvider(StaticKeyProvider&& value) { SetStaticKeyProvider(std::move(value)); return *this;}


    /**
     * Indicates which type of key provider is used for encryption.
     */
    inline const HlsKeyProviderType& GetType() const{ return m_type; }

    /**
     * Indicates which type of key provider is used for encryption.
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * Indicates which type of key provider is used for encryption.
     */
    inline void SetType(const HlsKeyProviderType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * Indicates which type of key provider is used for encryption.
     */
    inline void SetType(HlsKeyProviderType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * Indicates which type of key provider is used for encryption.
     */
    inline HlsEncryptionSettings& WithType(const HlsKeyProviderType& value) { SetType(value); return *this;}

    /**
     * Indicates which type of key provider is used for encryption.
     */
    inline HlsEncryptionSettings& WithType(HlsKeyProviderType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_constantInitializationVector;
    bool m_constantInitializationVectorHasBeenSet;

    HlsEncryptionType m_encryptionMethod;
    bool m_encryptionMethodHasBeenSet;

    HlsInitializationVectorInManifest m_initializationVectorInManifest;
    bool m_initializationVectorInManifestHasBeenSet;

    HlsOfflineEncrypted m_offlineEncrypted;
    bool m_offlineEncryptedHasBeenSet;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet;

    StaticKeyProvider m_staticKeyProvider;
    bool m_staticKeyProviderHasBeenSet;

    HlsKeyProviderType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
