/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/AttendeeCapabilities.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>The Amazon Chime SDK attendee fields to create, used with the
   * BatchCreateAttendee action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/CreateAttendeeRequestItem">AWS
   * API Reference</a></p>
   */
  class CreateAttendeeRequestItem
  {
  public:
    AWS_CHIMESDKMEETINGS_API CreateAttendeeRequestItem();
    AWS_CHIMESDKMEETINGS_API CreateAttendeeRequestItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API CreateAttendeeRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline const Aws::String& GetExternalUserId() const{ return m_externalUserId; }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline bool ExternalUserIdHasBeenSet() const { return m_externalUserIdHasBeenSet; }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline void SetExternalUserId(const Aws::String& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = value; }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline void SetExternalUserId(Aws::String&& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = std::move(value); }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline void SetExternalUserId(const char* value) { m_externalUserIdHasBeenSet = true; m_externalUserId.assign(value); }

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline CreateAttendeeRequestItem& WithExternalUserId(const Aws::String& value) { SetExternalUserId(value); return *this;}

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline CreateAttendeeRequestItem& WithExternalUserId(Aws::String&& value) { SetExternalUserId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p>
     */
    inline CreateAttendeeRequestItem& WithExternalUserId(const char* value) { SetExternalUserId(value); return *this;}


    /**
     * <p>A list of one or more capabilities.</p>
     */
    inline const AttendeeCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>A list of one or more capabilities.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>A list of one or more capabilities.</p>
     */
    inline void SetCapabilities(const AttendeeCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>A list of one or more capabilities.</p>
     */
    inline void SetCapabilities(AttendeeCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>A list of one or more capabilities.</p>
     */
    inline CreateAttendeeRequestItem& WithCapabilities(const AttendeeCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>A list of one or more capabilities.</p>
     */
    inline CreateAttendeeRequestItem& WithCapabilities(AttendeeCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}

  private:

    Aws::String m_externalUserId;
    bool m_externalUserIdHasBeenSet = false;

    AttendeeCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
