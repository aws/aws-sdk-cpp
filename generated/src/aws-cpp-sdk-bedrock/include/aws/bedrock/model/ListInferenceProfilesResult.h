/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/InferenceProfileSummary.h>
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
  class ListInferenceProfilesResult
  {
  public:
    AWS_BEDROCK_API ListInferenceProfilesResult() = default;
    AWS_BEDROCK_API ListInferenceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListInferenceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of information about each inference profile that you can use.</p>
     */
    inline const Aws::Vector<InferenceProfileSummary>& GetInferenceProfileSummaries() const { return m_inferenceProfileSummaries; }
    template<typename InferenceProfileSummariesT = Aws::Vector<InferenceProfileSummary>>
    void SetInferenceProfileSummaries(InferenceProfileSummariesT&& value) { m_inferenceProfileSummariesHasBeenSet = true; m_inferenceProfileSummaries = std::forward<InferenceProfileSummariesT>(value); }
    template<typename InferenceProfileSummariesT = Aws::Vector<InferenceProfileSummary>>
    ListInferenceProfilesResult& WithInferenceProfileSummaries(InferenceProfileSummariesT&& value) { SetInferenceProfileSummaries(std::forward<InferenceProfileSummariesT>(value)); return *this;}
    template<typename InferenceProfileSummariesT = InferenceProfileSummary>
    ListInferenceProfilesResult& AddInferenceProfileSummaries(InferenceProfileSummariesT&& value) { m_inferenceProfileSummariesHasBeenSet = true; m_inferenceProfileSummaries.emplace_back(std::forward<InferenceProfileSummariesT>(value)); return *this; }
    ///@}

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
    ListInferenceProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInferenceProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InferenceProfileSummary> m_inferenceProfileSummaries;
    bool m_inferenceProfileSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
