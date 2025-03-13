/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary of the membership details of an
   * <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/AppInstanceUserMembershipSummary">AWS
   * API Reference</a></p>
   */
  class AppInstanceUserMembershipSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API AppInstanceUserMembershipSummary() = default;
    AWS_CHIMESDKMESSAGING_API AppInstanceUserMembershipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API AppInstanceUserMembershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of <code>ChannelMembership</code>.</p>
     */
    inline ChannelMembershipType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChannelMembershipType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AppInstanceUserMembershipSummary& WithType(ChannelMembershipType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which an <code>AppInstanceUser</code> last marked a channel as
     * read.</p>
     */
    inline const Aws::Utils::DateTime& GetReadMarkerTimestamp() const { return m_readMarkerTimestamp; }
    inline bool ReadMarkerTimestampHasBeenSet() const { return m_readMarkerTimestampHasBeenSet; }
    template<typename ReadMarkerTimestampT = Aws::Utils::DateTime>
    void SetReadMarkerTimestamp(ReadMarkerTimestampT&& value) { m_readMarkerTimestampHasBeenSet = true; m_readMarkerTimestamp = std::forward<ReadMarkerTimestampT>(value); }
    template<typename ReadMarkerTimestampT = Aws::Utils::DateTime>
    AppInstanceUserMembershipSummary& WithReadMarkerTimestamp(ReadMarkerTimestampT&& value) { SetReadMarkerTimestamp(std::forward<ReadMarkerTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel that the <code>AppInstanceUser</code> is a member
     * of.</p>
     */
    inline const Aws::String& GetSubChannelId() const { return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    template<typename SubChannelIdT = Aws::String>
    void SetSubChannelId(SubChannelIdT&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::forward<SubChannelIdT>(value); }
    template<typename SubChannelIdT = Aws::String>
    AppInstanceUserMembershipSummary& WithSubChannelId(SubChannelIdT&& value) { SetSubChannelId(std::forward<SubChannelIdT>(value)); return *this;}
    ///@}
  private:

    ChannelMembershipType m_type{ChannelMembershipType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_readMarkerTimestamp{};
    bool m_readMarkerTimestampHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
