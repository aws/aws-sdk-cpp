/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Telemetry.h>

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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API GetAssessmentTelemetryResult
  {
  public:
    GetAssessmentTelemetryResult();
    GetAssessmentTelemetryResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAssessmentTelemetryResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Telemetry details.</p>
     */
    inline const Aws::Vector<Telemetry>& GetTelemetry() const{ return m_telemetry; }

    /**
     * <p>Telemetry details.</p>
     */
    inline void SetTelemetry(const Aws::Vector<Telemetry>& value) { m_telemetry = value; }

    /**
     * <p>Telemetry details.</p>
     */
    inline void SetTelemetry(Aws::Vector<Telemetry>&& value) { m_telemetry = value; }

    /**
     * <p>Telemetry details.</p>
     */
    inline GetAssessmentTelemetryResult& WithTelemetry(const Aws::Vector<Telemetry>& value) { SetTelemetry(value); return *this;}

    /**
     * <p>Telemetry details.</p>
     */
    inline GetAssessmentTelemetryResult& WithTelemetry(Aws::Vector<Telemetry>&& value) { SetTelemetry(value); return *this;}

    /**
     * <p>Telemetry details.</p>
     */
    inline GetAssessmentTelemetryResult& AddTelemetry(const Telemetry& value) { m_telemetry.push_back(value); return *this; }

    /**
     * <p>Telemetry details.</p>
     */
    inline GetAssessmentTelemetryResult& AddTelemetry(Telemetry&& value) { m_telemetry.push_back(value); return *this; }

  private:
    Aws::Vector<Telemetry> m_telemetry;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
