﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/RoomMembershipRole.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Membership details, such as member ID and member role.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/MembershipItem">AWS
   * API Reference</a></p>
   */
  class MembershipItem
  {
  public:
    AWS_CHIME_API MembershipItem();
    AWS_CHIME_API MembershipItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API MembershipItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The member ID.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }
    inline MembershipItem& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}
    inline MembershipItem& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}
    inline MembershipItem& WithMemberId(const char* value) { SetMemberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member role.</p>
     */
    inline const RoomMembershipRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const RoomMembershipRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(RoomMembershipRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline MembershipItem& WithRole(const RoomMembershipRole& value) { SetRole(value); return *this;}
    inline MembershipItem& WithRole(RoomMembershipRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    RoomMembershipRole m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
