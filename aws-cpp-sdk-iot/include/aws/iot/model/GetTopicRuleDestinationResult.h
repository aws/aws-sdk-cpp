/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API GetTopicRuleDestinationResult
  {
  public:
    GetTopicRuleDestinationResult();
    GetTopicRuleDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTopicRuleDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
