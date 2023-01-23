/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/SortOrder.h>
#include <aws/core/utils/DateTime.h>
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
  class ListChannelMessagesRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelMessagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChannelMessages"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ListChannelMessagesRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ListChannelMessagesRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ListChannelMessagesRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The order in which you want messages sorted. Default is Descending, based on
     * time created.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order in which you want messages sorted. Default is Descending, based on
     * time created.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order in which you want messages sorted. Default is Descending, based on
     * time created.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order in which you want messages sorted. Default is Descending, based on
     * time created.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order in which you want messages sorted. Default is Descending, based on
     * time created.</p>
     */
    inline ListChannelMessagesRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order in which you want messages sorted. Default is Descending, based on
     * time created.</p>
     */
    inline ListChannelMessagesRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The initial or starting time stamp for your requested messages.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }

    /**
     * <p>The initial or starting time stamp for your requested messages.</p>
     */
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }

    /**
     * <p>The initial or starting time stamp for your requested messages.</p>
     */
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }

    /**
     * <p>The initial or starting time stamp for your requested messages.</p>
     */
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }

    /**
     * <p>The initial or starting time stamp for your requested messages.</p>
     */
    inline ListChannelMessagesRequest& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}

    /**
     * <p>The initial or starting time stamp for your requested messages.</p>
     */
    inline ListChannelMessagesRequest& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(std::move(value)); return *this;}


    /**
     * <p>The final or ending time stamp for your requested messages.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }

    /**
     * <p>The final or ending time stamp for your requested messages.</p>
     */
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }

    /**
     * <p>The final or ending time stamp for your requested messages.</p>
     */
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }

    /**
     * <p>The final or ending time stamp for your requested messages.</p>
     */
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }

    /**
     * <p>The final or ending time stamp for your requested messages.</p>
     */
    inline ListChannelMessagesRequest& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}

    /**
     * <p>The final or ending time stamp for your requested messages.</p>
     */
    inline ListChannelMessagesRequest& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of messages that you want returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of messages that you want returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of messages that you want returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of messages that you want returned.</p>
     */
    inline ListChannelMessagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline ListChannelMessagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline ListChannelMessagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested messages are
     * returned.</p>
     */
    inline ListChannelMessagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline ListChannelMessagesRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline ListChannelMessagesRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline ListChannelMessagesRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}


    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing the messages in a SubChannel that the user belongs to.</p> 
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing the messages in a SubChannel that the user belongs to.</p> 
     */
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing the messages in a SubChannel that the user belongs to.</p> 
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing the messages in a SubChannel that the user belongs to.</p> 
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing the messages in a SubChannel that the user belongs to.</p> 
     */
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing the messages in a SubChannel that the user belongs to.</p> 
     */
    inline ListChannelMessagesRequest& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing the messages in a SubChannel that the user belongs to.</p> 
     */
    inline ListChannelMessagesRequest& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing the messages in a SubChannel that the user belongs to.</p> 
     */
    inline ListChannelMessagesRequest& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
