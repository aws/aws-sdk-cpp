/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * MediaPackage Output Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageOutputDestinationSettings">AWS
   * API Reference</a></p>
   */
  class MediaPackageOutputDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings();
    AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_channelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
