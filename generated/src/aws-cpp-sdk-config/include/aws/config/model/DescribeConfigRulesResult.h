/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigRule.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRulesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeConfigRulesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigRulesResult();
    AWS_CONFIGSERVICE_API DescribeConfigRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConfigRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details about your Config rules.</p>
     */
    inline const Aws::Vector<ConfigRule>& GetConfigRules() const{ return m_configRules; }

    /**
     * <p>The details about your Config rules.</p>
     */
    inline void SetConfigRules(const Aws::Vector<ConfigRule>& value) { m_configRules = value; }

    /**
     * <p>The details about your Config rules.</p>
     */
    inline void SetConfigRules(Aws::Vector<ConfigRule>&& value) { m_configRules = std::move(value); }

    /**
     * <p>The details about your Config rules.</p>
     */
    inline DescribeConfigRulesResult& WithConfigRules(const Aws::Vector<ConfigRule>& value) { SetConfigRules(value); return *this;}

    /**
     * <p>The details about your Config rules.</p>
     */
    inline DescribeConfigRulesResult& WithConfigRules(Aws::Vector<ConfigRule>&& value) { SetConfigRules(std::move(value)); return *this;}

    /**
     * <p>The details about your Config rules.</p>
     */
    inline DescribeConfigRulesResult& AddConfigRules(const ConfigRule& value) { m_configRules.push_back(value); return *this; }

    /**
     * <p>The details about your Config rules.</p>
     */
    inline DescribeConfigRulesResult& AddConfigRules(ConfigRule&& value) { m_configRules.push_back(std::move(value)); return *this; }


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
    inline DescribeConfigRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeConfigRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

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
