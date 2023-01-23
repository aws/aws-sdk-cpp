/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateRuleResult
  {
  public:
    AWS_CONNECT_API CreateRuleResult();
    AWS_CONNECT_API CreateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateRuleResult& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline CreateRuleResult& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline CreateRuleResult& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}


    /**
     * <p>A unique identifier for the rule.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>A unique identifier for the rule.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleId = value; }

    /**
     * <p>A unique identifier for the rule.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleId = std::move(value); }

    /**
     * <p>A unique identifier for the rule.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleId.assign(value); }

    /**
     * <p>A unique identifier for the rule.</p>
     */
    inline CreateRuleResult& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>A unique identifier for the rule.</p>
     */
    inline CreateRuleResult& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the rule.</p>
     */
    inline CreateRuleResult& WithRuleId(const char* value) { SetRuleId(value); return *this;}

  private:

    Aws::String m_ruleArn;

    Aws::String m_ruleId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
