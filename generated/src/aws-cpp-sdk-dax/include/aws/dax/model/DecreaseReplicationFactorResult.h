/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/Cluster.h>
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
namespace DAX
{
namespace Model
{
  class DecreaseReplicationFactorResult
  {
  public:
    AWS_DAX_API DecreaseReplicationFactorResult();
    AWS_DAX_API DecreaseReplicationFactorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API DecreaseReplicationFactorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the DAX cluster, after you have decreased its replication
     * factor.</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }

    /**
     * <p>A description of the DAX cluster, after you have decreased its replication
     * factor.</p>
     */
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    /**
     * <p>A description of the DAX cluster, after you have decreased its replication
     * factor.</p>
     */
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    /**
     * <p>A description of the DAX cluster, after you have decreased its replication
     * factor.</p>
     */
    inline DecreaseReplicationFactorResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    /**
     * <p>A description of the DAX cluster, after you have decreased its replication
     * factor.</p>
     */
    inline DecreaseReplicationFactorResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DecreaseReplicationFactorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DecreaseReplicationFactorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DecreaseReplicationFactorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Cluster m_cluster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
