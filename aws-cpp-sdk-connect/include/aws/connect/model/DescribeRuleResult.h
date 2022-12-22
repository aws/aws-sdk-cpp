/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Rule.h>
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
  class DescribeRuleResult
  {
  public:
    AWS_CONNECT_API DescribeRuleResult();
    AWS_CONNECT_API DescribeRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the rule.</p>
     */
    inline const Rule& GetRule() const{ return m_rule; }

    /**
     * <p>Information about the rule.</p>
     */
    inline void SetRule(const Rule& value) { m_rule = value; }

    /**
     * <p>Information about the rule.</p>
     */
    inline void SetRule(Rule&& value) { m_rule = std::move(value); }

    /**
     * <p>Information about the rule.</p>
     */
    inline DescribeRuleResult& WithRule(const Rule& value) { SetRule(value); return *this;}

    /**
     * <p>Information about the rule.</p>
     */
    inline DescribeRuleResult& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}

  private:

    Rule m_rule;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
