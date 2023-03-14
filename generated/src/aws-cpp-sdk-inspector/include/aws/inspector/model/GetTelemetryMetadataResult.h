/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetTelemetryMetadataResult
  {
  public:
    AWS_INSPECTOR_API GetTelemetryMetadataResult();
    AWS_INSPECTOR_API GetTelemetryMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API GetTelemetryMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTelemetryMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTelemetryMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTelemetryMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TelemetryMetadata> m_telemetryMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
