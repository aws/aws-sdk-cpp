/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb-elastic/model/ClusterSnapshotInList.h>
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
namespace DocDBElastic
{
namespace Model
{
  class ListClusterSnapshotsResult
  {
  public:
    AWS_DOCDBELASTIC_API ListClusterSnapshotsResult();
    AWS_DOCDBELASTIC_API ListClusterSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API ListClusterSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline ListClusterSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline ListClusterSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline ListClusterSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of Elastic DocumentDB snapshots for a specified cluster.</p>
     */
    inline const Aws::Vector<ClusterSnapshotInList>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>A list of Elastic DocumentDB snapshots for a specified cluster.</p>
     */
    inline void SetSnapshots(const Aws::Vector<ClusterSnapshotInList>& value) { m_snapshots = value; }

    /**
     * <p>A list of Elastic DocumentDB snapshots for a specified cluster.</p>
     */
    inline void SetSnapshots(Aws::Vector<ClusterSnapshotInList>&& value) { m_snapshots = std::move(value); }

    /**
     * <p>A list of Elastic DocumentDB snapshots for a specified cluster.</p>
     */
    inline ListClusterSnapshotsResult& WithSnapshots(const Aws::Vector<ClusterSnapshotInList>& value) { SetSnapshots(value); return *this;}

    /**
     * <p>A list of Elastic DocumentDB snapshots for a specified cluster.</p>
     */
    inline ListClusterSnapshotsResult& WithSnapshots(Aws::Vector<ClusterSnapshotInList>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p>A list of Elastic DocumentDB snapshots for a specified cluster.</p>
     */
    inline ListClusterSnapshotsResult& AddSnapshots(const ClusterSnapshotInList& value) { m_snapshots.push_back(value); return *this; }

    /**
     * <p>A list of Elastic DocumentDB snapshots for a specified cluster.</p>
     */
    inline ListClusterSnapshotsResult& AddSnapshots(ClusterSnapshotInList&& value) { m_snapshots.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ClusterSnapshotInList> m_snapshots;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
