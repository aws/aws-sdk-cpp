/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/model/ClusterSnapshot.h>
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
namespace DocDBElastic
{
namespace Model
{
  class GetClusterSnapshotResult
  {
  public:
    AWS_DOCDBELASTIC_API GetClusterSnapshotResult();
    AWS_DOCDBELASTIC_API GetClusterSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API GetClusterSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about a specific elastic cluster snapshot.</p>
     */
    inline const ClusterSnapshot& GetSnapshot() const{ return m_snapshot; }

    /**
     * <p>Returns information about a specific elastic cluster snapshot.</p>
     */
    inline void SetSnapshot(const ClusterSnapshot& value) { m_snapshot = value; }

    /**
     * <p>Returns information about a specific elastic cluster snapshot.</p>
     */
    inline void SetSnapshot(ClusterSnapshot&& value) { m_snapshot = std::move(value); }

    /**
     * <p>Returns information about a specific elastic cluster snapshot.</p>
     */
    inline GetClusterSnapshotResult& WithSnapshot(const ClusterSnapshot& value) { SetSnapshot(value); return *this;}

    /**
     * <p>Returns information about a specific elastic cluster snapshot.</p>
     */
    inline GetClusterSnapshotResult& WithSnapshot(ClusterSnapshot&& value) { SetSnapshot(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetClusterSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetClusterSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetClusterSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ClusterSnapshot m_snapshot;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
