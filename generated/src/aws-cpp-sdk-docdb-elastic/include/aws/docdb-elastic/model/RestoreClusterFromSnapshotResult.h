﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/model/Cluster.h>
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
  class RestoreClusterFromSnapshotResult
  {
  public:
    AWS_DOCDBELASTIC_API RestoreClusterFromSnapshotResult();
    AWS_DOCDBELASTIC_API RestoreClusterFromSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API RestoreClusterFromSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about a the restored Elastic DocumentDB cluster.</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }

    /**
     * <p>Returns information about a the restored Elastic DocumentDB cluster.</p>
     */
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    /**
     * <p>Returns information about a the restored Elastic DocumentDB cluster.</p>
     */
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    /**
     * <p>Returns information about a the restored Elastic DocumentDB cluster.</p>
     */
    inline RestoreClusterFromSnapshotResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    /**
     * <p>Returns information about a the restored Elastic DocumentDB cluster.</p>
     */
    inline RestoreClusterFromSnapshotResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RestoreClusterFromSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RestoreClusterFromSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RestoreClusterFromSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Cluster m_cluster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
