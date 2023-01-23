/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/Snapshot.h>
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
namespace FSx
{
namespace Model
{
  class DescribeSnapshotsResult
  {
  public:
    AWS_FSX_API DescribeSnapshotsResult();
    AWS_FSX_API DescribeSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of snapshots.</p>
     */
    inline const Aws::Vector<Snapshot>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>An array of snapshots.</p>
     */
    inline void SetSnapshots(const Aws::Vector<Snapshot>& value) { m_snapshots = value; }

    /**
     * <p>An array of snapshots.</p>
     */
    inline void SetSnapshots(Aws::Vector<Snapshot>&& value) { m_snapshots = std::move(value); }

    /**
     * <p>An array of snapshots.</p>
     */
    inline DescribeSnapshotsResult& WithSnapshots(const Aws::Vector<Snapshot>& value) { SetSnapshots(value); return *this;}

    /**
     * <p>An array of snapshots.</p>
     */
    inline DescribeSnapshotsResult& WithSnapshots(Aws::Vector<Snapshot>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p>An array of snapshots.</p>
     */
    inline DescribeSnapshotsResult& AddSnapshots(const Snapshot& value) { m_snapshots.push_back(value); return *this; }

    /**
     * <p>An array of snapshots.</p>
     */
    inline DescribeSnapshotsResult& AddSnapshots(Snapshot&& value) { m_snapshots.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Snapshot> m_snapshots;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
