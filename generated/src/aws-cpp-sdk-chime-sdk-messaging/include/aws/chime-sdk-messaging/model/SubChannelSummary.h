/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>Summary of the sub-channels associated with the elastic
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/SubChannelSummary">AWS
   * API Reference</a></p>
   */
  class SubChannelSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API SubChannelSummary() = default;
    AWS_CHIMESDKMESSAGING_API SubChannelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API SubChannelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of a SubChannel.</p>
     */
    inline const Aws::String& GetSubChannelId() const { return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    template<typename SubChannelIdT = Aws::String>
    void SetSubChannelId(SubChannelIdT&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::forward<SubChannelIdT>(value); }
    template<typename SubChannelIdT = Aws::String>
    SubChannelSummary& WithSubChannelId(SubChannelIdT&& value) { SetSubChannelId(std::forward<SubChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of members in a SubChannel.</p>
     */
    inline int GetMembershipCount() const { return m_membershipCount; }
    inline bool MembershipCountHasBeenSet() const { return m_membershipCountHasBeenSet; }
    inline void SetMembershipCount(int value) { m_membershipCountHasBeenSet = true; m_membershipCount = value; }
    inline SubChannelSummary& WithMembershipCount(int value) { SetMembershipCount(value); return *this;}
    ///@}
  private:

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;

    int m_membershipCount{0};
    bool m_membershipCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
