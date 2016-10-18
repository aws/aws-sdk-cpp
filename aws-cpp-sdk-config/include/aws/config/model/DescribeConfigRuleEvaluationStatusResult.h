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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConfigRuleEvaluationStatus.h>

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
   * <p/>
   */
  class AWS_CONFIGSERVICE_API DescribeConfigRuleEvaluationStatusResult
  {
  public:
    DescribeConfigRuleEvaluationStatusResult();
    DescribeConfigRuleEvaluationStatusResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConfigRuleEvaluationStatusResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Status information about your AWS managed Config rules.</p>
     */
    inline const Aws::Vector<ConfigRuleEvaluationStatus>& GetConfigRulesEvaluationStatus() const{ return m_configRulesEvaluationStatus; }

    /**
     * <p>Status information about your AWS managed Config rules.</p>
     */
    inline void SetConfigRulesEvaluationStatus(const Aws::Vector<ConfigRuleEvaluationStatus>& value) { m_configRulesEvaluationStatus = value; }

    /**
     * <p>Status information about your AWS managed Config rules.</p>
     */
    inline void SetConfigRulesEvaluationStatus(Aws::Vector<ConfigRuleEvaluationStatus>&& value) { m_configRulesEvaluationStatus = value; }

    /**
     * <p>Status information about your AWS managed Config rules.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& WithConfigRulesEvaluationStatus(const Aws::Vector<ConfigRuleEvaluationStatus>& value) { SetConfigRulesEvaluationStatus(value); return *this;}

    /**
     * <p>Status information about your AWS managed Config rules.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& WithConfigRulesEvaluationStatus(Aws::Vector<ConfigRuleEvaluationStatus>&& value) { SetConfigRulesEvaluationStatus(value); return *this;}

    /**
     * <p>Status information about your AWS managed Config rules.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& AddConfigRulesEvaluationStatus(const ConfigRuleEvaluationStatus& value) { m_configRulesEvaluationStatus.push_back(value); return *this; }

    /**
     * <p>Status information about your AWS managed Config rules.</p>
     */
    inline DescribeConfigRuleEvaluationStatusResult& AddConfigRulesEvaluationStatus(ConfigRuleEvaluationStatus&& value) { m_configRulesEvaluationStatus.push_back(value); return *this; }

  private:
    Aws::Vector<ConfigRuleEvaluationStatus> m_configRulesEvaluationStatus;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
