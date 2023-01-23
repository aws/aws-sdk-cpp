/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabaseBundle.h>
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
  class GetRelationalDatabaseBundlesResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseBundlesResult();
    AWS_LIGHTSAIL_API GetRelationalDatabaseBundlesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseBundlesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline const Aws::Vector<RelationalDatabaseBundle>& GetBundles() const{ return m_bundles; }

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline void SetBundles(const Aws::Vector<RelationalDatabaseBundle>& value) { m_bundles = value; }

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline void SetBundles(Aws::Vector<RelationalDatabaseBundle>&& value) { m_bundles = std::move(value); }

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithBundles(const Aws::Vector<RelationalDatabaseBundle>& value) { SetBundles(value); return *this;}

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithBundles(Aws::Vector<RelationalDatabaseBundle>&& value) { SetBundles(std::move(value)); return *this;}

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& AddBundles(const RelationalDatabaseBundle& value) { m_bundles.push_back(value); return *this; }

    /**
     * <p>An object describing the result of your get relational database bundles
     * request.</p>
     */
    inline GetRelationalDatabaseBundlesResult& AddBundles(RelationalDatabaseBundle&& value) { m_bundles.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseBundles</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseBundles</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseBundles</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseBundles</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseBundles</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseBundles</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseBundles</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline GetRelationalDatabaseBundlesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<RelationalDatabaseBundle> m_bundles;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
