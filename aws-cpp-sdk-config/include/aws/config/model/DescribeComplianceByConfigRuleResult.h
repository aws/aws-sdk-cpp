﻿/*
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceByConfigRule.h>

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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByConfigRuleResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API DescribeComplianceByConfigRuleResult
  {
  public:
    DescribeComplianceByConfigRuleResult();
    DescribeComplianceByConfigRuleResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeComplianceByConfigRuleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Indicates whether each of the specified AWS Config rules is compliant.</p>
     */
    inline const Aws::Vector<ComplianceByConfigRule>& GetComplianceByConfigRules() const{ return m_complianceByConfigRules; }

    /**
     * <p>Indicates whether each of the specified AWS Config rules is compliant.</p>
     */
    inline void SetComplianceByConfigRules(const Aws::Vector<ComplianceByConfigRule>& value) { m_complianceByConfigRules = value; }

    /**
     * <p>Indicates whether each of the specified AWS Config rules is compliant.</p>
     */
    inline void SetComplianceByConfigRules(Aws::Vector<ComplianceByConfigRule>&& value) { m_complianceByConfigRules = value; }

    /**
     * <p>Indicates whether each of the specified AWS Config rules is compliant.</p>
     */
    inline DescribeComplianceByConfigRuleResult& WithComplianceByConfigRules(const Aws::Vector<ComplianceByConfigRule>& value) { SetComplianceByConfigRules(value); return *this;}

    /**
     * <p>Indicates whether each of the specified AWS Config rules is compliant.</p>
     */
    inline DescribeComplianceByConfigRuleResult& WithComplianceByConfigRules(Aws::Vector<ComplianceByConfigRule>&& value) { SetComplianceByConfigRules(value); return *this;}

    /**
     * <p>Indicates whether each of the specified AWS Config rules is compliant.</p>
     */
    inline DescribeComplianceByConfigRuleResult& AddComplianceByConfigRules(const ComplianceByConfigRule& value) { m_complianceByConfigRules.push_back(value); return *this; }

    /**
     * <p>Indicates whether each of the specified AWS Config rules is compliant.</p>
     */
    inline DescribeComplianceByConfigRuleResult& AddComplianceByConfigRules(ComplianceByConfigRule&& value) { m_complianceByConfigRules.push_back(value); return *this; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeComplianceByConfigRuleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeComplianceByConfigRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeComplianceByConfigRuleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ComplianceByConfigRule> m_complianceByConfigRules;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
