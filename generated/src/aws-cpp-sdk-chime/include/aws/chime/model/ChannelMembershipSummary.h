/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Identity.h>
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
   * <p>Summary of the details of a <code>ChannelMembership</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChannelMembershipSummary">AWS
   * API Reference</a></p>
   */
  class ChannelMembershipSummary
  {
  public:
    AWS_CHIME_API ChannelMembershipSummary();
    AWS_CHIME_API ChannelMembershipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ChannelMembershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A member's summary data.</p>
     */
    inline const Identity& GetMember() const{ return m_member; }

    /**
     * <p>A member's summary data.</p>
     */
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }

    /**
     * <p>A member's summary data.</p>
     */
    inline void SetMember(const Identity& value) { m_memberHasBeenSet = true; m_member = value; }

    /**
     * <p>A member's summary data.</p>
     */
    inline void SetMember(Identity&& value) { m_memberHasBeenSet = true; m_member = std::move(value); }

    /**
     * <p>A member's summary data.</p>
     */
    inline ChannelMembershipSummary& WithMember(const Identity& value) { SetMember(value); return *this;}

    /**
     * <p>A member's summary data.</p>
     */
    inline ChannelMembershipSummary& WithMember(Identity&& value) { SetMember(std::move(value)); return *this;}

  private:

    Identity m_member;
    bool m_memberHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
