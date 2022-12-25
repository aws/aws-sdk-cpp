/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/CmafEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/HlsManifest.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A CMAF packaging configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/CmafPackage">AWS
   * API Reference</a></p>
   */
  class CmafPackage
  {
  public:
    AWS_MEDIAPACKAGEVOD_API CmafPackage();
    AWS_MEDIAPACKAGEVOD_API CmafPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API CmafPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CmafEncryption& GetEncryption() const{ return m_encryption; }

    
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    
    inline void SetEncryption(const CmafEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(CmafEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline CmafPackage& WithEncryption(const CmafEncryption& value) { SetEncryption(value); return *this;}

    
    inline CmafPackage& WithEncryption(CmafEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * A list of HLS manifest configurations.
     */
    inline const Aws::Vector<HlsManifest>& GetHlsManifests() const{ return m_hlsManifests; }

    /**
     * A list of HLS manifest configurations.
     */
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }

    /**
     * A list of HLS manifest configurations.
     */
    inline void SetHlsManifests(const Aws::Vector<HlsManifest>& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = value; }

    /**
     * A list of HLS manifest configurations.
     */
    inline void SetHlsManifests(Aws::Vector<HlsManifest>&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::move(value); }

    /**
     * A list of HLS manifest configurations.
     */
    inline CmafPackage& WithHlsManifests(const Aws::Vector<HlsManifest>& value) { SetHlsManifests(value); return *this;}

    /**
     * A list of HLS manifest configurations.
     */
    inline CmafPackage& WithHlsManifests(Aws::Vector<HlsManifest>&& value) { SetHlsManifests(std::move(value)); return *this;}

    /**
     * A list of HLS manifest configurations.
     */
    inline CmafPackage& AddHlsManifests(const HlsManifest& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(value); return *this; }

    /**
     * A list of HLS manifest configurations.
     */
    inline CmafPackage& AddHlsManifests(HlsManifest&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(std::move(value)); return *this; }


    /**
     * When includeEncoderConfigurationInSegments is set to true, MediaPackage places
     * your encoder's Sequence Parameter Set (SPS), Picture Parameter Set (PPS), and
     * Video Parameter Set (VPS) metadata in every video segment instead of in the init
     * fragment. This lets you use different SPS/PPS/VPS settings for your assets
     * during content playback.

     */
    inline bool GetIncludeEncoderConfigurationInSegments() const{ return m_includeEncoderConfigurationInSegments; }

    /**
     * When includeEncoderConfigurationInSegments is set to true, MediaPackage places
     * your encoder's Sequence Parameter Set (SPS), Picture Parameter Set (PPS), and
     * Video Parameter Set (VPS) metadata in every video segment instead of in the init
     * fragment. This lets you use different SPS/PPS/VPS settings for your assets
     * during content playback.

     */
    inline bool IncludeEncoderConfigurationInSegmentsHasBeenSet() const { return m_includeEncoderConfigurationInSegmentsHasBeenSet; }

    /**
     * When includeEncoderConfigurationInSegments is set to true, MediaPackage places
     * your encoder's Sequence Parameter Set (SPS), Picture Parameter Set (PPS), and
     * Video Parameter Set (VPS) metadata in every video segment instead of in the init
     * fragment. This lets you use different SPS/PPS/VPS settings for your assets
     * during content playback.

     */
    inline void SetIncludeEncoderConfigurationInSegments(bool value) { m_includeEncoderConfigurationInSegmentsHasBeenSet = true; m_includeEncoderConfigurationInSegments = value; }

    /**
     * When includeEncoderConfigurationInSegments is set to true, MediaPackage places
     * your encoder's Sequence Parameter Set (SPS), Picture Parameter Set (PPS), and
     * Video Parameter Set (VPS) metadata in every video segment instead of in the init
     * fragment. This lets you use different SPS/PPS/VPS settings for your assets
     * during content playback.

     */
    inline CmafPackage& WithIncludeEncoderConfigurationInSegments(bool value) { SetIncludeEncoderConfigurationInSegments(value); return *this;}


    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }

    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * Duration (in seconds) of each fragment. Actual fragments will be
rounded to the
     * nearest multiple of the source fragment duration.

     */
    inline CmafPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}

  private:

    CmafEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::Vector<HlsManifest> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    bool m_includeEncoderConfigurationInSegments;
    bool m_includeEncoderConfigurationInSegmentsHasBeenSet = false;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
