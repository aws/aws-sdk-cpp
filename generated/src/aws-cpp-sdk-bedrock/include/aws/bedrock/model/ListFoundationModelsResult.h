/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/FoundationModelSummary.h>
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
  class ListFoundationModelsResult
  {
  public:
    AWS_BEDROCK_API ListFoundationModelsResult() = default;
    AWS_BEDROCK_API ListFoundationModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListFoundationModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Amazon Bedrock foundation models.</p>
     */
    inline const Aws::Vector<FoundationModelSummary>& GetModelSummaries() const { return m_modelSummaries; }
    template<typename ModelSummariesT = Aws::Vector<FoundationModelSummary>>
    void SetModelSummaries(ModelSummariesT&& value) { m_modelSummariesHasBeenSet = true; m_modelSummaries = std::forward<ModelSummariesT>(value); }
    template<typename ModelSummariesT = Aws::Vector<FoundationModelSummary>>
    ListFoundationModelsResult& WithModelSummaries(ModelSummariesT&& value) { SetModelSummaries(std::forward<ModelSummariesT>(value)); return *this;}
    template<typename ModelSummariesT = FoundationModelSummary>
    ListFoundationModelsResult& AddModelSummaries(ModelSummariesT&& value) { m_modelSummariesHasBeenSet = true; m_modelSummaries.emplace_back(std::forward<ModelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFoundationModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FoundationModelSummary> m_modelSummaries;
    bool m_modelSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
