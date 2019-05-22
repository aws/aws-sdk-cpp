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
#include <aws/worklink/model/WebsiteAuthorizationProviderSummary.h>
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
  class AWS_WORKLINK_API ListWebsiteAuthorizationProvidersResult
  {
  public:
    ListWebsiteAuthorizationProvidersResult();
    ListWebsiteAuthorizationProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListWebsiteAuthorizationProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The website authorization providers.</p>
     */
    inline const Aws::Vector<WebsiteAuthorizationProviderSummary>& GetWebsiteAuthorizationProviders() const{ return m_websiteAuthorizationProviders; }

    /**
     * <p>The website authorization providers.</p>
     */
    inline void SetWebsiteAuthorizationProviders(const Aws::Vector<WebsiteAuthorizationProviderSummary>& value) { m_websiteAuthorizationProviders = value; }

    /**
     * <p>The website authorization providers.</p>
     */
    inline void SetWebsiteAuthorizationProviders(Aws::Vector<WebsiteAuthorizationProviderSummary>&& value) { m_websiteAuthorizationProviders = std::move(value); }

    /**
     * <p>The website authorization providers.</p>
     */
    inline ListWebsiteAuthorizationProvidersResult& WithWebsiteAuthorizationProviders(const Aws::Vector<WebsiteAuthorizationProviderSummary>& value) { SetWebsiteAuthorizationProviders(value); return *this;}

    /**
     * <p>The website authorization providers.</p>
     */
    inline ListWebsiteAuthorizationProvidersResult& WithWebsiteAuthorizationProviders(Aws::Vector<WebsiteAuthorizationProviderSummary>&& value) { SetWebsiteAuthorizationProviders(std::move(value)); return *this;}

    /**
     * <p>The website authorization providers.</p>
     */
    inline ListWebsiteAuthorizationProvidersResult& AddWebsiteAuthorizationProviders(const WebsiteAuthorizationProviderSummary& value) { m_websiteAuthorizationProviders.push_back(value); return *this; }

    /**
     * <p>The website authorization providers.</p>
     */
    inline ListWebsiteAuthorizationProvidersResult& AddWebsiteAuthorizationProviders(WebsiteAuthorizationProviderSummary&& value) { m_websiteAuthorizationProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListWebsiteAuthorizationProvidersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListWebsiteAuthorizationProvidersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListWebsiteAuthorizationProvidersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WebsiteAuthorizationProviderSummary> m_websiteAuthorizationProviders;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
