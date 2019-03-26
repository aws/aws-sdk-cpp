/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ResourceType.h>
#include <aws/workmail/model/BookingOptions.h>
#include <aws/workmail/model/EntityState.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API DescribeResourceResult
  {
  public:
    DescribeResourceResult();
    DescribeResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the described resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the described resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }

    /**
     * <p>The identifier of the described resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the described resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }

    /**
     * <p>The identifier of the described resource.</p>
     */
    inline DescribeResourceResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the described resource.</p>
     */
    inline DescribeResourceResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the described resource.</p>
     */
    inline DescribeResourceResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The email of the described resource.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email of the described resource.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_email = value; }

    /**
     * <p>The email of the described resource.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }

    /**
     * <p>The email of the described resource.</p>
     */
    inline void SetEmail(const char* value) { m_email.assign(value); }

    /**
     * <p>The email of the described resource.</p>
     */
    inline DescribeResourceResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email of the described resource.</p>
     */
    inline DescribeResourceResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email of the described resource.</p>
     */
    inline DescribeResourceResult& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The name of the described resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the described resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the described resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the described resource.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the described resource.</p>
     */
    inline DescribeResourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the described resource.</p>
     */
    inline DescribeResourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the described resource.</p>
     */
    inline DescribeResourceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the described resource.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the described resource.</p>
     */
    inline void SetType(const ResourceType& value) { m_type = value; }

    /**
     * <p>The type of the described resource.</p>
     */
    inline void SetType(ResourceType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the described resource.</p>
     */
    inline DescribeResourceResult& WithType(const ResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the described resource.</p>
     */
    inline DescribeResourceResult& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The booking options for the described resource.</p>
     */
    inline const BookingOptions& GetBookingOptions() const{ return m_bookingOptions; }

    /**
     * <p>The booking options for the described resource.</p>
     */
    inline void SetBookingOptions(const BookingOptions& value) { m_bookingOptions = value; }

    /**
     * <p>The booking options for the described resource.</p>
     */
    inline void SetBookingOptions(BookingOptions&& value) { m_bookingOptions = std::move(value); }

    /**
     * <p>The booking options for the described resource.</p>
     */
    inline DescribeResourceResult& WithBookingOptions(const BookingOptions& value) { SetBookingOptions(value); return *this;}

    /**
     * <p>The booking options for the described resource.</p>
     */
    inline DescribeResourceResult& WithBookingOptions(BookingOptions&& value) { SetBookingOptions(std::move(value)); return *this;}


    /**
     * <p>The state of the resource: enabled (registered to Amazon WorkMail) or
     * disabled (deregistered or never registered to WorkMail).</p>
     */
    inline const EntityState& GetState() const{ return m_state; }

    /**
     * <p>The state of the resource: enabled (registered to Amazon WorkMail) or
     * disabled (deregistered or never registered to WorkMail).</p>
     */
    inline void SetState(const EntityState& value) { m_state = value; }

    /**
     * <p>The state of the resource: enabled (registered to Amazon WorkMail) or
     * disabled (deregistered or never registered to WorkMail).</p>
     */
    inline void SetState(EntityState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the resource: enabled (registered to Amazon WorkMail) or
     * disabled (deregistered or never registered to WorkMail).</p>
     */
    inline DescribeResourceResult& WithState(const EntityState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the resource: enabled (registered to Amazon WorkMail) or
     * disabled (deregistered or never registered to WorkMail).</p>
     */
    inline DescribeResourceResult& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time when a resource was enabled for WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }

    /**
     * <p>The date and time when a resource was enabled for WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDate = value; }

    /**
     * <p>The date and time when a resource was enabled for WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDate = std::move(value); }

    /**
     * <p>The date and time when a resource was enabled for WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline DescribeResourceResult& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}

    /**
     * <p>The date and time when a resource was enabled for WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline DescribeResourceResult& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}


    /**
     * <p>The date and time when a resource was disabled from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }

    /**
     * <p>The date and time when a resource was disabled from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDate = value; }

    /**
     * <p>The date and time when a resource was disabled from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDate = std::move(value); }

    /**
     * <p>The date and time when a resource was disabled from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline DescribeResourceResult& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}

    /**
     * <p>The date and time when a resource was disabled from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline DescribeResourceResult& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;

    Aws::String m_email;

    Aws::String m_name;

    ResourceType m_type;

    BookingOptions m_bookingOptions;

    EntityState m_state;

    Aws::Utils::DateTime m_enabledDate;

    Aws::Utils::DateTime m_disabledDate;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
