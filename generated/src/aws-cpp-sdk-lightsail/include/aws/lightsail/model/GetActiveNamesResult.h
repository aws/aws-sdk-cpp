/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetActiveNamesResult
  {
  public:
    AWS_LIGHTSAIL_API GetActiveNamesResult();
    AWS_LIGHTSAIL_API GetActiveNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetActiveNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of active names returned by the get active names request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActiveNames() const{ return m_activeNames; }

    /**
     * <p>The list of active names returned by the get active names request.</p>
     */
    inline void SetActiveNames(const Aws::Vector<Aws::String>& value) { m_activeNames = value; }

    /**
     * <p>The list of active names returned by the get active names request.</p>
     */
    inline void SetActiveNames(Aws::Vector<Aws::String>&& value) { m_activeNames = std::move(value); }

    /**
     * <p>The list of active names returned by the get active names request.</p>
     */
    inline GetActiveNamesResult& WithActiveNames(const Aws::Vector<Aws::String>& value) { SetActiveNames(value); return *this;}

    /**
     * <p>The list of active names returned by the get active names request.</p>
     */
    inline GetActiveNamesResult& WithActiveNames(Aws::Vector<Aws::String>&& value) { SetActiveNames(std::move(value)); return *this;}

    /**
     * <p>The list of active names returned by the get active names request.</p>
     */
    inline GetActiveNamesResult& AddActiveNames(const Aws::String& value) { m_activeNames.push_back(value); return *this; }

    /**
     * <p>The list of active names returned by the get active names request.</p>
     */
    inline GetActiveNamesResult& AddActiveNames(Aws::String&& value) { m_activeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of active names returned by the get active names request.</p>
     */
    inline GetActiveNamesResult& AddActiveNames(const char* value) { m_activeNames.push_back(value); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetActiveNames</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetActiveNames</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetActiveNames</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetActiveNames</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetActiveNames</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetActiveNamesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetActiveNames</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetActiveNamesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetActiveNames</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetActiveNamesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_activeNames;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
