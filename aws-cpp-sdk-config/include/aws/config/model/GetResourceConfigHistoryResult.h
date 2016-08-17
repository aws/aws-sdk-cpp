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
#include <aws/config/model/ConfigurationItem.h>

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
   * <p>The output for the <a>GetResourceConfigHistory</a> action.</p>
   */
  class AWS_CONFIGSERVICE_API GetResourceConfigHistoryResult
  {
  public:
    GetResourceConfigHistoryResult();
    GetResourceConfigHistoryResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourceConfigHistoryResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline const Aws::Vector<ConfigurationItem>& GetConfigurationItems() const{ return m_configurationItems; }

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline void SetConfigurationItems(const Aws::Vector<ConfigurationItem>& value) { m_configurationItems = value; }

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline void SetConfigurationItems(Aws::Vector<ConfigurationItem>&& value) { m_configurationItems = value; }

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline GetResourceConfigHistoryResult& WithConfigurationItems(const Aws::Vector<ConfigurationItem>& value) { SetConfigurationItems(value); return *this;}

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline GetResourceConfigHistoryResult& WithConfigurationItems(Aws::Vector<ConfigurationItem>&& value) { SetConfigurationItems(value); return *this;}

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline GetResourceConfigHistoryResult& AddConfigurationItems(const ConfigurationItem& value) { m_configurationItems.push_back(value); return *this; }

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline GetResourceConfigHistoryResult& AddConfigurationItems(ConfigurationItem&& value) { m_configurationItems.push_back(value); return *this; }

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
    inline GetResourceConfigHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline GetResourceConfigHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline GetResourceConfigHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ConfigurationItem> m_configurationItems;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
