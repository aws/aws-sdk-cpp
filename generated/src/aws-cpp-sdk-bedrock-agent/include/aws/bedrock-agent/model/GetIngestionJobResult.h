/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/IngestionJob.h>
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
namespace BedrockAgent
{
namespace Model
{
  class GetIngestionJobResult
  {
  public:
    AWS_BEDROCKAGENT_API GetIngestionJobResult() = default;
    AWS_BEDROCKAGENT_API GetIngestionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetIngestionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains details about the data ingestion job.</p>
     */
    inline const IngestionJob& GetIngestionJob() const { return m_ingestionJob; }
    template<typename IngestionJobT = IngestionJob>
    void SetIngestionJob(IngestionJobT&& value) { m_ingestionJobHasBeenSet = true; m_ingestionJob = std::forward<IngestionJobT>(value); }
    template<typename IngestionJobT = IngestionJob>
    GetIngestionJobResult& WithIngestionJob(IngestionJobT&& value) { SetIngestionJob(std::forward<IngestionJobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIngestionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IngestionJob m_ingestionJob;
    bool m_ingestionJobHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
