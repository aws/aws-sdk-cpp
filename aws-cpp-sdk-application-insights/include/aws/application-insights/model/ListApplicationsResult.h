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
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/ApplicationInfo.h>
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
  class AWS_APPLICATIONINSIGHTS_API ListApplicationsResult
  {
  public:
    ListApplicationsResult();
    ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of applications.</p>
     */
    inline const Aws::Vector<ApplicationInfo>& GetApplicationInfoList() const{ return m_applicationInfoList; }

    /**
     * <p>The list of applications.</p>
     */
    inline void SetApplicationInfoList(const Aws::Vector<ApplicationInfo>& value) { m_applicationInfoList = value; }

    /**
     * <p>The list of applications.</p>
     */
    inline void SetApplicationInfoList(Aws::Vector<ApplicationInfo>&& value) { m_applicationInfoList = std::move(value); }

    /**
     * <p>The list of applications.</p>
     */
    inline ListApplicationsResult& WithApplicationInfoList(const Aws::Vector<ApplicationInfo>& value) { SetApplicationInfoList(value); return *this;}

    /**
     * <p>The list of applications.</p>
     */
    inline ListApplicationsResult& WithApplicationInfoList(Aws::Vector<ApplicationInfo>&& value) { SetApplicationInfoList(std::move(value)); return *this;}

    /**
     * <p>The list of applications.</p>
     */
    inline ListApplicationsResult& AddApplicationInfoList(const ApplicationInfo& value) { m_applicationInfoList.push_back(value); return *this; }

    /**
     * <p>The list of applications.</p>
     */
    inline ListApplicationsResult& AddApplicationInfoList(ApplicationInfo&& value) { m_applicationInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationInfo> m_applicationInfoList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
