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
    AWS_INSPECTOR_API GetTelemetryMetadataResult() = default;
    AWS_INSPECTOR_API GetTelemetryMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API GetTelemetryMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Telemetry details.</p>
     */
    inline const Aws::Vector<TelemetryMetadata>& GetTelemetryMetadata() const { return m_telemetryMetadata; }
    template<typename TelemetryMetadataT = Aws::Vector<TelemetryMetadata>>
    void SetTelemetryMetadata(TelemetryMetadataT&& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata = std::forward<TelemetryMetadataT>(value); }
    template<typename TelemetryMetadataT = Aws::Vector<TelemetryMetadata>>
    GetTelemetryMetadataResult& WithTelemetryMetadata(TelemetryMetadataT&& value) { SetTelemetryMetadata(std::forward<TelemetryMetadataT>(value)); return *this;}
    template<typename TelemetryMetadataT = TelemetryMetadata>
    GetTelemetryMetadataResult& AddTelemetryMetadata(TelemetryMetadataT&& value) { m_telemetryMetadataHasBeenSet = true; m_telemetryMetadata.emplace_back(std::forward<TelemetryMetadataT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTelemetryMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TelemetryMetadata> m_telemetryMetadata;
    bool m_telemetryMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
