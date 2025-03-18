/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/ProvisionedModelSummary.h>
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
  class ListProvisionedModelThroughputsResult
  {
  public:
    AWS_BEDROCK_API ListProvisionedModelThroughputsResult() = default;
    AWS_BEDROCK_API ListProvisionedModelThroughputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListProvisionedModelThroughputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more results than the number you specified in the
     * <code>maxResults</code> field, this value is returned. To see the next batch of
     * results, include this value in the <code>nextToken</code> field in another list
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProvisionedModelThroughputsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of summaries, one for each Provisioned Throughput in the response.</p>
     */
    inline const Aws::Vector<ProvisionedModelSummary>& GetProvisionedModelSummaries() const { return m_provisionedModelSummaries; }
    template<typename ProvisionedModelSummariesT = Aws::Vector<ProvisionedModelSummary>>
    void SetProvisionedModelSummaries(ProvisionedModelSummariesT&& value) { m_provisionedModelSummariesHasBeenSet = true; m_provisionedModelSummaries = std::forward<ProvisionedModelSummariesT>(value); }
    template<typename ProvisionedModelSummariesT = Aws::Vector<ProvisionedModelSummary>>
    ListProvisionedModelThroughputsResult& WithProvisionedModelSummaries(ProvisionedModelSummariesT&& value) { SetProvisionedModelSummaries(std::forward<ProvisionedModelSummariesT>(value)); return *this;}
    template<typename ProvisionedModelSummariesT = ProvisionedModelSummary>
    ListProvisionedModelThroughputsResult& AddProvisionedModelSummaries(ProvisionedModelSummariesT&& value) { m_provisionedModelSummariesHasBeenSet = true; m_provisionedModelSummaries.emplace_back(std::forward<ProvisionedModelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProvisionedModelThroughputsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ProvisionedModelSummary> m_provisionedModelSummaries;
    bool m_provisionedModelSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
