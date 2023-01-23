/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConfigurationItem.h>
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
   * <p>The output for the <a>GetResourceConfigHistory</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetResourceConfigHistoryResponse">AWS
   * API Reference</a></p>
   */
  class GetResourceConfigHistoryResult
  {
  public:
    AWS_CONFIGSERVICE_API GetResourceConfigHistoryResult();
    AWS_CONFIGSERVICE_API GetResourceConfigHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetResourceConfigHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetConfigurationItems(Aws::Vector<ConfigurationItem>&& value) { m_configurationItems = std::move(value); }

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline GetResourceConfigHistoryResult& WithConfigurationItems(const Aws::Vector<ConfigurationItem>& value) { SetConfigurationItems(value); return *this;}

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline GetResourceConfigHistoryResult& WithConfigurationItems(Aws::Vector<ConfigurationItem>&& value) { SetConfigurationItems(std::move(value)); return *this;}

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline GetResourceConfigHistoryResult& AddConfigurationItems(const ConfigurationItem& value) { m_configurationItems.push_back(value); return *this; }

    /**
     * <p>A list that contains the configuration history of one or more resources.</p>
     */
    inline GetResourceConfigHistoryResult& AddConfigurationItems(ConfigurationItem&& value) { m_configurationItems.push_back(std::move(value)); return *this; }


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
    inline GetResourceConfigHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline GetResourceConfigHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

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
