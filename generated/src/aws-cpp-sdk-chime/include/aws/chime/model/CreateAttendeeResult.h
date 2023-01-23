/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Attendee.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class CreateAttendeeResult
  {
  public:
    AWS_CHIME_API CreateAttendeeResult();
    AWS_CHIME_API CreateAttendeeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateAttendeeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline const Attendee& GetAttendee() const{ return m_attendee; }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline void SetAttendee(const Attendee& value) { m_attendee = value; }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline void SetAttendee(Attendee&& value) { m_attendee = std::move(value); }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline CreateAttendeeResult& WithAttendee(const Attendee& value) { SetAttendee(value); return *this;}

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline CreateAttendeeResult& WithAttendee(Attendee&& value) { SetAttendee(std::move(value)); return *this;}

  private:

    Attendee m_attendee;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
