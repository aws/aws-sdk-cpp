/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/AsyncJobStatus.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetDeleteEventsByEventTypeStatusResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetDeleteEventsByEventTypeStatusResult();
    AWS_FRAUDDETECTOR_API GetDeleteEventsByEventTypeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetDeleteEventsByEventTypeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The event type name.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The event type name.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeName = value; }

    /**
     * <p>The event type name.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeName = std::move(value); }

    /**
     * <p>The event type name.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeName.assign(value); }

    /**
     * <p>The event type name.</p>
     */
    inline GetDeleteEventsByEventTypeStatusResult& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The event type name.</p>
     */
    inline GetDeleteEventsByEventTypeStatusResult& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The event type name.</p>
     */
    inline GetDeleteEventsByEventTypeStatusResult& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p>The deletion status.</p>
     */
    inline const AsyncJobStatus& GetEventsDeletionStatus() const{ return m_eventsDeletionStatus; }

    /**
     * <p>The deletion status.</p>
     */
    inline void SetEventsDeletionStatus(const AsyncJobStatus& value) { m_eventsDeletionStatus = value; }

    /**
     * <p>The deletion status.</p>
     */
    inline void SetEventsDeletionStatus(AsyncJobStatus&& value) { m_eventsDeletionStatus = std::move(value); }

    /**
     * <p>The deletion status.</p>
     */
    inline GetDeleteEventsByEventTypeStatusResult& WithEventsDeletionStatus(const AsyncJobStatus& value) { SetEventsDeletionStatus(value); return *this;}

    /**
     * <p>The deletion status.</p>
     */
    inline GetDeleteEventsByEventTypeStatusResult& WithEventsDeletionStatus(AsyncJobStatus&& value) { SetEventsDeletionStatus(std::move(value)); return *this;}

  private:

    Aws::String m_eventTypeName;

    AsyncJobStatus m_eventsDeletionStatus;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
