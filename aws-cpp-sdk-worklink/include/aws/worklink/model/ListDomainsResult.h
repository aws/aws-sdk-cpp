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
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/worklink/model/DomainSummary.h>
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
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API ListDomainsResult
  {
  public:
    ListDomainsResult();
    ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the domains.</p>
     */
    inline const Aws::Vector<DomainSummary>& GetDomains() const{ return m_domains; }

    /**
     * <p>Information about the domains.</p>
     */
    inline void SetDomains(const Aws::Vector<DomainSummary>& value) { m_domains = value; }

    /**
     * <p>Information about the domains.</p>
     */
    inline void SetDomains(Aws::Vector<DomainSummary>&& value) { m_domains = std::move(value); }

    /**
     * <p>Information about the domains.</p>
     */
    inline ListDomainsResult& WithDomains(const Aws::Vector<DomainSummary>& value) { SetDomains(value); return *this;}

    /**
     * <p>Information about the domains.</p>
     */
    inline ListDomainsResult& WithDomains(Aws::Vector<DomainSummary>&& value) { SetDomains(std::move(value)); return *this;}

    /**
     * <p>Information about the domains.</p>
     */
    inline ListDomainsResult& AddDomains(const DomainSummary& value) { m_domains.push_back(value); return *this; }

    /**
     * <p>Information about the domains.</p>
     */
    inline ListDomainsResult& AddDomains(DomainSummary&& value) { m_domains.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DomainSummary> m_domains;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
