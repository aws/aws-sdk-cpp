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
#include <aws/mediaconvert/model/MsSmoothAudioDeduplication.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/MsSmoothEncryptionSettings.h>
#include <aws/mediaconvert/model/MsSmoothManifestEncoding.h>
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
   * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
   * MS_SMOOTH_GROUP_SETTINGS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MsSmoothGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API MsSmoothGroupSettings
  {
  public:
    MsSmoothGroupSettings();
    MsSmoothGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    MsSmoothGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * COMBINE_DUPLICATE_STREAMS combines identical audio encoding settings across a
     * Microsoft Smooth output group into a single audio stream.
     */
    inline const MsSmoothAudioDeduplication& GetAudioDeduplication() const{ return m_audioDeduplication; }

    /**
     * COMBINE_DUPLICATE_STREAMS combines identical audio encoding settings across a
     * Microsoft Smooth output group into a single audio stream.
     */
    inline bool AudioDeduplicationHasBeenSet() const { return m_audioDeduplicationHasBeenSet; }

    /**
     * COMBINE_DUPLICATE_STREAMS combines identical audio encoding settings across a
     * Microsoft Smooth output group into a single audio stream.
     */
    inline void SetAudioDeduplication(const MsSmoothAudioDeduplication& value) { m_audioDeduplicationHasBeenSet = true; m_audioDeduplication = value; }

    /**
     * COMBINE_DUPLICATE_STREAMS combines identical audio encoding settings across a
     * Microsoft Smooth output group into a single audio stream.
     */
    inline void SetAudioDeduplication(MsSmoothAudioDeduplication&& value) { m_audioDeduplicationHasBeenSet = true; m_audioDeduplication = std::move(value); }

    /**
     * COMBINE_DUPLICATE_STREAMS combines identical audio encoding settings across a
     * Microsoft Smooth output group into a single audio stream.
     */
    inline MsSmoothGroupSettings& WithAudioDeduplication(const MsSmoothAudioDeduplication& value) { SetAudioDeduplication(value); return *this;}

    /**
     * COMBINE_DUPLICATE_STREAMS combines identical audio encoding settings across a
     * Microsoft Smooth output group into a single audio stream.
     */
    inline MsSmoothGroupSettings& WithAudioDeduplication(MsSmoothAudioDeduplication&& value) { SetAudioDeduplication(std::move(value)); return *this;}


    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline MsSmoothGroupSettings& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline MsSmoothGroupSettings& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline MsSmoothGroupSettings& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline const DestinationSettings& GetDestinationSettings() const{ return m_destinationSettings; }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline void SetDestinationSettings(const DestinationSettings& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = value; }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline void SetDestinationSettings(DestinationSettings&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::move(value); }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline MsSmoothGroupSettings& WithDestinationSettings(const DestinationSettings& value) { SetDestinationSettings(value); return *this;}

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline MsSmoothGroupSettings& WithDestinationSettings(DestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}


    /**
     * If you are using DRM, set DRM System (MsSmoothEncryptionSettings) to specify the
     * value SpekeKeyProvider.
     */
    inline const MsSmoothEncryptionSettings& GetEncryption() const{ return m_encryption; }

    /**
     * If you are using DRM, set DRM System (MsSmoothEncryptionSettings) to specify the
     * value SpekeKeyProvider.
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * If you are using DRM, set DRM System (MsSmoothEncryptionSettings) to specify the
     * value SpekeKeyProvider.
     */
    inline void SetEncryption(const MsSmoothEncryptionSettings& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * If you are using DRM, set DRM System (MsSmoothEncryptionSettings) to specify the
     * value SpekeKeyProvider.
     */
    inline void SetEncryption(MsSmoothEncryptionSettings&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * If you are using DRM, set DRM System (MsSmoothEncryptionSettings) to specify the
     * value SpekeKeyProvider.
     */
    inline MsSmoothGroupSettings& WithEncryption(const MsSmoothEncryptionSettings& value) { SetEncryption(value); return *this;}

    /**
     * If you are using DRM, set DRM System (MsSmoothEncryptionSettings) to specify the
     * value SpekeKeyProvider.
     */
    inline MsSmoothGroupSettings& WithEncryption(MsSmoothEncryptionSettings&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * Use Fragment length (FragmentLength) to specify the mp4 fragment sizes in
     * seconds. Fragment length must be compatible with GOP size and frame rate.
     */
    inline int GetFragmentLength() const{ return m_fragmentLength; }

    /**
     * Use Fragment length (FragmentLength) to specify the mp4 fragment sizes in
     * seconds. Fragment length must be compatible with GOP size and frame rate.
     */
    inline bool FragmentLengthHasBeenSet() const { return m_fragmentLengthHasBeenSet; }

    /**
     * Use Fragment length (FragmentLength) to specify the mp4 fragment sizes in
     * seconds. Fragment length must be compatible with GOP size and frame rate.
     */
    inline void SetFragmentLength(int value) { m_fragmentLengthHasBeenSet = true; m_fragmentLength = value; }

    /**
     * Use Fragment length (FragmentLength) to specify the mp4 fragment sizes in
     * seconds. Fragment length must be compatible with GOP size and frame rate.
     */
    inline MsSmoothGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}


    /**
     * Use Manifest encoding (MsSmoothManifestEncoding) to specify the encoding format
     * for the server and client manifest. Valid options are utf8 and utf16.
     */
    inline const MsSmoothManifestEncoding& GetManifestEncoding() const{ return m_manifestEncoding; }

    /**
     * Use Manifest encoding (MsSmoothManifestEncoding) to specify the encoding format
     * for the server and client manifest. Valid options are utf8 and utf16.
     */
    inline bool ManifestEncodingHasBeenSet() const { return m_manifestEncodingHasBeenSet; }

    /**
     * Use Manifest encoding (MsSmoothManifestEncoding) to specify the encoding format
     * for the server and client manifest. Valid options are utf8 and utf16.
     */
    inline void SetManifestEncoding(const MsSmoothManifestEncoding& value) { m_manifestEncodingHasBeenSet = true; m_manifestEncoding = value; }

    /**
     * Use Manifest encoding (MsSmoothManifestEncoding) to specify the encoding format
     * for the server and client manifest. Valid options are utf8 and utf16.
     */
    inline void SetManifestEncoding(MsSmoothManifestEncoding&& value) { m_manifestEncodingHasBeenSet = true; m_manifestEncoding = std::move(value); }

    /**
     * Use Manifest encoding (MsSmoothManifestEncoding) to specify the encoding format
     * for the server and client manifest. Valid options are utf8 and utf16.
     */
    inline MsSmoothGroupSettings& WithManifestEncoding(const MsSmoothManifestEncoding& value) { SetManifestEncoding(value); return *this;}

    /**
     * Use Manifest encoding (MsSmoothManifestEncoding) to specify the encoding format
     * for the server and client manifest. Valid options are utf8 and utf16.
     */
    inline MsSmoothGroupSettings& WithManifestEncoding(MsSmoothManifestEncoding&& value) { SetManifestEncoding(std::move(value)); return *this;}

  private:

    MsSmoothAudioDeduplication m_audioDeduplication;
    bool m_audioDeduplicationHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet;

    MsSmoothEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet;

    int m_fragmentLength;
    bool m_fragmentLengthHasBeenSet;

    MsSmoothManifestEncoding m_manifestEncoding;
    bool m_manifestEncodingHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
