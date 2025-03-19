/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TopicRuleDestinationSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListTopicRuleDestinationsResult
  {
  public:
    AWS_IOT_API ListTopicRuleDestinationsResult() = default;
    AWS_IOT_API ListTopicRuleDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListTopicRuleDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a topic rule destination.</p>
     */
    inline const Aws::Vector<TopicRuleDestinationSummary>& GetDestinationSummaries() const { return m_destinationSummaries; }
    template<typename DestinationSummariesT = Aws::Vector<TopicRuleDestinationSummary>>
    void SetDestinationSummaries(DestinationSummariesT&& value) { m_destinationSummariesHasBeenSet = true; m_destinationSummaries = std::forward<DestinationSummariesT>(value); }
    template<typename DestinationSummariesT = Aws::Vector<TopicRuleDestinationSummary>>
    ListTopicRuleDestinationsResult& WithDestinationSummaries(DestinationSummariesT&& value) { SetDestinationSummaries(std::forward<DestinationSummariesT>(value)); return *this;}
    template<typename DestinationSummariesT = TopicRuleDestinationSummary>
    ListTopicRuleDestinationsResult& AddDestinationSummaries(DestinationSummariesT&& value) { m_destinationSummariesHasBeenSet = true; m_destinationSummaries.emplace_back(std::forward<DestinationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTopicRuleDestinationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTopicRuleDestinationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TopicRuleDestinationSummary> m_destinationSummaries;
    bool m_destinationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
