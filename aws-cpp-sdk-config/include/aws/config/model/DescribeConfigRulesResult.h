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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigRule.h>

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
  class AWS_CONFIGSERVICE_API DescribeConfigRulesResult
  {
  public:
    DescribeConfigRulesResult();
    DescribeConfigRulesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConfigRulesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The details about your AWS Config rules.</p>
     */
    inline const Aws::Vector<ConfigRule>& GetConfigRules() const{ return m_configRules; }

    /**
     * <p>The details about your AWS Config rules.</p>
     */
    inline void SetConfigRules(const Aws::Vector<ConfigRule>& value) { m_configRules = value; }

    /**
     * <p>The details about your AWS Config rules.</p>
     */
    inline void SetConfigRules(Aws::Vector<ConfigRule>&& value) { m_configRules = value; }

    /**
     * <p>The details about your AWS Config rules.</p>
     */
    inline DescribeConfigRulesResult& WithConfigRules(const Aws::Vector<ConfigRule>& value) { SetConfigRules(value); return *this;}

    /**
     * <p>The details about your AWS Config rules.</p>
     */
    inline DescribeConfigRulesResult& WithConfigRules(Aws::Vector<ConfigRule>&& value) { SetConfigRules(value); return *this;}

    /**
     * <p>The details about your AWS Config rules.</p>
     */
    inline DescribeConfigRulesResult& AddConfigRules(const ConfigRule& value) { m_configRules.push_back(value); return *this; }

    /**
     * <p>The details about your AWS Config rules.</p>
     */
    inline DescribeConfigRulesResult& AddConfigRules(ConfigRule&& value) { m_configRules.push_back(value); return *this; }

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
    inline DescribeConfigRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeConfigRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeConfigRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ConfigRule> m_configRules;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
