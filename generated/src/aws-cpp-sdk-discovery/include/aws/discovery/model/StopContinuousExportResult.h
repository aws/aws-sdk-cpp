/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class StopContinuousExportResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StopContinuousExportResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API StopContinuousExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StopContinuousExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Timestamp that represents when this continuous export started collecting
     * data.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Timestamp that represents when this continuous export started collecting
     * data.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>Timestamp that represents when this continuous export started collecting
     * data.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>Timestamp that represents when this continuous export started collecting
     * data.</p>
     */
    inline StopContinuousExportResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Timestamp that represents when this continuous export started collecting
     * data.</p>
     */
    inline StopContinuousExportResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Timestamp that represents when this continuous export was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }

    /**
     * <p>Timestamp that represents when this continuous export was stopped.</p>
     */
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTime = value; }

    /**
     * <p>Timestamp that represents when this continuous export was stopped.</p>
     */
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTime = std::move(value); }

    /**
     * <p>Timestamp that represents when this continuous export was stopped.</p>
     */
    inline StopContinuousExportResult& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}

    /**
     * <p>Timestamp that represents when this continuous export was stopped.</p>
     */
    inline StopContinuousExportResult& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopContinuousExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopContinuousExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopContinuousExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_stopTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
