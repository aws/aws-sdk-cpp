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
  class AWS_IOT_API GetTopicRuleResult
  {
  public:
    GetTopicRuleResult();
    GetTopicRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTopicRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
