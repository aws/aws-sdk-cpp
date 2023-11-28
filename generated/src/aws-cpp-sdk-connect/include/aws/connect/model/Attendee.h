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
    AWS_CONNECT_API Attendee();
    AWS_CONNECT_API Attendee(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Attendee& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline const Aws::String& GetAttendeeId() const{ return m_attendeeId; }

    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline bool AttendeeIdHasBeenSet() const { return m_attendeeIdHasBeenSet; }

    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline void SetAttendeeId(const Aws::String& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = value; }

    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline void SetAttendeeId(Aws::String&& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = std::move(value); }

    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline void SetAttendeeId(const char* value) { m_attendeeIdHasBeenSet = true; m_attendeeId.assign(value); }

    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline Attendee& WithAttendeeId(const Aws::String& value) { SetAttendeeId(value); return *this;}

    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline Attendee& WithAttendeeId(Aws::String&& value) { SetAttendeeId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime SDK attendee ID.</p>
     */
    inline Attendee& WithAttendeeId(const char* value) { SetAttendeeId(value); return *this;}


    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline const Aws::String& GetJoinToken() const{ return m_joinToken; }

    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline bool JoinTokenHasBeenSet() const { return m_joinTokenHasBeenSet; }

    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline void SetJoinToken(const Aws::String& value) { m_joinTokenHasBeenSet = true; m_joinToken = value; }

    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline void SetJoinToken(Aws::String&& value) { m_joinTokenHasBeenSet = true; m_joinToken = std::move(value); }

    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline void SetJoinToken(const char* value) { m_joinTokenHasBeenSet = true; m_joinToken.assign(value); }

    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline Attendee& WithJoinToken(const Aws::String& value) { SetJoinToken(value); return *this;}

    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline Attendee& WithJoinToken(Aws::String&& value) { SetJoinToken(std::move(value)); return *this;}

    /**
     * <p>The join token used by the Amazon Chime SDK attendee.</p>
     */
    inline Attendee& WithJoinToken(const char* value) { SetJoinToken(value); return *this;}

  private:

    Aws::String m_attendeeId;
    bool m_attendeeIdHasBeenSet = false;

    Aws::String m_joinToken;
    bool m_joinTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
