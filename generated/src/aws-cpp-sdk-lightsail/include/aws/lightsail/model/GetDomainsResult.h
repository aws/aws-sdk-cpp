/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Domain.h>
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
namespace Lightsail
{
namespace Model
{
  class GetDomainsResult
  {
  public:
    AWS_LIGHTSAIL_API GetDomainsResult();
    AWS_LIGHTSAIL_API GetDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of key-value pairs containing information about each of the domain
     * entries in the user's account.</p>
     */
    inline const Aws::Vector<Domain>& GetDomains() const{ return m_domains; }

    /**
     * <p>An array of key-value pairs containing information about each of the domain
     * entries in the user's account.</p>
     */
    inline void SetDomains(const Aws::Vector<Domain>& value) { m_domains = value; }

    /**
     * <p>An array of key-value pairs containing information about each of the domain
     * entries in the user's account.</p>
     */
    inline void SetDomains(Aws::Vector<Domain>&& value) { m_domains = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about each of the domain
     * entries in the user's account.</p>
     */
    inline GetDomainsResult& WithDomains(const Aws::Vector<Domain>& value) { SetDomains(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about each of the domain
     * entries in the user's account.</p>
     */
    inline GetDomainsResult& WithDomains(Aws::Vector<Domain>&& value) { SetDomains(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs containing information about each of the domain
     * entries in the user's account.</p>
     */
    inline GetDomainsResult& AddDomains(const Domain& value) { m_domains.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about each of the domain
     * entries in the user's account.</p>
     */
    inline GetDomainsResult& AddDomains(Domain&& value) { m_domains.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDomains</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDomains</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDomains</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDomains</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDomains</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetDomainsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDomains</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetDomainsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDomains</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetDomainsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<Domain> m_domains;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
