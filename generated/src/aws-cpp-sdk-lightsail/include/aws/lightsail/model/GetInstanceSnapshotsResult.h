﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstanceSnapshot.h>
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
  class GetInstanceSnapshotsResult
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceSnapshotsResult();
    AWS_LIGHTSAIL_API GetInstanceSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetInstanceSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of key-value pairs containing information about the results of your
     * get instance snapshots request.</p>
     */
    inline const Aws::Vector<InstanceSnapshot>& GetInstanceSnapshots() const{ return m_instanceSnapshots; }
    inline void SetInstanceSnapshots(const Aws::Vector<InstanceSnapshot>& value) { m_instanceSnapshots = value; }
    inline void SetInstanceSnapshots(Aws::Vector<InstanceSnapshot>&& value) { m_instanceSnapshots = std::move(value); }
    inline GetInstanceSnapshotsResult& WithInstanceSnapshots(const Aws::Vector<InstanceSnapshot>& value) { SetInstanceSnapshots(value); return *this;}
    inline GetInstanceSnapshotsResult& WithInstanceSnapshots(Aws::Vector<InstanceSnapshot>&& value) { SetInstanceSnapshots(std::move(value)); return *this;}
    inline GetInstanceSnapshotsResult& AddInstanceSnapshots(const InstanceSnapshot& value) { m_instanceSnapshots.push_back(value); return *this; }
    inline GetInstanceSnapshotsResult& AddInstanceSnapshots(InstanceSnapshot&& value) { m_instanceSnapshots.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetInstanceSnapshots</code> request and specify the next page token using
     * the <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline GetInstanceSnapshotsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetInstanceSnapshotsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetInstanceSnapshotsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInstanceSnapshotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInstanceSnapshotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInstanceSnapshotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceSnapshot> m_instanceSnapshots;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
