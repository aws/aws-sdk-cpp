/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigRuleEvaluationStatus.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRuleEvaluationStatusResponse">AWS
   * API Reference</a></p>
   */
  class DescribeConfigRuleEvaluationStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult();
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Status information about your Config managed rules.</p>
     */
    inline const Aws::Vector<ConfigRuleEvaluationStatus>& GetConfigRulesEvaluationStatus() const{ return m_configRulesEvaluationStatus; }

    /**
     * <p>Status information about your Config managed rules.</p>
     */
    inline void SetConfigRulesEvaluationStatus(const Aws::Vector<ConfigRuleEvaluationStatus>& value) { m_configRulesEvaluationStatus = value; }

    /**
     * <p>Status information about your Config managed rules.</p>
     */
    inline void SetConfigRulesEvaluationStatus(Aws::Vector<ConfigRuleEvaluationStatus>&& value) { m_configRulesEvaluationStatus = std::move(value); }

    /**
     * <p>Status information about your Config managed rules.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& WithConfigRulesEvaluationStatus(const Aws::Vector<ConfigRuleEvaluationStatus>& value) { SetConfigRulesEvaluationStatus(value); return *this;}

    /**
     * <p>Status information about your Config managed rules.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& WithConfigRulesEvaluationStatus(Aws::Vector<ConfigRuleEvaluationStatus>&& value) { SetConfigRulesEvaluationStatus(std::move(value)); return *this;}

    /**
     * <p>Status information about your Config managed rules.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& AddConfigRulesEvaluationStatus(const ConfigRuleEvaluationStatus& value) { m_configRulesEvaluationStatus.push_back(value); return *this; }

    /**
     * <p>Status information about your Config managed rules.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& AddConfigRulesEvaluationStatus(ConfigRuleEvaluationStatus&& value) { m_configRulesEvaluationStatus.push_back(std::move(value)); return *this; }


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
    inline DescribeConfigRuleEvaluationStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConfigRuleEvaluationStatus> m_configRulesEvaluationStatus;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
