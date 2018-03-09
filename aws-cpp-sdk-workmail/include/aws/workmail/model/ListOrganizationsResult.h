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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/OrganizationSummary.h>
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
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API ListOrganizationsResult
  {
  public:
    ListOrganizationsResult();
    ListOrganizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListOrganizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The overview of owned organizations presented as a list of organization
     * summaries.</p>
     */
    inline const Aws::Vector<OrganizationSummary>& GetOrganizationSummaries() const{ return m_organizationSummaries; }

    /**
     * <p>The overview of owned organizations presented as a list of organization
     * summaries.</p>
     */
    inline void SetOrganizationSummaries(const Aws::Vector<OrganizationSummary>& value) { m_organizationSummaries = value; }

    /**
     * <p>The overview of owned organizations presented as a list of organization
     * summaries.</p>
     */
    inline void SetOrganizationSummaries(Aws::Vector<OrganizationSummary>&& value) { m_organizationSummaries = std::move(value); }

    /**
     * <p>The overview of owned organizations presented as a list of organization
     * summaries.</p>
     */
    inline ListOrganizationsResult& WithOrganizationSummaries(const Aws::Vector<OrganizationSummary>& value) { SetOrganizationSummaries(value); return *this;}

    /**
     * <p>The overview of owned organizations presented as a list of organization
     * summaries.</p>
     */
    inline ListOrganizationsResult& WithOrganizationSummaries(Aws::Vector<OrganizationSummary>&& value) { SetOrganizationSummaries(std::move(value)); return *this;}

    /**
     * <p>The overview of owned organizations presented as a list of organization
     * summaries.</p>
     */
    inline ListOrganizationsResult& AddOrganizationSummaries(const OrganizationSummary& value) { m_organizationSummaries.push_back(value); return *this; }

    /**
     * <p>The overview of owned organizations presented as a list of organization
     * summaries.</p>
     */
    inline ListOrganizationsResult& AddOrganizationSummaries(OrganizationSummary&& value) { m_organizationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListOrganizationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListOrganizationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is "null"
     * when there are no more results to return.</p>
     */
    inline ListOrganizationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OrganizationSummary> m_organizationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
