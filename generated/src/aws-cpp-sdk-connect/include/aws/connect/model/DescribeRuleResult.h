﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Rule.h>
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
  class DescribeRuleResult
  {
  public:
    AWS_CONNECT_API DescribeRuleResult();
    AWS_CONNECT_API DescribeRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the rule.</p>
     */
    inline const Rule& GetRule() const{ return m_rule; }
    inline void SetRule(const Rule& value) { m_rule = value; }
    inline void SetRule(Rule&& value) { m_rule = std::move(value); }
    inline DescribeRuleResult& WithRule(const Rule& value) { SetRule(value); return *this;}
    inline DescribeRuleResult& WithRule(Rule&& value) { SetRule(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Rule m_rule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
