/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ModelCopyJobSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListModelCopyJobsResult
  {
  public:
    AWS_BEDROCK_API ListModelCopyJobsResult() = default;
    AWS_BEDROCK_API ListModelCopyJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListModelCopyJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelCopyJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of information about each model copy job.</p>
     */
    inline const Aws::Vector<ModelCopyJobSummary>& GetModelCopyJobSummaries() const { return m_modelCopyJobSummaries; }
    template<typename ModelCopyJobSummariesT = Aws::Vector<ModelCopyJobSummary>>
    void SetModelCopyJobSummaries(ModelCopyJobSummariesT&& value) { m_modelCopyJobSummariesHasBeenSet = true; m_modelCopyJobSummaries = std::forward<ModelCopyJobSummariesT>(value); }
    template<typename ModelCopyJobSummariesT = Aws::Vector<ModelCopyJobSummary>>
    ListModelCopyJobsResult& WithModelCopyJobSummaries(ModelCopyJobSummariesT&& value) { SetModelCopyJobSummaries(std::forward<ModelCopyJobSummariesT>(value)); return *this;}
    template<typename ModelCopyJobSummariesT = ModelCopyJobSummary>
    ListModelCopyJobsResult& AddModelCopyJobSummaries(ModelCopyJobSummariesT&& value) { m_modelCopyJobSummariesHasBeenSet = true; m_modelCopyJobSummaries.emplace_back(std::forward<ModelCopyJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelCopyJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ModelCopyJobSummary> m_modelCopyJobSummaries;
    bool m_modelCopyJobSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
