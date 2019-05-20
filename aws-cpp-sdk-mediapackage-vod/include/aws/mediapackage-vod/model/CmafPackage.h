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
  class AWS_MEDIAPACKAGEVOD_API CmafPackage
  {
  public:
    CmafPackage();
    CmafPackage(Aws::Utils::Json::JsonView jsonValue);
    CmafPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
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
    bool m_encryptionHasBeenSet;

    Aws::Vector<HlsManifest> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
