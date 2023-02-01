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
    AWS_IOT_API ListTopicRuleDestinationsResult();
    AWS_IOT_API ListTopicRuleDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListTopicRuleDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a topic rule destination.</p>
     */
    inline const Aws::Vector<TopicRuleDestinationSummary>& GetDestinationSummaries() const{ return m_destinationSummaries; }

    /**
     * <p>Information about a topic rule destination.</p>
     */
    inline void SetDestinationSummaries(const Aws::Vector<TopicRuleDestinationSummary>& value) { m_destinationSummaries = value; }

    /**
     * <p>Information about a topic rule destination.</p>
     */
    inline void SetDestinationSummaries(Aws::Vector<TopicRuleDestinationSummary>&& value) { m_destinationSummaries = std::move(value); }

    /**
     * <p>Information about a topic rule destination.</p>
     */
    inline ListTopicRuleDestinationsResult& WithDestinationSummaries(const Aws::Vector<TopicRuleDestinationSummary>& value) { SetDestinationSummaries(value); return *this;}

    /**
     * <p>Information about a topic rule destination.</p>
     */
    inline ListTopicRuleDestinationsResult& WithDestinationSummaries(Aws::Vector<TopicRuleDestinationSummary>&& value) { SetDestinationSummaries(std::move(value)); return *this;}

    /**
     * <p>Information about a topic rule destination.</p>
     */
    inline ListTopicRuleDestinationsResult& AddDestinationSummaries(const TopicRuleDestinationSummary& value) { m_destinationSummaries.push_back(value); return *this; }

    /**
     * <p>Information about a topic rule destination.</p>
     */
    inline ListTopicRuleDestinationsResult& AddDestinationSummaries(TopicRuleDestinationSummary&& value) { m_destinationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListTopicRuleDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListTopicRuleDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListTopicRuleDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TopicRuleDestinationSummary> m_destinationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
