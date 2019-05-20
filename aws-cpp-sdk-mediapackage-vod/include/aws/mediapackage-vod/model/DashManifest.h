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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/Profile.h>
#include <aws/mediapackage-vod/model/StreamSelection.h>
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
   * A DASH manifest configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DashManifest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API DashManifest
  {
  public:
    DashManifest();
    DashManifest(Aws::Utils::Json::JsonView jsonValue);
    DashManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An optional string to include in the name of the manifest.
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline DashManifest& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * An optional string to include in the name of the manifest.
     */
    inline DashManifest& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * An optional string to include in the name of the manifest.
     */
    inline DashManifest& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline int GetMinBufferTimeSeconds() const{ return m_minBufferTimeSeconds; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline bool MinBufferTimeSecondsHasBeenSet() const { return m_minBufferTimeSecondsHasBeenSet; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline void SetMinBufferTimeSeconds(int value) { m_minBufferTimeSecondsHasBeenSet = true; m_minBufferTimeSeconds = value; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline DashManifest& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}


    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline const Profile& GetProfile() const{ return m_profile; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline void SetProfile(const Profile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline void SetProfile(Profile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline DashManifest& WithProfile(const Profile& value) { SetProfile(value); return *this;}

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline DashManifest& WithProfile(Profile&& value) { SetProfile(std::move(value)); return *this;}


    
    inline const StreamSelection& GetStreamSelection() const{ return m_streamSelection; }

    
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }

    
    inline void SetStreamSelection(const StreamSelection& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = value; }

    
    inline void SetStreamSelection(StreamSelection&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::move(value); }

    
    inline DashManifest& WithStreamSelection(const StreamSelection& value) { SetStreamSelection(value); return *this;}

    
    inline DashManifest& WithStreamSelection(StreamSelection&& value) { SetStreamSelection(std::move(value)); return *this;}

  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet;

    int m_minBufferTimeSeconds;
    bool m_minBufferTimeSecondsHasBeenSet;

    Profile m_profile;
    bool m_profileHasBeenSet;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
