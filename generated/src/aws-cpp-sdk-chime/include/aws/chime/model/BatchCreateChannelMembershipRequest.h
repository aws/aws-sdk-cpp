/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/ChannelMembershipType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class BatchCreateChannelMembershipRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API BatchCreateChannelMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateChannelMembership"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;

    AWS_CHIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline BatchCreateChannelMembershipRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline BatchCreateChannelMembershipRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline BatchCreateChannelMembershipRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline const ChannelMembershipType& GetType() const{ return m_type; }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline void SetType(const ChannelMembershipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline void SetType(ChannelMembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline BatchCreateChannelMembershipRequest& WithType(const ChannelMembershipType& value) { SetType(value); return *this;}

    /**
     * <p>The membership type of a user, <code>DEFAULT</code> or <code>HIDDEN</code>.
     * Default members are always returned as part of
     * <code>ListChannelMemberships</code>. Hidden members are only returned if the
     * type filter in <code>ListChannelMemberships</code> equals <code>HIDDEN</code>.
     * Otherwise hidden members are not returned. This is only supported by
     * moderators.</p>
     */
    inline BatchCreateChannelMembershipRequest& WithType(ChannelMembershipType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ARNs of the members you want to add to the channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemberArns() const{ return m_memberArns; }

    /**
     * <p>The ARNs of the members you want to add to the channel.</p>
     */
    inline bool MemberArnsHasBeenSet() const { return m_memberArnsHasBeenSet; }

    /**
     * <p>The ARNs of the members you want to add to the channel.</p>
     */
    inline void SetMemberArns(const Aws::Vector<Aws::String>& value) { m_memberArnsHasBeenSet = true; m_memberArns = value; }

    /**
     * <p>The ARNs of the members you want to add to the channel.</p>
     */
    inline void SetMemberArns(Aws::Vector<Aws::String>&& value) { m_memberArnsHasBeenSet = true; m_memberArns = std::move(value); }

    /**
     * <p>The ARNs of the members you want to add to the channel.</p>
     */
    inline BatchCreateChannelMembershipRequest& WithMemberArns(const Aws::Vector<Aws::String>& value) { SetMemberArns(value); return *this;}

    /**
     * <p>The ARNs of the members you want to add to the channel.</p>
     */
    inline BatchCreateChannelMembershipRequest& WithMemberArns(Aws::Vector<Aws::String>&& value) { SetMemberArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the members you want to add to the channel.</p>
     */
    inline BatchCreateChannelMembershipRequest& AddMemberArns(const Aws::String& value) { m_memberArnsHasBeenSet = true; m_memberArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the members you want to add to the channel.</p>
     */
    inline BatchCreateChannelMembershipRequest& AddMemberArns(Aws::String&& value) { m_memberArnsHasBeenSet = true; m_memberArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the members you want to add to the channel.</p>
     */
    inline BatchCreateChannelMembershipRequest& AddMemberArns(const char* value) { m_memberArnsHasBeenSet = true; m_memberArns.push_back(value); return *this; }


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
    inline BatchCreateChannelMembershipRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline BatchCreateChannelMembershipRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user that makes the API call.</p>
     */
    inline BatchCreateChannelMembershipRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}

  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    ChannelMembershipType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_memberArns;
    bool m_memberArnsHasBeenSet = false;

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
