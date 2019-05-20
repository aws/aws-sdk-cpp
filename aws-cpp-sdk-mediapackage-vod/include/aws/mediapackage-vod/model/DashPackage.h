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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/DashEncryption.h>
#include <aws/mediapackage-vod/model/DashManifest.h>
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
   * A Dynamic Adaptive Streaming over HTTP (DASH) packaging configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DashPackage">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API DashPackage
  {
  public:
    DashPackage();
    DashPackage(Aws::Utils::Json::JsonView jsonValue);
    DashPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of DASH manifest configurations.
     */
    inline const Aws::Vector<DashManifest>& GetDashManifests() const{ return m_dashManifests; }

    /**
     * A list of DASH manifest configurations.
     */
    inline bool DashManifestsHasBeenSet() const { return m_dashManifestsHasBeenSet; }

    /**
     * A list of DASH manifest configurations.
     */
    inline void SetDashManifests(const Aws::Vector<DashManifest>& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = value; }

    /**
     * A list of DASH manifest configurations.
     */
    inline void SetDashManifests(Aws::Vector<DashManifest>&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = std::move(value); }

    /**
     * A list of DASH manifest configurations.
     */
    inline DashPackage& WithDashManifests(const Aws::Vector<DashManifest>& value) { SetDashManifests(value); return *this;}

    /**
     * A list of DASH manifest configurations.
     */
    inline DashPackage& WithDashManifests(Aws::Vector<DashManifest>&& value) { SetDashManifests(std::move(value)); return *this;}

    /**
     * A list of DASH manifest configurations.
     */
    inline DashPackage& AddDashManifests(const DashManifest& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.push_back(value); return *this; }

    /**
     * A list of DASH manifest configurations.
     */
    inline DashPackage& AddDashManifests(DashManifest&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.push_back(std::move(value)); return *this; }


    
    inline const DashEncryption& GetEncryption() const{ return m_encryption; }

    
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    
    inline void SetEncryption(const DashEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(DashEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline DashPackage& WithEncryption(const DashEncryption& value) { SetEncryption(value); return *this;}

    
    inline DashPackage& WithEncryption(DashEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline DashPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}

  private:

    Aws::Vector<DashManifest> m_dashManifests;
    bool m_dashManifestsHasBeenSet;

    DashEncryption m_encryption;
    bool m_encryptionHasBeenSet;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
