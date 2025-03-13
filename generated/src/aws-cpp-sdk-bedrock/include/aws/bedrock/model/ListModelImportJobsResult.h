/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ModelImportJobSummary.h>
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
  class ListModelImportJobsResult
  {
  public:
    AWS_BEDROCK_API ListModelImportJobsResult() = default;
    AWS_BEDROCK_API ListModelImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListModelImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Import job summaries.</p>
     */
    inline const Aws::Vector<ModelImportJobSummary>& GetModelImportJobSummaries() const { return m_modelImportJobSummaries; }
    template<typename ModelImportJobSummariesT = Aws::Vector<ModelImportJobSummary>>
    void SetModelImportJobSummaries(ModelImportJobSummariesT&& value) { m_modelImportJobSummariesHasBeenSet = true; m_modelImportJobSummaries = std::forward<ModelImportJobSummariesT>(value); }
    template<typename ModelImportJobSummariesT = Aws::Vector<ModelImportJobSummary>>
    ListModelImportJobsResult& WithModelImportJobSummaries(ModelImportJobSummariesT&& value) { SetModelImportJobSummaries(std::forward<ModelImportJobSummariesT>(value)); return *this;}
    template<typename ModelImportJobSummariesT = ModelImportJobSummary>
    ListModelImportJobsResult& AddModelImportJobSummaries(ModelImportJobSummariesT&& value) { m_modelImportJobSummariesHasBeenSet = true; m_modelImportJobSummaries.emplace_back(std::forward<ModelImportJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ModelImportJobSummary> m_modelImportJobSummaries;
    bool m_modelImportJobSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
