/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/ApplicationState.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListApplicationStatesResult
  {
  public:
    AWS_MIGRATIONHUB_API ListApplicationStatesResult();
    AWS_MIGRATIONHUB_API ListApplicationStatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListApplicationStatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Applications that exist in Application Discovery Service.</p>
     */
    inline const Aws::Vector<ApplicationState>& GetApplicationStateList() const{ return m_applicationStateList; }

    /**
     * <p>A list of Applications that exist in Application Discovery Service.</p>
     */
    inline void SetApplicationStateList(const Aws::Vector<ApplicationState>& value) { m_applicationStateList = value; }

    /**
     * <p>A list of Applications that exist in Application Discovery Service.</p>
     */
    inline void SetApplicationStateList(Aws::Vector<ApplicationState>&& value) { m_applicationStateList = std::move(value); }

    /**
     * <p>A list of Applications that exist in Application Discovery Service.</p>
     */
    inline ListApplicationStatesResult& WithApplicationStateList(const Aws::Vector<ApplicationState>& value) { SetApplicationStateList(value); return *this;}

    /**
     * <p>A list of Applications that exist in Application Discovery Service.</p>
     */
    inline ListApplicationStatesResult& WithApplicationStateList(Aws::Vector<ApplicationState>&& value) { SetApplicationStateList(std::move(value)); return *this;}

    /**
     * <p>A list of Applications that exist in Application Discovery Service.</p>
     */
    inline ListApplicationStatesResult& AddApplicationStateList(const ApplicationState& value) { m_applicationStateList.push_back(value); return *this; }

    /**
     * <p>A list of Applications that exist in Application Discovery Service.</p>
     */
    inline ListApplicationStatesResult& AddApplicationStateList(ApplicationState&& value) { m_applicationStateList.push_back(std::move(value)); return *this; }


    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline ListApplicationStatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline ListApplicationStatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>NextToken</code>.</p>
     */
    inline ListApplicationStatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationState> m_applicationStateList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
