/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class ListChannelsAssociatedWithChannelFlowRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelsAssociatedWithChannelFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChannelsAssociatedWithChannelFlow"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline const Aws::String& GetChannelFlowArn() const{ return m_channelFlowArn; }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline bool ChannelFlowArnHasBeenSet() const { return m_channelFlowArnHasBeenSet; }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline void SetChannelFlowArn(const Aws::String& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = value; }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline void SetChannelFlowArn(Aws::String&& value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn = std::move(value); }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline void SetChannelFlowArn(const char* value) { m_channelFlowArnHasBeenSet = true; m_channelFlowArn.assign(value); }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowRequest& WithChannelFlowArn(const Aws::String& value) { SetChannelFlowArn(value); return *this;}

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowRequest& WithChannelFlowArn(Aws::String&& value) { SetChannelFlowArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowRequest& WithChannelFlowArn(const char* value) { SetChannelFlowArn(value); return *this;}


    /**
     * <p>The maximum number of channels that you want to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of channels that you want to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of channels that you want to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of channels that you want to return.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channels are
     * returned.</p>
     */
    inline ListChannelsAssociatedWithChannelFlowRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_channelFlowArn;
    bool m_channelFlowArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
