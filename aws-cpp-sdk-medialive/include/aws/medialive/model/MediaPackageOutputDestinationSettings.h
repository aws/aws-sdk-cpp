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
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Media Package Output Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageOutputDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings
  {
  public:
    MediaPackageOutputDestinationSettings();
    MediaPackageOutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    MediaPackageOutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * ID of the channel in MediaPackage that is the destination for this output group.
     * You do not need to specify the individual inputs in MediaPackage; MediaLive will
     * handle the connection of the two MediaLive pipelines to the two MediaPackage
     * inputs. The MediaPackage channel and MediaLive channel must be in the same
     * region.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * ID of the channel in MediaPackage that is the destination for this output group.
     * You do not need to specify the individual inputs in MediaPackage; MediaLive will
     * handle the connection of the two MediaLive pipelines to the two MediaPackage
     * inputs. The MediaPackage channel and MediaLive channel must be in the same
     * region.
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * ID of the channel in MediaPackage that is the destination for this output group.
     * You do not need to specify the individual inputs in MediaPackage; MediaLive will
     * handle the connection of the two MediaLive pipelines to the two MediaPackage
     * inputs. The MediaPackage channel and MediaLive channel must be in the same
     * region.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * ID of the channel in MediaPackage that is the destination for this output group.
     * You do not need to specify the individual inputs in MediaPackage; MediaLive will
     * handle the connection of the two MediaLive pipelines to the two MediaPackage
     * inputs. The MediaPackage channel and MediaLive channel must be in the same
     * region.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * ID of the channel in MediaPackage that is the destination for this output group.
     * You do not need to specify the individual inputs in MediaPackage; MediaLive will
     * handle the connection of the two MediaLive pipelines to the two MediaPackage
     * inputs. The MediaPackage channel and MediaLive channel must be in the same
     * region.
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * ID of the channel in MediaPackage that is the destination for this output group.
     * You do not need to specify the individual inputs in MediaPackage; MediaLive will
     * handle the connection of the two MediaLive pipelines to the two MediaPackage
     * inputs. The MediaPackage channel and MediaLive channel must be in the same
     * region.
     */
    inline MediaPackageOutputDestinationSettings& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * ID of the channel in MediaPackage that is the destination for this output group.
     * You do not need to specify the individual inputs in MediaPackage; MediaLive will
     * handle the connection of the two MediaLive pipelines to the two MediaPackage
     * inputs. The MediaPackage channel and MediaLive channel must be in the same
     * region.
     */
    inline MediaPackageOutputDestinationSettings& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * ID of the channel in MediaPackage that is the destination for this output group.
     * You do not need to specify the individual inputs in MediaPackage; MediaLive will
     * handle the connection of the two MediaLive pipelines to the two MediaPackage
     * inputs. The MediaPackage channel and MediaLive channel must be in the same
     * region.
     */
    inline MediaPackageOutputDestinationSettings& WithChannelId(const char* value) { SetChannelId(value); return *this;}

  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
