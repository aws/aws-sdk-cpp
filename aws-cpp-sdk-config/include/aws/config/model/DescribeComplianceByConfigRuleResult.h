/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceByConfigRule.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByConfigRuleResponse">AWS
   * API Reference</a></p>
   */
  class DescribeComplianceByConfigRuleResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeComplianceByConfigRuleResult();
    AWS_CONFIGSERVICE_API DescribeComplianceByConfigRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeComplianceByConfigRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether each of the specified Config rules is compliant.</p>
     */
    inline const Aws::Vector<ComplianceByConfigRule>& GetComplianceByConfigRules() const{ return m_complianceByConfigRules; }

    /**
     * <p>Indicates whether each of the specified Config rules is compliant.</p>
     */
    inline void SetComplianceByConfigRules(const Aws::Vector<ComplianceByConfigRule>& value) { m_complianceByConfigRules = value; }

    /**
     * <p>Indicates whether each of the specified Config rules is compliant.</p>
     */
    inline void SetComplianceByConfigRules(Aws::Vector<ComplianceByConfigRule>&& value) { m_complianceByConfigRules = std::move(value); }

    /**
     * <p>Indicates whether each of the specified Config rules is compliant.</p>
     */
    inline DescribeComplianceByConfigRuleResult& WithComplianceByConfigRules(const Aws::Vector<ComplianceByConfigRule>& value) { SetComplianceByConfigRules(value); return *this;}

    /**
     * <p>Indicates whether each of the specified Config rules is compliant.</p>
     */
    inline DescribeComplianceByConfigRuleResult& WithComplianceByConfigRules(Aws::Vector<ComplianceByConfigRule>&& value) { SetComplianceByConfigRules(std::move(value)); return *this;}

    /**
     * <p>Indicates whether each of the specified Config rules is compliant.</p>
     */
    inline DescribeComplianceByConfigRuleResult& AddComplianceByConfigRules(const ComplianceByConfigRule& value) { m_complianceByConfigRules.push_back(value); return *this; }

    /**
     * <p>Indicates whether each of the specified Config rules is compliant.</p>
     */
    inline DescribeComplianceByConfigRuleResult& AddComplianceByConfigRules(ComplianceByConfigRule&& value) { m_complianceByConfigRules.push_back(std::move(value)); return *this; }


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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

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
    inline DescribeComplianceByConfigRuleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

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
