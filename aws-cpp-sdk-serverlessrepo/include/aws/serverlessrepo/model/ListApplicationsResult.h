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
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/serverlessrepo/model/ApplicationSummary.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ListApplicationsResult
  {
  public:
    ListApplicationsResult();
    ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of application summaries.</p>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplications() const{ return m_applications; }

    /**
     * <p>An array of application summaries.</p>
     */
    inline void SetApplications(const Aws::Vector<ApplicationSummary>& value) { m_applications = value; }

    /**
     * <p>An array of application summaries.</p>
     */
    inline void SetApplications(Aws::Vector<ApplicationSummary>&& value) { m_applications = std::move(value); }

    /**
     * <p>An array of application summaries.</p>
     */
    inline ListApplicationsResult& WithApplications(const Aws::Vector<ApplicationSummary>& value) { SetApplications(value); return *this;}

    /**
     * <p>An array of application summaries.</p>
     */
    inline ListApplicationsResult& WithApplications(Aws::Vector<ApplicationSummary>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>An array of application summaries.</p>
     */
    inline ListApplicationsResult& AddApplications(const ApplicationSummary& value) { m_applications.push_back(value); return *this; }

    /**
     * <p>An array of application summaries.</p>
     */
    inline ListApplicationsResult& AddApplications(ApplicationSummary&& value) { m_applications.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationSummary> m_applications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
