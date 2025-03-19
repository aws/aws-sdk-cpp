/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TopicRulePayload.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the ReplaceTopicRule operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ReplaceTopicRuleRequest">AWS
   * API Reference</a></p>
   */
  class ReplaceTopicRuleRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ReplaceTopicRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReplaceTopicRule"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    ReplaceTopicRuleRequest& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule payload.</p>
     */
    inline const TopicRulePayload& GetTopicRulePayload() const { return m_topicRulePayload; }
    inline bool TopicRulePayloadHasBeenSet() const { return m_topicRulePayloadHasBeenSet; }
    template<typename TopicRulePayloadT = TopicRulePayload>
    void SetTopicRulePayload(TopicRulePayloadT&& value) { m_topicRulePayloadHasBeenSet = true; m_topicRulePayload = std::forward<TopicRulePayloadT>(value); }
    template<typename TopicRulePayloadT = TopicRulePayload>
    ReplaceTopicRuleRequest& WithTopicRulePayload(TopicRulePayloadT&& value) { SetTopicRulePayload(std::forward<TopicRulePayloadT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    TopicRulePayload m_topicRulePayload;
    bool m_topicRulePayloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
