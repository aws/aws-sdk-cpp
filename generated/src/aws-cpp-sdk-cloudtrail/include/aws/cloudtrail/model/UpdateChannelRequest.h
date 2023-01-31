/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Destination.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class UpdateChannelRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API UpdateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN or ID (the ARN suffix) of the channel that you want to update.</p>
     */
    inline const Aws::String& GetChannel() const{ return m_channel; }

    /**
     * <p>The ARN or ID (the ARN suffix) of the channel that you want to update.</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The ARN or ID (the ARN suffix) of the channel that you want to update.</p>
     */
    inline void SetChannel(const Aws::String& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The ARN or ID (the ARN suffix) of the channel that you want to update.</p>
     */
    inline void SetChannel(Aws::String&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The ARN or ID (the ARN suffix) of the channel that you want to update.</p>
     */
    inline void SetChannel(const char* value) { m_channelHasBeenSet = true; m_channel.assign(value); }

    /**
     * <p>The ARN or ID (the ARN suffix) of the channel that you want to update.</p>
     */
    inline UpdateChannelRequest& WithChannel(const Aws::String& value) { SetChannel(value); return *this;}

    /**
     * <p>The ARN or ID (the ARN suffix) of the channel that you want to update.</p>
     */
    inline UpdateChannelRequest& WithChannel(Aws::String&& value) { SetChannel(std::move(value)); return *this;}

    /**
     * <p>The ARN or ID (the ARN suffix) of the channel that you want to update.</p>
     */
    inline UpdateChannelRequest& WithChannel(const char* value) { SetChannel(value); return *this;}


    /**
     * <p>The ARNs of event data stores that you want to log events arriving through
     * the channel.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The ARNs of event data stores that you want to log events arriving through
     * the channel.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>The ARNs of event data stores that you want to log events arriving through
     * the channel.</p>
     */
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>The ARNs of event data stores that you want to log events arriving through
     * the channel.</p>
     */
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>The ARNs of event data stores that you want to log events arriving through
     * the channel.</p>
     */
    inline UpdateChannelRequest& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The ARNs of event data stores that you want to log events arriving through
     * the channel.</p>
     */
    inline UpdateChannelRequest& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>The ARNs of event data stores that you want to log events arriving through
     * the channel.</p>
     */
    inline UpdateChannelRequest& AddDestinations(const Destination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>The ARNs of event data stores that you want to log events arriving through
     * the channel.</p>
     */
    inline UpdateChannelRequest& AddDestinations(Destination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p> Changes the name of the channel. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Changes the name of the channel. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Changes the name of the channel. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Changes the name of the channel. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Changes the name of the channel. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Changes the name of the channel. </p>
     */
    inline UpdateChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Changes the name of the channel. </p>
     */
    inline UpdateChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Changes the name of the channel. </p>
     */
    inline UpdateChannelRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_channel;
    bool m_channelHasBeenSet = false;

    Aws::Vector<Destination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
