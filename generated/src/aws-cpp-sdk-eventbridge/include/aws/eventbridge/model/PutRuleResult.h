/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{
  class PutRuleResult
  {
  public:
    AWS_EVENTBRIDGE_API PutRuleResult();
    AWS_EVENTBRIDGE_API PutRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API PutRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetRuleArn(const Aws::String& value) { m_ruleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetRuleArn(Aws::String&& value) { m_ruleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetRuleArn(const char* value) { m_ruleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline PutRuleResult& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline PutRuleResult& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline PutRuleResult& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}

  private:

    Aws::String m_ruleArn;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
