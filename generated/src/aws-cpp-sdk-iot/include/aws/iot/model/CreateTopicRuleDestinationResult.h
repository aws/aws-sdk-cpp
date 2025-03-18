/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/TopicRuleDestination.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateTopicRuleDestinationResult
  {
  public:
    AWS_IOT_API CreateTopicRuleDestinationResult() = default;
    AWS_IOT_API CreateTopicRuleDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateTopicRuleDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The topic rule destination.</p>
     */
    inline const TopicRuleDestination& GetTopicRuleDestination() const { return m_topicRuleDestination; }
    template<typename TopicRuleDestinationT = TopicRuleDestination>
    void SetTopicRuleDestination(TopicRuleDestinationT&& value) { m_topicRuleDestinationHasBeenSet = true; m_topicRuleDestination = std::forward<TopicRuleDestinationT>(value); }
    template<typename TopicRuleDestinationT = TopicRuleDestination>
    CreateTopicRuleDestinationResult& WithTopicRuleDestination(TopicRuleDestinationT&& value) { SetTopicRuleDestination(std::forward<TopicRuleDestinationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTopicRuleDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TopicRuleDestination m_topicRuleDestination;
    bool m_topicRuleDestinationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
