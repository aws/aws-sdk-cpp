/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Kafka
{
namespace Model
{

  /**
   */
  class ListReplicatorsRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API ListReplicatorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReplicators"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;

    AWS_KAFKA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return in the response. If there are more
     * results, the response includes a NextToken parameter.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReplicatorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response of ListReplicators is truncated, it returns a NextToken in
     * the response. This NextToken should be sent in the subsequent request to
     * ListReplicators.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReplicatorsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns replicators starting with given name.</p>
     */
    inline const Aws::String& GetReplicatorNameFilter() const { return m_replicatorNameFilter; }
    inline bool ReplicatorNameFilterHasBeenSet() const { return m_replicatorNameFilterHasBeenSet; }
    template<typename ReplicatorNameFilterT = Aws::String>
    void SetReplicatorNameFilter(ReplicatorNameFilterT&& value) { m_replicatorNameFilterHasBeenSet = true; m_replicatorNameFilter = std::forward<ReplicatorNameFilterT>(value); }
    template<typename ReplicatorNameFilterT = Aws::String>
    ListReplicatorsRequest& WithReplicatorNameFilter(ReplicatorNameFilterT&& value) { SetReplicatorNameFilter(std::forward<ReplicatorNameFilterT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_replicatorNameFilter;
    bool m_replicatorNameFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
