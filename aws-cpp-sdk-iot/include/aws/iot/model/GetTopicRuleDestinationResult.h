/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/TopicRuleDestination.h>
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
  class GetTopicRuleDestinationResult
  {
  public:
    AWS_IOT_API GetTopicRuleDestinationResult();
    AWS_IOT_API GetTopicRuleDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetTopicRuleDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The topic rule destination.</p>
     */
    inline const TopicRuleDestination& GetTopicRuleDestination() const{ return m_topicRuleDestination; }

    /**
     * <p>The topic rule destination.</p>
     */
    inline void SetTopicRuleDestination(const TopicRuleDestination& value) { m_topicRuleDestination = value; }

    /**
     * <p>The topic rule destination.</p>
     */
    inline void SetTopicRuleDestination(TopicRuleDestination&& value) { m_topicRuleDestination = std::move(value); }

    /**
     * <p>The topic rule destination.</p>
     */
    inline GetTopicRuleDestinationResult& WithTopicRuleDestination(const TopicRuleDestination& value) { SetTopicRuleDestination(value); return *this;}

    /**
     * <p>The topic rule destination.</p>
     */
    inline GetTopicRuleDestinationResult& WithTopicRuleDestination(TopicRuleDestination&& value) { SetTopicRuleDestination(std::move(value)); return *this;}

  private:

    TopicRuleDestination m_topicRuleDestination;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
