/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RelationalDatabaseSnapshot.h>
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
  class GetRelationalDatabaseSnapshotsResult
  {
  public:
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotsResult();
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetRelationalDatabaseSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object describing the result of your get relational database snapshots
     * request.</p>
     */
    inline const Aws::Vector<RelationalDatabaseSnapshot>& GetRelationalDatabaseSnapshots() const{ return m_relationalDatabaseSnapshots; }

    /**
     * <p>An object describing the result of your get relational database snapshots
     * request.</p>
     */
    inline void SetRelationalDatabaseSnapshots(const Aws::Vector<RelationalDatabaseSnapshot>& value) { m_relationalDatabaseSnapshots = value; }

    /**
     * <p>An object describing the result of your get relational database snapshots
     * request.</p>
     */
    inline void SetRelationalDatabaseSnapshots(Aws::Vector<RelationalDatabaseSnapshot>&& value) { m_relationalDatabaseSnapshots = std::move(value); }

    /**
     * <p>An object describing the result of your get relational database snapshots
     * request.</p>
     */
    inline GetRelationalDatabaseSnapshotsResult& WithRelationalDatabaseSnapshots(const Aws::Vector<RelationalDatabaseSnapshot>& value) { SetRelationalDatabaseSnapshots(value); return *this;}

    /**
     * <p>An object describing the result of your get relational database snapshots
     * request.</p>
     */
    inline GetRelationalDatabaseSnapshotsResult& WithRelationalDatabaseSnapshots(Aws::Vector<RelationalDatabaseSnapshot>&& value) { SetRelationalDatabaseSnapshots(std::move(value)); return *this;}

    /**
     * <p>An object describing the result of your get relational database snapshots
     * request.</p>
     */
    inline GetRelationalDatabaseSnapshotsResult& AddRelationalDatabaseSnapshots(const RelationalDatabaseSnapshot& value) { m_relationalDatabaseSnapshots.push_back(value); return *this; }

    /**
     * <p>An object describing the result of your get relational database snapshots
     * request.</p>
     */
    inline GetRelationalDatabaseSnapshotsResult& AddRelationalDatabaseSnapshots(RelationalDatabaseSnapshot&& value) { m_relationalDatabaseSnapshots.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseSnapshots</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseSnapshots</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseSnapshots</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseSnapshots</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseSnapshots</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline GetRelationalDatabaseSnapshotsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseSnapshots</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline GetRelationalDatabaseSnapshotsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetRelationalDatabaseSnapshots</code> request and specify the next page
     * token using the <code>pageToken</code> parameter.</p>
     */
    inline GetRelationalDatabaseSnapshotsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<RelationalDatabaseSnapshot> m_relationalDatabaseSnapshots;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
