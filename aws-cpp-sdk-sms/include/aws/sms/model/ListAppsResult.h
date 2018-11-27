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
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/AppSummary.h>
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
namespace SMS
{
namespace Model
{
  class AWS_SMS_API ListAppsResult
  {
  public:
    ListAppsResult();
    ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of application summaries.</p>
     */
    inline const Aws::Vector<AppSummary>& GetApps() const{ return m_apps; }

    /**
     * <p>A list of application summaries.</p>
     */
    inline void SetApps(const Aws::Vector<AppSummary>& value) { m_apps = value; }

    /**
     * <p>A list of application summaries.</p>
     */
    inline void SetApps(Aws::Vector<AppSummary>&& value) { m_apps = std::move(value); }

    /**
     * <p>A list of application summaries.</p>
     */
    inline ListAppsResult& WithApps(const Aws::Vector<AppSummary>& value) { SetApps(value); return *this;}

    /**
     * <p>A list of application summaries.</p>
     */
    inline ListAppsResult& WithApps(Aws::Vector<AppSummary>&& value) { SetApps(std::move(value)); return *this;}

    /**
     * <p>A list of application summaries.</p>
     */
    inline ListAppsResult& AddApps(const AppSummary& value) { m_apps.push_back(value); return *this; }

    /**
     * <p>A list of application summaries.</p>
     */
    inline ListAppsResult& AddApps(AppSummary&& value) { m_apps.push_back(std::move(value)); return *this; }


    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to retrieve the next set of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AppSummary> m_apps;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
