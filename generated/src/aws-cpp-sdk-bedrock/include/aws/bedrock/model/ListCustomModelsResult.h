/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/CustomModelSummary.h>
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
  class ListCustomModelsResult
  {
  public:
    AWS_BEDROCK_API ListCustomModelsResult() = default;
    AWS_BEDROCK_API ListCustomModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListCustomModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListCustomModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model summaries.</p>
     */
    inline const Aws::Vector<CustomModelSummary>& GetModelSummaries() const { return m_modelSummaries; }
    template<typename ModelSummariesT = Aws::Vector<CustomModelSummary>>
    void SetModelSummaries(ModelSummariesT&& value) { m_modelSummariesHasBeenSet = true; m_modelSummaries = std::forward<ModelSummariesT>(value); }
    template<typename ModelSummariesT = Aws::Vector<CustomModelSummary>>
    ListCustomModelsResult& WithModelSummaries(ModelSummariesT&& value) { SetModelSummaries(std::forward<ModelSummariesT>(value)); return *this;}
    template<typename ModelSummariesT = CustomModelSummary>
    ListCustomModelsResult& AddModelSummaries(ModelSummariesT&& value) { m_modelSummariesHasBeenSet = true; m_modelSummaries.emplace_back(std::forward<ModelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CustomModelSummary> m_modelSummaries;
    bool m_modelSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
