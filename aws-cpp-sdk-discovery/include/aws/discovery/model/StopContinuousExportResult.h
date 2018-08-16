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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class AWS_APPLICATIONDISCOVERYSERVICE_API StopContinuousExportResult
  {
  public:
    StopContinuousExportResult();
    StopContinuousExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopContinuousExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_stopTime;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
