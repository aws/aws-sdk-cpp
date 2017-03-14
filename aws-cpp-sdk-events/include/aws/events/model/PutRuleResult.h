/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace CloudWatchEvents
{
namespace Model
{
  class AWS_CLOUDWATCHEVENTS_API PutRuleResult
  {
  public:
    PutRuleResult();
    PutRuleResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutRuleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline void SetRuleArn(const Aws::String& value) { m_ruleArn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline void SetRuleArn(Aws::String&& value) { m_ruleArn = value; }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline void SetRuleArn(const char* value) { m_ruleArn.assign(value); }

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline PutRuleResult& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline PutRuleResult& WithRuleArn(Aws::String&& value) { SetRuleArn(value); return *this;}

    /**
     * <zonbook> <simpara>The Amazon Resource Name (ARN) of the rule.</simpara>
     * </zonbook> <xhtml> <p>The Amazon Resource Name (ARN) of the rule.</p> </xhtml>
     */
    inline PutRuleResult& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}

  private:
    Aws::String m_ruleArn;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
