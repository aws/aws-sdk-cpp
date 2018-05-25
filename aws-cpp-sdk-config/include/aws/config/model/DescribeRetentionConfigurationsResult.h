/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/model/RetentionConfiguration.h>
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
  class AWS_CONFIGSERVICE_API DescribeRetentionConfigurationsResult
  {
  public:
    DescribeRetentionConfigurationsResult();
    DescribeRetentionConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRetentionConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline const Aws::Vector<RetentionConfiguration>& GetRetentionConfigurations() const{ return m_retentionConfigurations; }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline void SetRetentionConfigurations(const Aws::Vector<RetentionConfiguration>& value) { m_retentionConfigurations = value; }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline void SetRetentionConfigurations(Aws::Vector<RetentionConfiguration>&& value) { m_retentionConfigurations = std::move(value); }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline DescribeRetentionConfigurationsResult& WithRetentionConfigurations(const Aws::Vector<RetentionConfiguration>& value) { SetRetentionConfigurations(value); return *this;}

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline DescribeRetentionConfigurationsResult& WithRetentionConfigurations(Aws::Vector<RetentionConfiguration>&& value) { SetRetentionConfigurations(std::move(value)); return *this;}

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline DescribeRetentionConfigurationsResult& AddRetentionConfigurations(const RetentionConfiguration& value) { m_retentionConfigurations.push_back(value); return *this; }

    /**
     * <p>Returns a retention configuration object.</p>
     */
    inline DescribeRetentionConfigurationsResult& AddRetentionConfigurations(RetentionConfiguration&& value) { m_retentionConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeRetentionConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeRetentionConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline DescribeRetentionConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RetentionConfiguration> m_retentionConfigurations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
