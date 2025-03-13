/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class RunPipelineActivityResult
  {
  public:
    AWS_IOTANALYTICS_API RunPipelineActivityResult() = default;
    AWS_IOTANALYTICS_API RunPipelineActivityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API RunPipelineActivityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The enriched or transformed sample message payloads as base64-encoded
     * strings. (The results of running the pipeline activity on each input sample
     * message payload, encoded in base64.)</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetPayloads() const { return m_payloads; }
    template<typename PayloadsT = Aws::Vector<Aws::Utils::ByteBuffer>>
    void SetPayloads(PayloadsT&& value) { m_payloadsHasBeenSet = true; m_payloads = std::forward<PayloadsT>(value); }
    template<typename PayloadsT = Aws::Vector<Aws::Utils::ByteBuffer>>
    RunPipelineActivityResult& WithPayloads(PayloadsT&& value) { SetPayloads(std::forward<PayloadsT>(value)); return *this;}
    template<typename PayloadsT = Aws::Utils::ByteBuffer>
    RunPipelineActivityResult& AddPayloads(PayloadsT&& value) { m_payloadsHasBeenSet = true; m_payloads.emplace_back(std::forward<PayloadsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>In case the pipeline activity fails, the log message that is generated.</p>
     */
    inline const Aws::String& GetLogResult() const { return m_logResult; }
    template<typename LogResultT = Aws::String>
    void SetLogResult(LogResultT&& value) { m_logResultHasBeenSet = true; m_logResult = std::forward<LogResultT>(value); }
    template<typename LogResultT = Aws::String>
    RunPipelineActivityResult& WithLogResult(LogResultT&& value) { SetLogResult(std::forward<LogResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RunPipelineActivityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Utils::ByteBuffer> m_payloads;
    bool m_payloadsHasBeenSet = false;

    Aws::String m_logResult;
    bool m_logResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
