/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/ConfigurationEvent.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class ListConfigurationHistoryResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListConfigurationHistoryResult();
    AWS_APPLICATIONINSIGHTS_API ListConfigurationHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListConfigurationHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of configuration events and their corresponding details. </p>
     */
    inline const Aws::Vector<ConfigurationEvent>& GetEventList() const{ return m_eventList; }

    /**
     * <p> The list of configuration events and their corresponding details. </p>
     */
    inline void SetEventList(const Aws::Vector<ConfigurationEvent>& value) { m_eventList = value; }

    /**
     * <p> The list of configuration events and their corresponding details. </p>
     */
    inline void SetEventList(Aws::Vector<ConfigurationEvent>&& value) { m_eventList = std::move(value); }

    /**
     * <p> The list of configuration events and their corresponding details. </p>
     */
    inline ListConfigurationHistoryResult& WithEventList(const Aws::Vector<ConfigurationEvent>& value) { SetEventList(value); return *this;}

    /**
     * <p> The list of configuration events and their corresponding details. </p>
     */
    inline ListConfigurationHistoryResult& WithEventList(Aws::Vector<ConfigurationEvent>&& value) { SetEventList(std::move(value)); return *this;}

    /**
     * <p> The list of configuration events and their corresponding details. </p>
     */
    inline ListConfigurationHistoryResult& AddEventList(const ConfigurationEvent& value) { m_eventList.push_back(value); return *this; }

    /**
     * <p> The list of configuration events and their corresponding details. </p>
     */
    inline ListConfigurationHistoryResult& AddEventList(ConfigurationEvent&& value) { m_eventList.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>ListConfigurationHistory</code> request. When the results of a
     * <code>ListConfigurationHistory</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>ListConfigurationHistory</code> request. When the results of a
     * <code>ListConfigurationHistory</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>ListConfigurationHistory</code> request. When the results of a
     * <code>ListConfigurationHistory</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>ListConfigurationHistory</code> request. When the results of a
     * <code>ListConfigurationHistory</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>ListConfigurationHistory</code> request. When the results of a
     * <code>ListConfigurationHistory</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListConfigurationHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>ListConfigurationHistory</code> request. When the results of a
     * <code>ListConfigurationHistory</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListConfigurationHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>ListConfigurationHistory</code> request. When the results of a
     * <code>ListConfigurationHistory</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListConfigurationHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConfigurationEvent> m_eventList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
