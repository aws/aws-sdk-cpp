/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class BatchCreateChannelMembershipRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API BatchCreateChannelMembershipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateChannelMembership"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the channel to which you're adding users or bots.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    BatchCreateChannelMembershipRequest& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline ChannelMembershipType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChannelMembershipType value) { m_typeHasBeenSet = true; m_type = value; }
    inline BatchCreateChannelMembershipRequest& WithType(ChannelMembershipType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the members you want to add to the channel. Only
     * <code>AppInstanceUsers</code> and <code>AppInstanceBots</code> can be added as a
     * channel member.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberArns() const { return m_memberArns; }
    inline bool MemberArnsHasBeenSet() const { return m_memberArnsHasBeenSet; }
    template<typename MemberArnsT = Aws::Vector<Aws::String>>
    void SetMemberArns(MemberArnsT&& value) { m_memberArnsHasBeenSet = true; m_memberArns = std::forward<MemberArnsT>(value); }
    template<typename MemberArnsT = Aws::Vector<Aws::String>>
    BatchCreateChannelMembershipRequest& WithMemberArns(MemberArnsT&& value) { SetMemberArns(std::forward<MemberArnsT>(value)); return *this;}
    template<typename MemberArnsT = Aws::String>
    BatchCreateChannelMembershipRequest& AddMemberArns(MemberArnsT&& value) { m_memberArnsHasBeenSet = true; m_memberArns.emplace_back(std::forward<MemberArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code> or <code>AppInstanceBot</code>
     * that makes the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const { return m_chimeBearer; }
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }
    template<typename ChimeBearerT = Aws::String>
    void SetChimeBearer(ChimeBearerT&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::forward<ChimeBearerT>(value); }
    template<typename ChimeBearerT = Aws::String>
    BatchCreateChannelMembershipRequest& WithChimeBearer(ChimeBearerT&& value) { SetChimeBearer(std::forward<ChimeBearerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel in the request. </p>  <p>Only required when
     * creating membership in a SubChannel for a moderator in an elastic channel.</p>
     * 
     */
    inline const Aws::String& GetSubChannelId() const { return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    template<typename SubChannelIdT = Aws::String>
    void SetSubChannelId(SubChannelIdT&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::forward<SubChannelIdT>(value); }
    template<typename SubChannelIdT = Aws::String>
    BatchCreateChannelMembershipRequest& WithSubChannelId(SubChannelIdT&& value) { SetSubChannelId(std::forward<SubChannelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    ChannelMembershipType m_type{ChannelMembershipType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_memberArns;
    bool m_memberArnsHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
