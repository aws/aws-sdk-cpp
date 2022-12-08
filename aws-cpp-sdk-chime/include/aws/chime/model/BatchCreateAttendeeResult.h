/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/Attendee.h>
#include <aws/chime/model/CreateAttendeeError.h>
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
  class BatchCreateAttendeeResult
  {
  public:
    AWS_CHIME_API BatchCreateAttendeeResult();
    AWS_CHIME_API BatchCreateAttendeeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API BatchCreateAttendeeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attendee information, including attendees IDs and join tokens.</p>
     */
    inline const Aws::Vector<Attendee>& GetAttendees() const{ return m_attendees; }

    /**
     * <p>The attendee information, including attendees IDs and join tokens.</p>
     */
    inline void SetAttendees(const Aws::Vector<Attendee>& value) { m_attendees = value; }

    /**
     * <p>The attendee information, including attendees IDs and join tokens.</p>
     */
    inline void SetAttendees(Aws::Vector<Attendee>&& value) { m_attendees = std::move(value); }

    /**
     * <p>The attendee information, including attendees IDs and join tokens.</p>
     */
    inline BatchCreateAttendeeResult& WithAttendees(const Aws::Vector<Attendee>& value) { SetAttendees(value); return *this;}

    /**
     * <p>The attendee information, including attendees IDs and join tokens.</p>
     */
    inline BatchCreateAttendeeResult& WithAttendees(Aws::Vector<Attendee>&& value) { SetAttendees(std::move(value)); return *this;}

    /**
     * <p>The attendee information, including attendees IDs and join tokens.</p>
     */
    inline BatchCreateAttendeeResult& AddAttendees(const Attendee& value) { m_attendees.push_back(value); return *this; }

    /**
     * <p>The attendee information, including attendees IDs and join tokens.</p>
     */
    inline BatchCreateAttendeeResult& AddAttendees(Attendee&& value) { m_attendees.push_back(std::move(value)); return *this; }


    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline const Aws::Vector<CreateAttendeeError>& GetErrors() const{ return m_errors; }

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(const Aws::Vector<CreateAttendeeError>& value) { m_errors = value; }

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(Aws::Vector<CreateAttendeeError>&& value) { m_errors = std::move(value); }

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateAttendeeResult& WithErrors(const Aws::Vector<CreateAttendeeError>& value) { SetErrors(value); return *this;}

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateAttendeeResult& WithErrors(Aws::Vector<CreateAttendeeError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateAttendeeResult& AddErrors(const CreateAttendeeError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline BatchCreateAttendeeResult& AddErrors(CreateAttendeeError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Attendee> m_attendees;

    Aws::Vector<CreateAttendeeError> m_errors;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
