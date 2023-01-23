/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TopicRule.h>
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
  /**
   * <p>The output from the GetTopicRule operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetTopicRuleResponse">AWS
   * API Reference</a></p>
   */
  class GetTopicRuleResult
  {
  public:
    AWS_IOT_API GetTopicRuleResult();
    AWS_IOT_API GetTopicRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetTopicRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The rule ARN.</p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }

    /**
     * <p>The rule ARN.</p>
     */
    inline void SetRuleArn(const Aws::String& value) { m_ruleArn = value; }

    /**
     * <p>The rule ARN.</p>
     */
    inline void SetRuleArn(Aws::String&& value) { m_ruleArn = std::move(value); }

    /**
     * <p>The rule ARN.</p>
     */
    inline void SetRuleArn(const char* value) { m_ruleArn.assign(value); }

    /**
     * <p>The rule ARN.</p>
     */
    inline GetTopicRuleResult& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <p>The rule ARN.</p>
     */
    inline GetTopicRuleResult& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}

    /**
     * <p>The rule ARN.</p>
     */
    inline GetTopicRuleResult& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}


    /**
     * <p>The rule.</p>
     */
    inline const TopicRule& GetRule() const{ return m_rule; }

    /**
     * <p>The rule.</p>
     */
    inline void SetRule(const TopicRule& value) { m_rule = value; }

    /**
     * <p>The rule.</p>
     */
    inline void SetRule(TopicRule&& value) { m_rule = std::move(value); }

    /**
     * <p>The rule.</p>
     */
    inline GetTopicRuleResult& WithRule(const TopicRule& value) { SetRule(value); return *this;}

    /**
     * <p>The rule.</p>
     */
    inline GetTopicRuleResult& WithRule(TopicRule&& value) { SetRule(std::move(value)); return *this;}

  private:

    Aws::String m_ruleArn;

    TopicRule m_rule;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
