/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Disk.h>
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
  class GetDisksResult
  {
  public:
    AWS_LIGHTSAIL_API GetDisksResult();
    AWS_LIGHTSAIL_API GetDisksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDisksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects containing information about all block storage disks.</p>
     */
    inline const Aws::Vector<Disk>& GetDisks() const{ return m_disks; }

    /**
     * <p>An array of objects containing information about all block storage disks.</p>
     */
    inline void SetDisks(const Aws::Vector<Disk>& value) { m_disks = value; }

    /**
     * <p>An array of objects containing information about all block storage disks.</p>
     */
    inline void SetDisks(Aws::Vector<Disk>&& value) { m_disks = std::move(value); }

    /**
     * <p>An array of objects containing information about all block storage disks.</p>
     */
    inline GetDisksResult& WithDisks(const Aws::Vector<Disk>& value) { SetDisks(value); return *this;}

    /**
     * <p>An array of objects containing information about all block storage disks.</p>
     */
    inline GetDisksResult& WithDisks(Aws::Vector<Disk>&& value) { SetDisks(std::move(value)); return *this;}

    /**
     * <p>An array of objects containing information about all block storage disks.</p>
     */
    inline GetDisksResult& AddDisks(const Disk& value) { m_disks.push_back(value); return *this; }

    /**
     * <p>An array of objects containing information about all block storage disks.</p>
     */
    inline GetDisksResult& AddDisks(Disk&& value) { m_disks.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDisks</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDisks</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDisks</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDisks</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDisks</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetDisksResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDisks</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetDisksResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another <code>GetDisks</code>
     * request and specify the next page token using the <code>pageToken</code>
     * parameter.</p>
     */
    inline GetDisksResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<Disk> m_disks;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
