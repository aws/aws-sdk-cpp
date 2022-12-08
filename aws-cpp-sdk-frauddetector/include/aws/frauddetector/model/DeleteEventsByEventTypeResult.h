/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteEventsByEventTypeResult
  {
  public:
    AWS_FRAUDDETECTOR_API DeleteEventsByEventTypeResult();
    AWS_FRAUDDETECTOR_API DeleteEventsByEventTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API DeleteEventsByEventTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Name of event type for which to delete the events.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>Name of event type for which to delete the events.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeName = value; }

    /**
     * <p>Name of event type for which to delete the events.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeName = std::move(value); }

    /**
     * <p>Name of event type for which to delete the events.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeName.assign(value); }

    /**
     * <p>Name of event type for which to delete the events.</p>
     */
    inline DeleteEventsByEventTypeResult& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>Name of event type for which to delete the events.</p>
     */
    inline DeleteEventsByEventTypeResult& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>Name of event type for which to delete the events.</p>
     */
    inline DeleteEventsByEventTypeResult& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p>The status of the delete request.</p>
     */
    inline const Aws::String& GetEventsDeletionStatus() const{ return m_eventsDeletionStatus; }

    /**
     * <p>The status of the delete request.</p>
     */
    inline void SetEventsDeletionStatus(const Aws::String& value) { m_eventsDeletionStatus = value; }

    /**
     * <p>The status of the delete request.</p>
     */
    inline void SetEventsDeletionStatus(Aws::String&& value) { m_eventsDeletionStatus = std::move(value); }

    /**
     * <p>The status of the delete request.</p>
     */
    inline void SetEventsDeletionStatus(const char* value) { m_eventsDeletionStatus.assign(value); }

    /**
     * <p>The status of the delete request.</p>
     */
    inline DeleteEventsByEventTypeResult& WithEventsDeletionStatus(const Aws::String& value) { SetEventsDeletionStatus(value); return *this;}

    /**
     * <p>The status of the delete request.</p>
     */
    inline DeleteEventsByEventTypeResult& WithEventsDeletionStatus(Aws::String&& value) { SetEventsDeletionStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the delete request.</p>
     */
    inline DeleteEventsByEventTypeResult& WithEventsDeletionStatus(const char* value) { SetEventsDeletionStatus(value); return *this;}

  private:

    Aws::String m_eventTypeName;

    Aws::String m_eventsDeletionStatus;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
