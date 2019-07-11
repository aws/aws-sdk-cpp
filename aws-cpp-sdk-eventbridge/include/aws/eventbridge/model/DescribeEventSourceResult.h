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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/eventbridge/model/EventSourceState.h>
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
namespace EventBridge
{
namespace Model
{
  class AWS_EVENTBRIDGE_API DescribeEventSourceResult
  {
  public:
    DescribeEventSourceResult();
    DescribeEventSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEventSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline DescribeEventSourceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline DescribeEventSourceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline DescribeEventSourceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the SaaS partner that created the event source.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The name of the SaaS partner that created the event source.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The name of the SaaS partner that created the event source.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The name of the SaaS partner that created the event source.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The name of the SaaS partner that created the event source.</p>
     */
    inline DescribeEventSourceResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The name of the SaaS partner that created the event source.</p>
     */
    inline DescribeEventSourceResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The name of the SaaS partner that created the event source.</p>
     */
    inline DescribeEventSourceResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time that the event source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the event source was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time that the event source was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the event source was created.</p>
     */
    inline DescribeEventSourceResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the event source was created.</p>
     */
    inline DescribeEventSourceResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the event source will expire if you don't create a
     * matching event bus.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The date and time that the event source will expire if you don't create a
     * matching event bus.</p>
     */
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTime = value; }

    /**
     * <p>The date and time that the event source will expire if you don't create a
     * matching event bus.</p>
     */
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTime = std::move(value); }

    /**
     * <p>The date and time that the event source will expire if you don't create a
     * matching event bus.</p>
     */
    inline DescribeEventSourceResult& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>The date and time that the event source will expire if you don't create a
     * matching event bus.</p>
     */
    inline DescribeEventSourceResult& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The name of the partner event source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the partner event source.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the partner event source.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the partner event source.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the partner event source.</p>
     */
    inline DescribeEventSourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the partner event source.</p>
     */
    inline DescribeEventSourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the partner event source.</p>
     */
    inline DescribeEventSourceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline const EventSourceState& GetState() const{ return m_state; }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline void SetState(const EventSourceState& value) { m_state = value; }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline void SetState(EventSourceState&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline DescribeEventSourceResult& WithState(const EventSourceState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline DescribeEventSourceResult& WithState(EventSourceState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_expirationTime;

    Aws::String m_name;

    EventSourceState m_state;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
