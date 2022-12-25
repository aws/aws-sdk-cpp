/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/CmafClientCache.h>
#include <aws/mediaconvert/model/CmafCodecSpecification.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/CmafEncryptionSettings.h>
#include <aws/mediaconvert/model/CmafImageBasedTrickPlay.h>
#include <aws/mediaconvert/model/CmafImageBasedTrickPlaySettings.h>
#include <aws/mediaconvert/model/CmafManifestCompression.h>
#include <aws/mediaconvert/model/CmafManifestDurationFormat.h>
#include <aws/mediaconvert/model/CmafMpdManifestBandwidthType.h>
#include <aws/mediaconvert/model/CmafMpdProfile.h>
#include <aws/mediaconvert/model/CmafPtsOffsetHandlingForBFrames.h>
#include <aws/mediaconvert/model/CmafSegmentControl.h>
#include <aws/mediaconvert/model/CmafSegmentLengthControl.h>
#include <aws/mediaconvert/model/CmafStreamInfResolution.h>
#include <aws/mediaconvert/model/CmafTargetDurationCompatibilityMode.h>
#include <aws/mediaconvert/model/CmafVideoCompositionOffsets.h>
#include <aws/mediaconvert/model/CmafWriteDASHManifest.h>
#include <aws/mediaconvert/model/CmafWriteHLSManifest.h>
#include <aws/mediaconvert/model/CmafWriteSegmentTimelineInRepresentation.h>
#include <aws/mediaconvert/model/CmafAdditionalManifest.h>
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
   * Settings related to your CMAF output package. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
   * you work directly in your JSON job specification, include this object and any
   * required children when you set Type, under OutputGroupSettings, to
   * CMAF_GROUP_SETTINGS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CmafGroupSettings">AWS
   * API Reference</a></p>
   */
  class CmafGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API CmafGroupSettings();
    AWS_MEDIACONVERT_API CmafGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CmafGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * By default, the service creates one top-level .m3u8 HLS manifest and one top
     * -level .mpd DASH manifest for each CMAF output group in your job. These default
     * manifests reference every output in the output group. To create additional
     * top-level manifests that reference a subset of the outputs in the output group,
     * specify a list of them here. For each additional manifest that you specify, the
     * service creates one HLS manifest and one DASH manifest.
     */
    inline const Aws::Vector<CmafAdditionalManifest>& GetAdditionalManifests() const{ return m_additionalManifests; }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest and one top
     * -level .mpd DASH manifest for each CMAF output group in your job. These default
     * manifests reference every output in the output group. To create additional
     * top-level manifests that reference a subset of the outputs in the output group,
     * specify a list of them here. For each additional manifest that you specify, the
     * service creates one HLS manifest and one DASH manifest.
     */
    inline bool AdditionalManifestsHasBeenSet() const { return m_additionalManifestsHasBeenSet; }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest and one top
     * -level .mpd DASH manifest for each CMAF output group in your job. These default
     * manifests reference every output in the output group. To create additional
     * top-level manifests that reference a subset of the outputs in the output group,
     * specify a list of them here. For each additional manifest that you specify, the
     * service creates one HLS manifest and one DASH manifest.
     */
    inline void SetAdditionalManifests(const Aws::Vector<CmafAdditionalManifest>& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = value; }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest and one top
     * -level .mpd DASH manifest for each CMAF output group in your job. These default
     * manifests reference every output in the output group. To create additional
     * top-level manifests that reference a subset of the outputs in the output group,
     * specify a list of them here. For each additional manifest that you specify, the
     * service creates one HLS manifest and one DASH manifest.
     */
    inline void SetAdditionalManifests(Aws::Vector<CmafAdditionalManifest>&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = std::move(value); }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest and one top
     * -level .mpd DASH manifest for each CMAF output group in your job. These default
     * manifests reference every output in the output group. To create additional
     * top-level manifests that reference a subset of the outputs in the output group,
     * specify a list of them here. For each additional manifest that you specify, the
     * service creates one HLS manifest and one DASH manifest.
     */
    inline CmafGroupSettings& WithAdditionalManifests(const Aws::Vector<CmafAdditionalManifest>& value) { SetAdditionalManifests(value); return *this;}

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest and one top
     * -level .mpd DASH manifest for each CMAF output group in your job. These default
     * manifests reference every output in the output group. To create additional
     * top-level manifests that reference a subset of the outputs in the output group,
     * specify a list of them here. For each additional manifest that you specify, the
     * service creates one HLS manifest and one DASH manifest.
     */
    inline CmafGroupSettings& WithAdditionalManifests(Aws::Vector<CmafAdditionalManifest>&& value) { SetAdditionalManifests(std::move(value)); return *this;}

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest and one top
     * -level .mpd DASH manifest for each CMAF output group in your job. These default
     * manifests reference every output in the output group. To create additional
     * top-level manifests that reference a subset of the outputs in the output group,
     * specify a list of them here. For each additional manifest that you specify, the
     * service creates one HLS manifest and one DASH manifest.
     */
    inline CmafGroupSettings& AddAdditionalManifests(const CmafAdditionalManifest& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.push_back(value); return *this; }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest and one top
     * -level .mpd DASH manifest for each CMAF output group in your job. These default
     * manifests reference every output in the output group. To create additional
     * top-level manifests that reference a subset of the outputs in the output group,
     * specify a list of them here. For each additional manifest that you specify, the
     * service creates one HLS manifest and one DASH manifest.
     */
    inline CmafGroupSettings& AddAdditionalManifests(CmafAdditionalManifest&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.push_back(std::move(value)); return *this; }


    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline const Aws::String& GetBaseUrl() const{ return m_baseUrl; }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline void SetBaseUrl(const Aws::String& value) { m_baseUrlHasBeenSet = true; m_baseUrl = value; }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline void SetBaseUrl(Aws::String&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::move(value); }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline void SetBaseUrl(const char* value) { m_baseUrlHasBeenSet = true; m_baseUrl.assign(value); }

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline CmafGroupSettings& WithBaseUrl(const Aws::String& value) { SetBaseUrl(value); return *this;}

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline CmafGroupSettings& WithBaseUrl(Aws::String&& value) { SetBaseUrl(std::move(value)); return *this;}

    /**
     * A partial URI prefix that will be put in the manifest file at the top level
     * BaseURL element. Can be used if streams are delivered from a different URL than
     * the manifest file.
     */
    inline CmafGroupSettings& WithBaseUrl(const char* value) { SetBaseUrl(value); return *this;}


    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline const CmafClientCache& GetClientCache() const{ return m_clientCache; }

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline bool ClientCacheHasBeenSet() const { return m_clientCacheHasBeenSet; }

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline void SetClientCache(const CmafClientCache& value) { m_clientCacheHasBeenSet = true; m_clientCache = value; }

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline void SetClientCache(CmafClientCache&& value) { m_clientCacheHasBeenSet = true; m_clientCache = std::move(value); }

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline CmafGroupSettings& WithClientCache(const CmafClientCache& value) { SetClientCache(value); return *this;}

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline CmafGroupSettings& WithClientCache(CmafClientCache&& value) { SetClientCache(std::move(value)); return *this;}


    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline const CmafCodecSpecification& GetCodecSpecification() const{ return m_codecSpecification; }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline bool CodecSpecificationHasBeenSet() const { return m_codecSpecificationHasBeenSet; }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline void SetCodecSpecification(const CmafCodecSpecification& value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = value; }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline void SetCodecSpecification(CmafCodecSpecification&& value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = std::move(value); }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline CmafGroupSettings& WithCodecSpecification(const CmafCodecSpecification& value) { SetCodecSpecification(value); return *this;}

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline CmafGroupSettings& WithCodecSpecification(CmafCodecSpecification&& value) { SetCodecSpecification(std::move(value)); return *this;}


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
    inline CmafGroupSettings& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline CmafGroupSettings& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline CmafGroupSettings& WithDestination(const char* value) { SetDestination(value); return *this;}


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
    inline CmafGroupSettings& WithDestinationSettings(const DestinationSettings& value) { SetDestinationSettings(value); return *this;}

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline CmafGroupSettings& WithDestinationSettings(DestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}


    /**
     * DRM settings.
     */
    inline const CmafEncryptionSettings& GetEncryption() const{ return m_encryption; }

    /**
     * DRM settings.
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * DRM settings.
     */
    inline void SetEncryption(const CmafEncryptionSettings& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * DRM settings.
     */
    inline void SetEncryption(CmafEncryptionSettings&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * DRM settings.
     */
    inline CmafGroupSettings& WithEncryption(const CmafEncryptionSettings& value) { SetEncryption(value); return *this;}

    /**
     * DRM settings.
     */
    inline CmafGroupSettings& WithEncryption(CmafEncryptionSettings&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * Specify the length, in whole seconds, of the mp4 fragments. When you don't
     * specify a value, MediaConvert defaults to 2. Related setting: Use Fragment
     * length control (FragmentLengthControl) to specify whether the encoder enforces
     * this value strictly.
     */
    inline int GetFragmentLength() const{ return m_fragmentLength; }

    /**
     * Specify the length, in whole seconds, of the mp4 fragments. When you don't
     * specify a value, MediaConvert defaults to 2. Related setting: Use Fragment
     * length control (FragmentLengthControl) to specify whether the encoder enforces
     * this value strictly.
     */
    inline bool FragmentLengthHasBeenSet() const { return m_fragmentLengthHasBeenSet; }

    /**
     * Specify the length, in whole seconds, of the mp4 fragments. When you don't
     * specify a value, MediaConvert defaults to 2. Related setting: Use Fragment
     * length control (FragmentLengthControl) to specify whether the encoder enforces
     * this value strictly.
     */
    inline void SetFragmentLength(int value) { m_fragmentLengthHasBeenSet = true; m_fragmentLength = value; }

    /**
     * Specify the length, in whole seconds, of the mp4 fragments. When you don't
     * specify a value, MediaConvert defaults to 2. Related setting: Use Fragment
     * length control (FragmentLengthControl) to specify whether the encoder enforces
     * this value strictly.
     */
    inline CmafGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}


    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. When you enable Write HLS manifest (WriteHlsManifest),
     * MediaConvert creates a child manifest for each set of images that you generate
     * and adds corresponding entries to the parent manifest. When you enable Write
     * DASH manifest (WriteDashManifest), MediaConvert adds an entry in the .mpd
     * manifest for each set of images that you generate. A common application for
     * these images is Roku trick mode. The thumbnails and full-frame images that
     * MediaConvert creates with this feature are compatible with this Roku
     * specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline const CmafImageBasedTrickPlay& GetImageBasedTrickPlay() const{ return m_imageBasedTrickPlay; }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. When you enable Write HLS manifest (WriteHlsManifest),
     * MediaConvert creates a child manifest for each set of images that you generate
     * and adds corresponding entries to the parent manifest. When you enable Write
     * DASH manifest (WriteDashManifest), MediaConvert adds an entry in the .mpd
     * manifest for each set of images that you generate. A common application for
     * these images is Roku trick mode. The thumbnails and full-frame images that
     * MediaConvert creates with this feature are compatible with this Roku
     * specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline bool ImageBasedTrickPlayHasBeenSet() const { return m_imageBasedTrickPlayHasBeenSet; }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. When you enable Write HLS manifest (WriteHlsManifest),
     * MediaConvert creates a child manifest for each set of images that you generate
     * and adds corresponding entries to the parent manifest. When you enable Write
     * DASH manifest (WriteDashManifest), MediaConvert adds an entry in the .mpd
     * manifest for each set of images that you generate. A common application for
     * these images is Roku trick mode. The thumbnails and full-frame images that
     * MediaConvert creates with this feature are compatible with this Roku
     * specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline void SetImageBasedTrickPlay(const CmafImageBasedTrickPlay& value) { m_imageBasedTrickPlayHasBeenSet = true; m_imageBasedTrickPlay = value; }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. When you enable Write HLS manifest (WriteHlsManifest),
     * MediaConvert creates a child manifest for each set of images that you generate
     * and adds corresponding entries to the parent manifest. When you enable Write
     * DASH manifest (WriteDashManifest), MediaConvert adds an entry in the .mpd
     * manifest for each set of images that you generate. A common application for
     * these images is Roku trick mode. The thumbnails and full-frame images that
     * MediaConvert creates with this feature are compatible with this Roku
     * specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline void SetImageBasedTrickPlay(CmafImageBasedTrickPlay&& value) { m_imageBasedTrickPlayHasBeenSet = true; m_imageBasedTrickPlay = std::move(value); }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. When you enable Write HLS manifest (WriteHlsManifest),
     * MediaConvert creates a child manifest for each set of images that you generate
     * and adds corresponding entries to the parent manifest. When you enable Write
     * DASH manifest (WriteDashManifest), MediaConvert adds an entry in the .mpd
     * manifest for each set of images that you generate. A common application for
     * these images is Roku trick mode. The thumbnails and full-frame images that
     * MediaConvert creates with this feature are compatible with this Roku
     * specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline CmafGroupSettings& WithImageBasedTrickPlay(const CmafImageBasedTrickPlay& value) { SetImageBasedTrickPlay(value); return *this;}

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. When you enable Write HLS manifest (WriteHlsManifest),
     * MediaConvert creates a child manifest for each set of images that you generate
     * and adds corresponding entries to the parent manifest. When you enable Write
     * DASH manifest (WriteDashManifest), MediaConvert adds an entry in the .mpd
     * manifest for each set of images that you generate. A common application for
     * these images is Roku trick mode. The thumbnails and full-frame images that
     * MediaConvert creates with this feature are compatible with this Roku
     * specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline CmafGroupSettings& WithImageBasedTrickPlay(CmafImageBasedTrickPlay&& value) { SetImageBasedTrickPlay(std::move(value)); return *this;}


    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline const CmafImageBasedTrickPlaySettings& GetImageBasedTrickPlaySettings() const{ return m_imageBasedTrickPlaySettings; }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline bool ImageBasedTrickPlaySettingsHasBeenSet() const { return m_imageBasedTrickPlaySettingsHasBeenSet; }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline void SetImageBasedTrickPlaySettings(const CmafImageBasedTrickPlaySettings& value) { m_imageBasedTrickPlaySettingsHasBeenSet = true; m_imageBasedTrickPlaySettings = value; }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline void SetImageBasedTrickPlaySettings(CmafImageBasedTrickPlaySettings&& value) { m_imageBasedTrickPlaySettingsHasBeenSet = true; m_imageBasedTrickPlaySettings = std::move(value); }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline CmafGroupSettings& WithImageBasedTrickPlaySettings(const CmafImageBasedTrickPlaySettings& value) { SetImageBasedTrickPlaySettings(value); return *this;}

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline CmafGroupSettings& WithImageBasedTrickPlaySettings(CmafImageBasedTrickPlaySettings&& value) { SetImageBasedTrickPlaySettings(std::move(value)); return *this;}


    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline const CmafManifestCompression& GetManifestCompression() const{ return m_manifestCompression; }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline bool ManifestCompressionHasBeenSet() const { return m_manifestCompressionHasBeenSet; }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline void SetManifestCompression(const CmafManifestCompression& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = value; }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline void SetManifestCompression(CmafManifestCompression&& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = std::move(value); }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline CmafGroupSettings& WithManifestCompression(const CmafManifestCompression& value) { SetManifestCompression(value); return *this;}

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline CmafGroupSettings& WithManifestCompression(CmafManifestCompression&& value) { SetManifestCompression(std::move(value)); return *this;}


    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline const CmafManifestDurationFormat& GetManifestDurationFormat() const{ return m_manifestDurationFormat; }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline bool ManifestDurationFormatHasBeenSet() const { return m_manifestDurationFormatHasBeenSet; }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline void SetManifestDurationFormat(const CmafManifestDurationFormat& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = value; }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline void SetManifestDurationFormat(CmafManifestDurationFormat&& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = std::move(value); }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline CmafGroupSettings& WithManifestDurationFormat(const CmafManifestDurationFormat& value) { SetManifestDurationFormat(value); return *this;}

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline CmafGroupSettings& WithManifestDurationFormat(CmafManifestDurationFormat&& value) { SetManifestDurationFormat(std::move(value)); return *this;}


    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline int GetMinBufferTime() const{ return m_minBufferTime; }

    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline bool MinBufferTimeHasBeenSet() const { return m_minBufferTimeHasBeenSet; }

    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline void SetMinBufferTime(int value) { m_minBufferTimeHasBeenSet = true; m_minBufferTime = value; }

    /**
     * Minimum time of initially buffered media that is needed to ensure smooth
     * playout.
     */
    inline CmafGroupSettings& WithMinBufferTime(int value) { SetMinBufferTime(value); return *this;}


    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline double GetMinFinalSegmentLength() const{ return m_minFinalSegmentLength; }

    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline bool MinFinalSegmentLengthHasBeenSet() const { return m_minFinalSegmentLengthHasBeenSet; }

    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline void SetMinFinalSegmentLength(double value) { m_minFinalSegmentLengthHasBeenSet = true; m_minFinalSegmentLength = value; }

    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline CmafGroupSettings& WithMinFinalSegmentLength(double value) { SetMinFinalSegmentLength(value); return *this;}


    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline const CmafMpdManifestBandwidthType& GetMpdManifestBandwidthType() const{ return m_mpdManifestBandwidthType; }

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline bool MpdManifestBandwidthTypeHasBeenSet() const { return m_mpdManifestBandwidthTypeHasBeenSet; }

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline void SetMpdManifestBandwidthType(const CmafMpdManifestBandwidthType& value) { m_mpdManifestBandwidthTypeHasBeenSet = true; m_mpdManifestBandwidthType = value; }

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline void SetMpdManifestBandwidthType(CmafMpdManifestBandwidthType&& value) { m_mpdManifestBandwidthTypeHasBeenSet = true; m_mpdManifestBandwidthType = std::move(value); }

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline CmafGroupSettings& WithMpdManifestBandwidthType(const CmafMpdManifestBandwidthType& value) { SetMpdManifestBandwidthType(value); return *this;}

    /**
     * Specify how the value for bandwidth is determined for each video Representation
     * in your output MPD manifest. We recommend that you choose a MPD manifest
     * bandwidth type that is compatible with your downstream player configuration.
     * Max: Use the same value that you specify for Max bitrate in the video output, in
     * bits per second. Average: Use the calculated average bitrate of the encoded
     * video output, in bits per second.
     */
    inline CmafGroupSettings& WithMpdManifestBandwidthType(CmafMpdManifestBandwidthType&& value) { SetMpdManifestBandwidthType(std::move(value)); return *this;}


    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline const CmafMpdProfile& GetMpdProfile() const{ return m_mpdProfile; }

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline bool MpdProfileHasBeenSet() const { return m_mpdProfileHasBeenSet; }

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline void SetMpdProfile(const CmafMpdProfile& value) { m_mpdProfileHasBeenSet = true; m_mpdProfile = value; }

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline void SetMpdProfile(CmafMpdProfile&& value) { m_mpdProfileHasBeenSet = true; m_mpdProfile = std::move(value); }

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline CmafGroupSettings& WithMpdProfile(const CmafMpdProfile& value) { SetMpdProfile(value); return *this;}

    /**
     * Specify whether your DASH profile is on-demand or main. When you choose Main
     * profile (MAIN_PROFILE), the service signals 
     * urn:mpeg:dash:profile:isoff-main:2011 in your .mpd DASH manifest. When you
     * choose On-demand (ON_DEMAND_PROFILE), the service signals
     * urn:mpeg:dash:profile:isoff-on-demand:2011 in your .mpd. When you choose
     * On-demand, you must also set the output group setting Segment control
     * (SegmentControl) to Single file (SINGLE_FILE).
     */
    inline CmafGroupSettings& WithMpdProfile(CmafMpdProfile&& value) { SetMpdProfile(std::move(value)); return *this;}


    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline const CmafPtsOffsetHandlingForBFrames& GetPtsOffsetHandlingForBFrames() const{ return m_ptsOffsetHandlingForBFrames; }

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline bool PtsOffsetHandlingForBFramesHasBeenSet() const { return m_ptsOffsetHandlingForBFramesHasBeenSet; }

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline void SetPtsOffsetHandlingForBFrames(const CmafPtsOffsetHandlingForBFrames& value) { m_ptsOffsetHandlingForBFramesHasBeenSet = true; m_ptsOffsetHandlingForBFrames = value; }

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline void SetPtsOffsetHandlingForBFrames(CmafPtsOffsetHandlingForBFrames&& value) { m_ptsOffsetHandlingForBFramesHasBeenSet = true; m_ptsOffsetHandlingForBFrames = std::move(value); }

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline CmafGroupSettings& WithPtsOffsetHandlingForBFrames(const CmafPtsOffsetHandlingForBFrames& value) { SetPtsOffsetHandlingForBFrames(value); return *this;}

    /**
     * Use this setting only when your output video stream has B-frames, which causes
     * the initial presentation time stamp (PTS) to be offset from the initial decode
     * time stamp (DTS). Specify how MediaConvert handles PTS when writing time stamps
     * in output DASH manifests. Choose Match initial PTS (MATCH_INITIAL_PTS) when you
     * want MediaConvert to use the initial PTS as the first time stamp in the
     * manifest. Choose Zero-based (ZERO_BASED) to have MediaConvert ignore the initial
     * PTS in the video stream and instead write the initial time stamp as zero in the
     * manifest. For outputs that don't have B-frames, the time stamps in your DASH
     * manifests start at zero regardless of your choice here.
     */
    inline CmafGroupSettings& WithPtsOffsetHandlingForBFrames(CmafPtsOffsetHandlingForBFrames&& value) { SetPtsOffsetHandlingForBFrames(std::move(value)); return *this;}


    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline const CmafSegmentControl& GetSegmentControl() const{ return m_segmentControl; }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline bool SegmentControlHasBeenSet() const { return m_segmentControlHasBeenSet; }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline void SetSegmentControl(const CmafSegmentControl& value) { m_segmentControlHasBeenSet = true; m_segmentControl = value; }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline void SetSegmentControl(CmafSegmentControl&& value) { m_segmentControlHasBeenSet = true; m_segmentControl = std::move(value); }

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline CmafGroupSettings& WithSegmentControl(const CmafSegmentControl& value) { SetSegmentControl(value); return *this;}

    /**
     * When set to SINGLE_FILE, a single output file is generated, which is internally
     * segmented using the Fragment Length and Segment Length. When set to
     * SEGMENTED_FILES, separate segment files will be created.
     */
    inline CmafGroupSettings& WithSegmentControl(CmafSegmentControl&& value) { SetSegmentControl(std::move(value)); return *this;}


    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 10. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (CmafSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline int GetSegmentLength() const{ return m_segmentLength; }

    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 10. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (CmafSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }

    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 10. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (CmafSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }

    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 10. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (CmafSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline CmafGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}


    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline const CmafSegmentLengthControl& GetSegmentLengthControl() const{ return m_segmentLengthControl; }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline bool SegmentLengthControlHasBeenSet() const { return m_segmentLengthControlHasBeenSet; }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline void SetSegmentLengthControl(const CmafSegmentLengthControl& value) { m_segmentLengthControlHasBeenSet = true; m_segmentLengthControl = value; }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline void SetSegmentLengthControl(CmafSegmentLengthControl&& value) { m_segmentLengthControlHasBeenSet = true; m_segmentLengthControl = std::move(value); }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline CmafGroupSettings& WithSegmentLengthControl(const CmafSegmentLengthControl& value) { SetSegmentLengthControl(value); return *this;}

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline CmafGroupSettings& WithSegmentLengthControl(CmafSegmentLengthControl&& value) { SetSegmentLengthControl(std::move(value)); return *this;}


    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline const CmafStreamInfResolution& GetStreamInfResolution() const{ return m_streamInfResolution; }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline bool StreamInfResolutionHasBeenSet() const { return m_streamInfResolutionHasBeenSet; }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline void SetStreamInfResolution(const CmafStreamInfResolution& value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = value; }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline void SetStreamInfResolution(CmafStreamInfResolution&& value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = std::move(value); }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline CmafGroupSettings& WithStreamInfResolution(const CmafStreamInfResolution& value) { SetStreamInfResolution(value); return *this;}

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline CmafGroupSettings& WithStreamInfResolution(CmafStreamInfResolution&& value) { SetStreamInfResolution(std::move(value)); return *this;}


    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline const CmafTargetDurationCompatibilityMode& GetTargetDurationCompatibilityMode() const{ return m_targetDurationCompatibilityMode; }

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline bool TargetDurationCompatibilityModeHasBeenSet() const { return m_targetDurationCompatibilityModeHasBeenSet; }

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline void SetTargetDurationCompatibilityMode(const CmafTargetDurationCompatibilityMode& value) { m_targetDurationCompatibilityModeHasBeenSet = true; m_targetDurationCompatibilityMode = value; }

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline void SetTargetDurationCompatibilityMode(CmafTargetDurationCompatibilityMode&& value) { m_targetDurationCompatibilityModeHasBeenSet = true; m_targetDurationCompatibilityMode = std::move(value); }

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline CmafGroupSettings& WithTargetDurationCompatibilityMode(const CmafTargetDurationCompatibilityMode& value) { SetTargetDurationCompatibilityMode(value); return *this;}

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline CmafGroupSettings& WithTargetDurationCompatibilityMode(CmafTargetDurationCompatibilityMode&& value) { SetTargetDurationCompatibilityMode(std::move(value)); return *this;}


    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline const CmafVideoCompositionOffsets& GetVideoCompositionOffsets() const{ return m_videoCompositionOffsets; }

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline bool VideoCompositionOffsetsHasBeenSet() const { return m_videoCompositionOffsetsHasBeenSet; }

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline void SetVideoCompositionOffsets(const CmafVideoCompositionOffsets& value) { m_videoCompositionOffsetsHasBeenSet = true; m_videoCompositionOffsets = value; }

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline void SetVideoCompositionOffsets(CmafVideoCompositionOffsets&& value) { m_videoCompositionOffsetsHasBeenSet = true; m_videoCompositionOffsets = std::move(value); }

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline CmafGroupSettings& WithVideoCompositionOffsets(const CmafVideoCompositionOffsets& value) { SetVideoCompositionOffsets(value); return *this;}

    /**
     * Specify the video sample composition time offset mode in the output fMP4 TRUN
     * box. For wider player compatibility, set Video composition offsets to Unsigned
     * or leave blank. The earliest presentation time may be greater than zero, and
     * sample composition time offsets will increment using unsigned integers. For
     * strict fMP4 video and audio timing, set Video composition offsets to Signed. The
     * earliest presentation time will be equal to zero, and sample composition time
     * offsets will increment using signed integers.
     */
    inline CmafGroupSettings& WithVideoCompositionOffsets(CmafVideoCompositionOffsets&& value) { SetVideoCompositionOffsets(std::move(value)); return *this;}


    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline const CmafWriteDASHManifest& GetWriteDashManifest() const{ return m_writeDashManifest; }

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline bool WriteDashManifestHasBeenSet() const { return m_writeDashManifestHasBeenSet; }

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline void SetWriteDashManifest(const CmafWriteDASHManifest& value) { m_writeDashManifestHasBeenSet = true; m_writeDashManifest = value; }

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline void SetWriteDashManifest(CmafWriteDASHManifest&& value) { m_writeDashManifestHasBeenSet = true; m_writeDashManifest = std::move(value); }

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline CmafGroupSettings& WithWriteDashManifest(const CmafWriteDASHManifest& value) { SetWriteDashManifest(value); return *this;}

    /**
     * When set to ENABLED, a DASH MPD manifest will be generated for this output.
     */
    inline CmafGroupSettings& WithWriteDashManifest(CmafWriteDASHManifest&& value) { SetWriteDashManifest(std::move(value)); return *this;}


    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline const CmafWriteHLSManifest& GetWriteHlsManifest() const{ return m_writeHlsManifest; }

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline bool WriteHlsManifestHasBeenSet() const { return m_writeHlsManifestHasBeenSet; }

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline void SetWriteHlsManifest(const CmafWriteHLSManifest& value) { m_writeHlsManifestHasBeenSet = true; m_writeHlsManifest = value; }

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline void SetWriteHlsManifest(CmafWriteHLSManifest&& value) { m_writeHlsManifestHasBeenSet = true; m_writeHlsManifest = std::move(value); }

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline CmafGroupSettings& WithWriteHlsManifest(const CmafWriteHLSManifest& value) { SetWriteHlsManifest(value); return *this;}

    /**
     * When set to ENABLED, an Apple HLS manifest will be generated for this output.
     */
    inline CmafGroupSettings& WithWriteHlsManifest(CmafWriteHLSManifest&& value) { SetWriteHlsManifest(std::move(value)); return *this;}


    /**
     * When you enable Precise segment duration in DASH manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline const CmafWriteSegmentTimelineInRepresentation& GetWriteSegmentTimelineInRepresentation() const{ return m_writeSegmentTimelineInRepresentation; }

    /**
     * When you enable Precise segment duration in DASH manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline bool WriteSegmentTimelineInRepresentationHasBeenSet() const { return m_writeSegmentTimelineInRepresentationHasBeenSet; }

    /**
     * When you enable Precise segment duration in DASH manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline void SetWriteSegmentTimelineInRepresentation(const CmafWriteSegmentTimelineInRepresentation& value) { m_writeSegmentTimelineInRepresentationHasBeenSet = true; m_writeSegmentTimelineInRepresentation = value; }

    /**
     * When you enable Precise segment duration in DASH manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline void SetWriteSegmentTimelineInRepresentation(CmafWriteSegmentTimelineInRepresentation&& value) { m_writeSegmentTimelineInRepresentationHasBeenSet = true; m_writeSegmentTimelineInRepresentation = std::move(value); }

    /**
     * When you enable Precise segment duration in DASH manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline CmafGroupSettings& WithWriteSegmentTimelineInRepresentation(const CmafWriteSegmentTimelineInRepresentation& value) { SetWriteSegmentTimelineInRepresentation(value); return *this;}

    /**
     * When you enable Precise segment duration in DASH manifests
     * (writeSegmentTimelineInRepresentation), your DASH manifest shows precise segment
     * durations. The segment duration information appears inside the SegmentTimeline
     * element, inside SegmentTemplate at the Representation level. When this feature
     * isn't enabled, the segment durations in your DASH manifest are approximate. The
     * segment duration information appears in the duration attribute of the
     * SegmentTemplate element.
     */
    inline CmafGroupSettings& WithWriteSegmentTimelineInRepresentation(CmafWriteSegmentTimelineInRepresentation&& value) { SetWriteSegmentTimelineInRepresentation(std::move(value)); return *this;}

  private:

    Aws::Vector<CmafAdditionalManifest> m_additionalManifests;
    bool m_additionalManifestsHasBeenSet = false;

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;

    CmafClientCache m_clientCache;
    bool m_clientCacheHasBeenSet = false;

    CmafCodecSpecification m_codecSpecification;
    bool m_codecSpecificationHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    CmafEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet = false;

    int m_fragmentLength;
    bool m_fragmentLengthHasBeenSet = false;

    CmafImageBasedTrickPlay m_imageBasedTrickPlay;
    bool m_imageBasedTrickPlayHasBeenSet = false;

    CmafImageBasedTrickPlaySettings m_imageBasedTrickPlaySettings;
    bool m_imageBasedTrickPlaySettingsHasBeenSet = false;

    CmafManifestCompression m_manifestCompression;
    bool m_manifestCompressionHasBeenSet = false;

    CmafManifestDurationFormat m_manifestDurationFormat;
    bool m_manifestDurationFormatHasBeenSet = false;

    int m_minBufferTime;
    bool m_minBufferTimeHasBeenSet = false;

    double m_minFinalSegmentLength;
    bool m_minFinalSegmentLengthHasBeenSet = false;

    CmafMpdManifestBandwidthType m_mpdManifestBandwidthType;
    bool m_mpdManifestBandwidthTypeHasBeenSet = false;

    CmafMpdProfile m_mpdProfile;
    bool m_mpdProfileHasBeenSet = false;

    CmafPtsOffsetHandlingForBFrames m_ptsOffsetHandlingForBFrames;
    bool m_ptsOffsetHandlingForBFramesHasBeenSet = false;

    CmafSegmentControl m_segmentControl;
    bool m_segmentControlHasBeenSet = false;

    int m_segmentLength;
    bool m_segmentLengthHasBeenSet = false;

    CmafSegmentLengthControl m_segmentLengthControl;
    bool m_segmentLengthControlHasBeenSet = false;

    CmafStreamInfResolution m_streamInfResolution;
    bool m_streamInfResolutionHasBeenSet = false;

    CmafTargetDurationCompatibilityMode m_targetDurationCompatibilityMode;
    bool m_targetDurationCompatibilityModeHasBeenSet = false;

    CmafVideoCompositionOffsets m_videoCompositionOffsets;
    bool m_videoCompositionOffsetsHasBeenSet = false;

    CmafWriteDASHManifest m_writeDashManifest;
    bool m_writeDashManifestHasBeenSet = false;

    CmafWriteHLSManifest m_writeHlsManifest;
    bool m_writeHlsManifestHasBeenSet = false;

    CmafWriteSegmentTimelineInRepresentation m_writeSegmentTimelineInRepresentation;
    bool m_writeSegmentTimelineInRepresentationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
