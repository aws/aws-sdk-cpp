/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeEventSourceResult
  {
  public:
    AWS_EVENTBRIDGE_API DescribeEventSourceResult();
    AWS_EVENTBRIDGE_API DescribeEventSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API DescribeEventSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the partner event source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeEventSourceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeEventSourceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeEventSourceResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SaaS partner that created the event source.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline DescribeEventSourceResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline DescribeEventSourceResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline DescribeEventSourceResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the event source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeEventSourceResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeEventSourceResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the event source will expire if you do not create a
     * matching event bus.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTime = value; }
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTime = std::move(value); }
    inline DescribeEventSourceResult& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}
    inline DescribeEventSourceResult& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partner event source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeEventSourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeEventSourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeEventSourceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the event source. If it is ACTIVE, you have already created a
     * matching event bus for this event source, and that event bus is active. If it is
     * PENDING, either you haven't yet created a matching event bus, or that event bus
     * is deactivated. If it is DELETED, you have created a matching event bus, but the
     * event source has since been deleted.</p>
     */
    inline const EventSourceState& GetState() const{ return m_state; }
    inline void SetState(const EventSourceState& value) { m_state = value; }
    inline void SetState(EventSourceState&& value) { m_state = std::move(value); }
    inline DescribeEventSourceResult& WithState(const EventSourceState& value) { SetState(value); return *this;}
    inline DescribeEventSourceResult& WithState(EventSourceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEventSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEventSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEventSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_expirationTime;

    Aws::String m_name;

    EventSourceState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
