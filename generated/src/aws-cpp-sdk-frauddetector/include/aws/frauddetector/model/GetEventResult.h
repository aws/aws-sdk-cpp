/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/Event.h>
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
  class GetEventResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetEventResult();
    AWS_FRAUDDETECTOR_API GetEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the event.</p>
     */
    inline const Event& GetEvent() const{ return m_event; }

    /**
     * <p>The details of the event.</p>
     */
    inline void SetEvent(const Event& value) { m_event = value; }

    /**
     * <p>The details of the event.</p>
     */
    inline void SetEvent(Event&& value) { m_event = std::move(value); }

    /**
     * <p>The details of the event.</p>
     */
    inline GetEventResult& WithEvent(const Event& value) { SetEvent(value); return *this;}

    /**
     * <p>The details of the event.</p>
     */
    inline GetEventResult& WithEvent(Event&& value) { SetEvent(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Event m_event;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
