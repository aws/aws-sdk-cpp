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
    AWS_CHIMESDKMESSAGING_API AppInstanceUserMembershipSummary();
    AWS_CHIMESDKMESSAGING_API AppInstanceUserMembershipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API AppInstanceUserMembershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of <code>ChannelMembership</code>.</p>
     */
    inline const ChannelMembershipType& GetType() const{ return m_type; }

    /**
     * <p>The type of <code>ChannelMembership</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of <code>ChannelMembership</code>.</p>
     */
    inline void SetType(const ChannelMembershipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of <code>ChannelMembership</code>.</p>
     */
    inline void SetType(ChannelMembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of <code>ChannelMembership</code>.</p>
     */
    inline AppInstanceUserMembershipSummary& WithType(const ChannelMembershipType& value) { SetType(value); return *this;}

    /**
     * <p>The type of <code>ChannelMembership</code>.</p>
     */
    inline AppInstanceUserMembershipSummary& WithType(ChannelMembershipType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The time at which an <code>AppInstanceUser</code> last marked a channel as
     * read.</p>
     */
    inline const Aws::Utils::DateTime& GetReadMarkerTimestamp() const{ return m_readMarkerTimestamp; }

    /**
     * <p>The time at which an <code>AppInstanceUser</code> last marked a channel as
     * read.</p>
     */
    inline bool ReadMarkerTimestampHasBeenSet() const { return m_readMarkerTimestampHasBeenSet; }

    /**
     * <p>The time at which an <code>AppInstanceUser</code> last marked a channel as
     * read.</p>
     */
    inline void SetReadMarkerTimestamp(const Aws::Utils::DateTime& value) { m_readMarkerTimestampHasBeenSet = true; m_readMarkerTimestamp = value; }

    /**
     * <p>The time at which an <code>AppInstanceUser</code> last marked a channel as
     * read.</p>
     */
    inline void SetReadMarkerTimestamp(Aws::Utils::DateTime&& value) { m_readMarkerTimestampHasBeenSet = true; m_readMarkerTimestamp = std::move(value); }

    /**
     * <p>The time at which an <code>AppInstanceUser</code> last marked a channel as
     * read.</p>
     */
    inline AppInstanceUserMembershipSummary& WithReadMarkerTimestamp(const Aws::Utils::DateTime& value) { SetReadMarkerTimestamp(value); return *this;}

    /**
     * <p>The time at which an <code>AppInstanceUser</code> last marked a channel as
     * read.</p>
     */
    inline AppInstanceUserMembershipSummary& WithReadMarkerTimestamp(Aws::Utils::DateTime&& value) { SetReadMarkerTimestamp(std::move(value)); return *this;}


    /**
     * <p>The ID of the SubChannel that the <code>AppInstanceUser</code> is a member
     * of.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel that the <code>AppInstanceUser</code> is a member
     * of.</p>
     */
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }

    /**
     * <p>The ID of the SubChannel that the <code>AppInstanceUser</code> is a member
     * of.</p>
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel that the <code>AppInstanceUser</code> is a member
     * of.</p>
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel that the <code>AppInstanceUser</code> is a member
     * of.</p>
     */
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel that the <code>AppInstanceUser</code> is a member
     * of.</p>
     */
    inline AppInstanceUserMembershipSummary& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel that the <code>AppInstanceUser</code> is a member
     * of.</p>
     */
    inline AppInstanceUserMembershipSummary& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel that the <code>AppInstanceUser</code> is a member
     * of.</p>
     */
    inline AppInstanceUserMembershipSummary& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    ChannelMembershipType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_readMarkerTimestamp;
    bool m_readMarkerTimestampHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
