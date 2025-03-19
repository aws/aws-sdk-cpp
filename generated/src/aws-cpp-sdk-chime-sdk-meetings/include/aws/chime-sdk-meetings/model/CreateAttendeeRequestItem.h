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
    AWS_CHIMESDKMEETINGS_API CreateAttendeeRequestItem() = default;
    AWS_CHIMESDKMEETINGS_API CreateAttendeeRequestItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API CreateAttendeeRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Chime SDK external user ID. An idempotency token. Links the
     * attendee to an identity managed by a builder application.</p> <p>Pattern:
     * <code>[-_&amp;@+=,(){}\[\]\/«».:|'"#a-zA-Z0-9À-ÿ\s]*</code> </p> <p>Values that
     * begin with <code>aws:</code> are reserved. You can't configure a value that uses
     * this prefix. Case insensitive.</p>
     */
    inline const Aws::String& GetExternalUserId() const { return m_externalUserId; }
    inline bool ExternalUserIdHasBeenSet() const { return m_externalUserIdHasBeenSet; }
    template<typename ExternalUserIdT = Aws::String>
    void SetExternalUserId(ExternalUserIdT&& value) { m_externalUserIdHasBeenSet = true; m_externalUserId = std::forward<ExternalUserIdT>(value); }
    template<typename ExternalUserIdT = Aws::String>
    CreateAttendeeRequestItem& WithExternalUserId(ExternalUserIdT&& value) { SetExternalUserId(std::forward<ExternalUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more capabilities.</p>
     */
    inline const AttendeeCapabilities& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = AttendeeCapabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = AttendeeCapabilities>
    CreateAttendeeRequestItem& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_externalUserId;
    bool m_externalUserIdHasBeenSet = false;

    AttendeeCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
