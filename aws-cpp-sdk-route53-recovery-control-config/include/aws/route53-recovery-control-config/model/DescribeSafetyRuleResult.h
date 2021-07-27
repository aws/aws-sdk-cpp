/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/AssertionRule.h>
#include <aws/route53-recovery-control-config/model/GatingRule.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class AWS_ROUTE53RECOVERYCONTROLCONFIG_API DescribeSafetyRuleResult
  {
  public:
    DescribeSafetyRuleResult();
    DescribeSafetyRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSafetyRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AssertionRule& GetAssertionRule() const{ return m_assertionRule; }

    
    inline void SetAssertionRule(const AssertionRule& value) { m_assertionRule = value; }

    
    inline void SetAssertionRule(AssertionRule&& value) { m_assertionRule = std::move(value); }

    
    inline DescribeSafetyRuleResult& WithAssertionRule(const AssertionRule& value) { SetAssertionRule(value); return *this;}

    
    inline DescribeSafetyRuleResult& WithAssertionRule(AssertionRule&& value) { SetAssertionRule(std::move(value)); return *this;}


    
    inline const GatingRule& GetGatingRule() const{ return m_gatingRule; }

    
    inline void SetGatingRule(const GatingRule& value) { m_gatingRule = value; }

    
    inline void SetGatingRule(GatingRule&& value) { m_gatingRule = std::move(value); }

    
    inline DescribeSafetyRuleResult& WithGatingRule(const GatingRule& value) { SetGatingRule(value); return *this;}

    
    inline DescribeSafetyRuleResult& WithGatingRule(GatingRule&& value) { SetGatingRule(std::move(value)); return *this;}

  private:

    AssertionRule m_assertionRule;

    GatingRule m_gatingRule;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
