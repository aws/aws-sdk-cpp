/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/MsSmoothAudioDeduplication.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/MsSmoothEncryptionSettings.h>
#include <aws/mediaconvert/model/MsSmoothManifestEncoding.h>
#include <aws/mediaconvert/model/MsSmoothAdditionalManifest.h>
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
     * By default, the service creates one .ism Microsoft Smooth Streaming manifest for
     * each Microsoft Smooth Streaming output group in your job. This default manifest
     * references every output in the output group. To create additional manifests that
     * reference a subset of the outputs in the output group, specify a list of them
     * here.
     */
    inline const Aws::Vector<MsSmoothAdditionalManifest>& GetAdditionalManifests() const{ return m_additionalManifests; }

    /**
     * By default, the service creates one .ism Microsoft Smooth Streaming manifest for
     * each Microsoft Smooth Streaming output group in your job. This default manifest
     * references every output in the output group. To create additional manifests that
     * reference a subset of the outputs in the output group, specify a list of them
     * here.
     */
    inline bool AdditionalManifestsHasBeenSet() const { return m_additionalManifestsHasBeenSet; }

    /**
     * By default, the service creates one .ism Microsoft Smooth Streaming manifest for
     * each Microsoft Smooth Streaming output group in your job. This default manifest
     * references every output in the output group. To create additional manifests that
     * reference a subset of the outputs in the output group, specify a list of them
     * here.
     */
    inline void SetAdditionalManifests(const Aws::Vector<MsSmoothAdditionalManifest>& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = value; }

    /**
     * By default, the service creates one .ism Microsoft Smooth Streaming manifest for
     * each Microsoft Smooth Streaming output group in your job. This default manifest
     * references every output in the output group. To create additional manifests that
     * reference a subset of the outputs in the output group, specify a list of them
     * here.
     */
    inline void SetAdditionalManifests(Aws::Vector<MsSmoothAdditionalManifest>&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = std::move(value); }

    /**
     * By default, the service creates one .ism Microsoft Smooth Streaming manifest for
     * each Microsoft Smooth Streaming output group in your job. This default manifest
     * references every output in the output group. To create additional manifests that
     * reference a subset of the outputs in the output group, specify a list of them
     * here.
     */
    inline MsSmoothGroupSettings& WithAdditionalManifests(const Aws::Vector<MsSmoothAdditionalManifest>& value) { SetAdditionalManifests(value); return *this;}

    /**
     * By default, the service creates one .ism Microsoft Smooth Streaming manifest for
     * each Microsoft Smooth Streaming output group in your job. This default manifest
     * references every output in the output group. To create additional manifests that
     * reference a subset of the outputs in the output group, specify a list of them
     * here.
     */
    inline MsSmoothGroupSettings& WithAdditionalManifests(Aws::Vector<MsSmoothAdditionalManifest>&& value) { SetAdditionalManifests(std::move(value)); return *this;}

    /**
     * By default, the service creates one .ism Microsoft Smooth Streaming manifest for
     * each Microsoft Smooth Streaming output group in your job. This default manifest
     * references every output in the output group. To create additional manifests that
     * reference a subset of the outputs in the output group, specify a list of them
     * here.
     */
    inline MsSmoothGroupSettings& AddAdditionalManifests(const MsSmoothAdditionalManifest& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.push_back(value); return *this; }

    /**
     * By default, the service creates one .ism Microsoft Smooth Streaming manifest for
     * each Microsoft Smooth Streaming output group in your job. This default manifest
     * references every output in the output group. To create additional manifests that
     * reference a subset of the outputs in the output group, specify a list of them
     * here.
     */
    inline MsSmoothGroupSettings& AddAdditionalManifests(MsSmoothAdditionalManifest&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.push_back(std::move(value)); return *this; }


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

    Aws::Vector<MsSmoothAdditionalManifest> m_additionalManifests;
    bool m_additionalManifestsHasBeenSet;

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
