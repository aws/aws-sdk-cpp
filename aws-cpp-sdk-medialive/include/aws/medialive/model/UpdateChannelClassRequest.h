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
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/ChannelClass.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/OutputDestination.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Channel class that the channel should be updated to.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClassRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API UpdateChannelClassRequest : public MediaLiveRequest
  {
  public:
    UpdateChannelClassRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannelClass"; }

    Aws::String SerializePayload() const override;


    /**
     * The channel class that you wish to update this channel to use.
     */
    inline const ChannelClass& GetChannelClass() const{ return m_channelClass; }

    /**
     * The channel class that you wish to update this channel to use.
     */
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }

    /**
     * The channel class that you wish to update this channel to use.
     */
    inline void SetChannelClass(const ChannelClass& value) { m_channelClassHasBeenSet = true; m_channelClass = value; }

    /**
     * The channel class that you wish to update this channel to use.
     */
    inline void SetChannelClass(ChannelClass&& value) { m_channelClassHasBeenSet = true; m_channelClass = std::move(value); }

    /**
     * The channel class that you wish to update this channel to use.
     */
    inline UpdateChannelClassRequest& WithChannelClass(const ChannelClass& value) { SetChannelClass(value); return *this;}

    /**
     * The channel class that you wish to update this channel to use.
     */
    inline UpdateChannelClassRequest& WithChannelClass(ChannelClass&& value) { SetChannelClass(std::move(value)); return *this;}


    /**
     * Channel Id of the channel whose class should be updated.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * Channel Id of the channel whose class should be updated.
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * Channel Id of the channel whose class should be updated.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * Channel Id of the channel whose class should be updated.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * Channel Id of the channel whose class should be updated.
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * Channel Id of the channel whose class should be updated.
     */
    inline UpdateChannelClassRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * Channel Id of the channel whose class should be updated.
     */
    inline UpdateChannelClassRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * Channel Id of the channel whose class should be updated.
     */
    inline UpdateChannelClassRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * A list of output destinations for this channel.
     */
    inline const Aws::Vector<OutputDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * A list of output destinations for this channel.
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * A list of output destinations for this channel.
     */
    inline void SetDestinations(const Aws::Vector<OutputDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * A list of output destinations for this channel.
     */
    inline void SetDestinations(Aws::Vector<OutputDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * A list of output destinations for this channel.
     */
    inline UpdateChannelClassRequest& WithDestinations(const Aws::Vector<OutputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * A list of output destinations for this channel.
     */
    inline UpdateChannelClassRequest& WithDestinations(Aws::Vector<OutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * A list of output destinations for this channel.
     */
    inline UpdateChannelClassRequest& AddDestinations(const OutputDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * A list of output destinations for this channel.
     */
    inline UpdateChannelClassRequest& AddDestinations(OutputDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

  private:

    ChannelClass m_channelClass;
    bool m_channelClassHasBeenSet;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet;

    Aws::Vector<OutputDestination> m_destinations;
    bool m_destinationsHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
