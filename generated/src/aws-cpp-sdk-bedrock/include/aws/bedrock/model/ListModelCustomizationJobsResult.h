/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ModelCustomizationJobSummary.h>
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
  class ListModelCustomizationJobsResult
  {
  public:
    AWS_BEDROCK_API ListModelCustomizationJobsResult() = default;
    AWS_BEDROCK_API ListModelCustomizationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListModelCustomizationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListModelCustomizationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job summaries.</p>
     */
    inline const Aws::Vector<ModelCustomizationJobSummary>& GetModelCustomizationJobSummaries() const { return m_modelCustomizationJobSummaries; }
    template<typename ModelCustomizationJobSummariesT = Aws::Vector<ModelCustomizationJobSummary>>
    void SetModelCustomizationJobSummaries(ModelCustomizationJobSummariesT&& value) { m_modelCustomizationJobSummariesHasBeenSet = true; m_modelCustomizationJobSummaries = std::forward<ModelCustomizationJobSummariesT>(value); }
    template<typename ModelCustomizationJobSummariesT = Aws::Vector<ModelCustomizationJobSummary>>
    ListModelCustomizationJobsResult& WithModelCustomizationJobSummaries(ModelCustomizationJobSummariesT&& value) { SetModelCustomizationJobSummaries(std::forward<ModelCustomizationJobSummariesT>(value)); return *this;}
    template<typename ModelCustomizationJobSummariesT = ModelCustomizationJobSummary>
    ListModelCustomizationJobsResult& AddModelCustomizationJobSummaries(ModelCustomizationJobSummariesT&& value) { m_modelCustomizationJobSummariesHasBeenSet = true; m_modelCustomizationJobSummaries.emplace_back(std::forward<ModelCustomizationJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelCustomizationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ModelCustomizationJobSummary> m_modelCustomizationJobSummaries;
    bool m_modelCustomizationJobSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
