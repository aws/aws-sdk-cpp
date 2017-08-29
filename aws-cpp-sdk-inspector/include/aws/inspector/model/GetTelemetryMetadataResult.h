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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/TelemetryMetadata.h>
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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API GetTelemetryMetadataResult
  {
  public:
    GetTelemetryMetadataResult();
    GetTelemetryMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTelemetryMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Telemetry details.</p>
     */
    inline const Aws::Vector<TelemetryMetadata>& GetTelemetryMetadata() const{ return m_telemetryMetadata; }

    /**
     * <p>Telemetry details.</p>
     */
    inline void SetTelemetryMetadata(const Aws::Vector<TelemetryMetadata>& value) { m_telemetryMetadata = value; }

    /**
     * <p>Telemetry details.</p>
     */
    inline void SetTelemetryMetadata(Aws::Vector<TelemetryMetadata>&& value) { m_telemetryMetadata = std::move(value); }

    /**
     * <p>Telemetry details.</p>
     */
    inline GetTelemetryMetadataResult& WithTelemetryMetadata(const Aws::Vector<TelemetryMetadata>& value) { SetTelemetryMetadata(value); return *this;}

    /**
     * <p>Telemetry details.</p>
     */
    inline GetTelemetryMetadataResult& WithTelemetryMetadata(Aws::Vector<TelemetryMetadata>&& value) { SetTelemetryMetadata(std::move(value)); return *this;}

    /**
     * <p>Telemetry details.</p>
     */
    inline GetTelemetryMetadataResult& AddTelemetryMetadata(const TelemetryMetadata& value) { m_telemetryMetadata.push_back(value); return *this; }

    /**
     * <p>Telemetry details.</p>
     */
    inline GetTelemetryMetadataResult& AddTelemetryMetadata(TelemetryMetadata&& value) { m_telemetryMetadata.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TelemetryMetadata> m_telemetryMetadata;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
