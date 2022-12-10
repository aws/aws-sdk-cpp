/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/MapRunListItem.h>
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
namespace SFN
{
namespace Model
{
  class ListMapRunsResult
  {
  public:
    AWS_SFN_API ListMapRunsResult();
    AWS_SFN_API ListMapRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API ListMapRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that lists information related to a Map Run, such as the Amazon
     * Resource Name (ARN) of the Map Run and the ARN of the state machine that started
     * the Map Run.</p>
     */
    inline const Aws::Vector<MapRunListItem>& GetMapRuns() const{ return m_mapRuns; }

    /**
     * <p>An array that lists information related to a Map Run, such as the Amazon
     * Resource Name (ARN) of the Map Run and the ARN of the state machine that started
     * the Map Run.</p>
     */
    inline void SetMapRuns(const Aws::Vector<MapRunListItem>& value) { m_mapRuns = value; }

    /**
     * <p>An array that lists information related to a Map Run, such as the Amazon
     * Resource Name (ARN) of the Map Run and the ARN of the state machine that started
     * the Map Run.</p>
     */
    inline void SetMapRuns(Aws::Vector<MapRunListItem>&& value) { m_mapRuns = std::move(value); }

    /**
     * <p>An array that lists information related to a Map Run, such as the Amazon
     * Resource Name (ARN) of the Map Run and the ARN of the state machine that started
     * the Map Run.</p>
     */
    inline ListMapRunsResult& WithMapRuns(const Aws::Vector<MapRunListItem>& value) { SetMapRuns(value); return *this;}

    /**
     * <p>An array that lists information related to a Map Run, such as the Amazon
     * Resource Name (ARN) of the Map Run and the ARN of the state machine that started
     * the Map Run.</p>
     */
    inline ListMapRunsResult& WithMapRuns(Aws::Vector<MapRunListItem>&& value) { SetMapRuns(std::move(value)); return *this;}

    /**
     * <p>An array that lists information related to a Map Run, such as the Amazon
     * Resource Name (ARN) of the Map Run and the ARN of the state machine that started
     * the Map Run.</p>
     */
    inline ListMapRunsResult& AddMapRuns(const MapRunListItem& value) { m_mapRuns.push_back(value); return *this; }

    /**
     * <p>An array that lists information related to a Map Run, such as the Amazon
     * Resource Name (ARN) of the Map Run and the ARN of the state machine that started
     * the Map Run.</p>
     */
    inline ListMapRunsResult& AddMapRuns(MapRunListItem&& value) { m_mapRuns.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline ListMapRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline ListMapRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline ListMapRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MapRunListItem> m_mapRuns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
