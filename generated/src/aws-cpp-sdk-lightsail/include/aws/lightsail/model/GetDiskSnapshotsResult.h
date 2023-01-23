/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/DiskSnapshot.h>
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
  class GetDiskSnapshotsResult
  {
  public:
    AWS_LIGHTSAIL_API GetDiskSnapshotsResult();
    AWS_LIGHTSAIL_API GetDiskSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDiskSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects containing information about all block storage disk
     * snapshots.</p>
     */
    inline const Aws::Vector<DiskSnapshot>& GetDiskSnapshots() const{ return m_diskSnapshots; }

    /**
     * <p>An array of objects containing information about all block storage disk
     * snapshots.</p>
     */
    inline void SetDiskSnapshots(const Aws::Vector<DiskSnapshot>& value) { m_diskSnapshots = value; }

    /**
     * <p>An array of objects containing information about all block storage disk
     * snapshots.</p>
     */
    inline void SetDiskSnapshots(Aws::Vector<DiskSnapshot>&& value) { m_diskSnapshots = std::move(value); }

    /**
     * <p>An array of objects containing information about all block storage disk
     * snapshots.</p>
     */
    inline GetDiskSnapshotsResult& WithDiskSnapshots(const Aws::Vector<DiskSnapshot>& value) { SetDiskSnapshots(value); return *this;}

    /**
     * <p>An array of objects containing information about all block storage disk
     * snapshots.</p>
     */
    inline GetDiskSnapshotsResult& WithDiskSnapshots(Aws::Vector<DiskSnapshot>&& value) { SetDiskSnapshots(std::move(value)); return *this;}

    /**
     * <p>An array of objects containing information about all block storage disk
     * snapshots.</p>
     */
    inline GetDiskSnapshotsResult& AddDiskSnapshots(const DiskSnapshot& value) { m_diskSnapshots.push_back(value); return *this; }

    /**
     * <p>An array of objects containing information about all block storage disk
     * snapshots.</p>
     */
    inline GetDiskSnapshotsResult& AddDiskSnapshots(DiskSnapshot&& value) { m_diskSnapshots.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDiskSnapshots</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDiskSnapshots</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDiskSnapshots</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDiskSnapshots</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDiskSnapshots</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline GetDiskSnapshotsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDiskSnapshots</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline GetDiskSnapshotsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDiskSnapshots</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline GetDiskSnapshotsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<DiskSnapshot> m_diskSnapshots;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
