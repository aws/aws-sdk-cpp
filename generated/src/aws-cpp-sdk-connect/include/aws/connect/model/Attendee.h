/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The attendee information, including attendee ID and join token.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Attendee">AWS
   * API Reference</a></p>
   */
  class Attendee
  {
  public:
    AWS_CONNECT_API Attendee() = default;
    AWS_CONNECT_API Attendee(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Attendee& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline const Aws::String& GetAttendeeId() const { return m_attendeeId; }
    inline bool AttendeeIdHasBeenSet() const { return m_attendeeIdHasBeenSet; }
    template<typename AttendeeIdT = Aws::String>
    void SetAttendeeId(AttendeeIdT&& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = std::forward<AttendeeIdT>(value); }
    template<typename AttendeeIdT = Aws::String>
    Attendee& WithAttendeeId(AttendeeIdT&& value) { SetAttendeeId(std::forward<AttendeeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline const Aws::String& GetJoinToken() const { return m_joinToken; }
    inline bool JoinTokenHasBeenSet() const { return m_joinTokenHasBeenSet; }
    template<typename JoinTokenT = Aws::String>
    void SetJoinToken(JoinTokenT&& value) { m_joinTokenHasBeenSet = true; m_joinToken = std::forward<JoinTokenT>(value); }
    template<typename JoinTokenT = Aws::String>
    Attendee& WithJoinToken(JoinTokenT&& value) { SetJoinToken(std::forward<JoinTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attendeeId;
    bool m_attendeeIdHasBeenSet = false;

    Aws::String m_joinToken;
    bool m_joinTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
