/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipType.h>
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
  class ListChannelMembershipsRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API ListChannelMembershipsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChannelMemberships"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline ListChannelMembershipsRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline ListChannelMembershipsRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline ListChannelMembershipsRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are returned as part of <code>ListChannelMemberships</code> if
     * no type is specified. Hidden members are only returned if the type filter in
     * <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.</p>
     */
    inline const ChannelMembershipType& GetType() const{ return m_type; }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are returned as part of <code>ListChannelMemberships</code> if
     * no type is specified. Hidden members are only returned if the type filter in
     * <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are returned as part of <code>ListChannelMemberships</code> if
     * no type is specified. Hidden members are only returned if the type filter in
     * <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.</p>
     */
    inline void SetType(const ChannelMembershipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are returned as part of <code>ListChannelMemberships</code> if
     * no type is specified. Hidden members are only returned if the type filter in
     * <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.</p>
     */
    inline void SetType(ChannelMembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are returned as part of <code>ListChannelMemberships</code> if
     * no type is specified. Hidden members are only returned if the type filter in
     * <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.</p>
     */
    inline ListChannelMembershipsRequest& WithType(const ChannelMembershipType& value) { SetType(value); return *this;}

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are returned as part of <code>ListChannelMemberships</code> if
     * no type is specified. Hidden members are only returned if the type filter in
     * <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.</p>
     */
    inline ListChannelMembershipsRequest& WithType(ChannelMembershipType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of channel memberships that you want returned.</p>
     */
    inline ListChannelMembershipsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline ListChannelMembershipsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline ListChannelMembershipsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested channel
     * memberships are returned.</p>
     */
    inline ListChannelMembershipsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListChannelMembershipsRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline ListChannelMembershipsRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline ListChannelMembershipsRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}


    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing a user's memberships in a particular sub-channel of an elastic
     * channel.</p> 
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing a user's memberships in a particular sub-channel of an elastic
     * channel.</p> 
     */
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing a user's memberships in a particular sub-channel of an elastic
     * channel.</p> 
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing a user's memberships in a particular sub-channel of an elastic
     * channel.</p> 
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing a user's memberships in a particular sub-channel of an elastic
     * channel.</p> 
     */
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing a user's memberships in a particular sub-channel of an elastic
     * channel.</p> 
     */
    inline ListChannelMembershipsRequest& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing a user's memberships in a particular sub-channel of an elastic
     * channel.</p> 
     */
    inline ListChannelMembershipsRequest& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel in the request.</p>  <p>Only required when
     * listing a user's memberships in a particular sub-channel of an elastic
     * channel.</p> 
     */
    inline ListChannelMembershipsRequest& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    ChannelMembershipType m_type;
    bool m_typeHasBeenSet = false;

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
