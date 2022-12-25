/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/model/Cluster.h>
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
  class IncreaseReplicationFactorResult
  {
  public:
    AWS_DAX_API IncreaseReplicationFactorResult();
    AWS_DAX_API IncreaseReplicationFactorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API IncreaseReplicationFactorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the DAX cluster. with its new replication factor.</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }

    /**
     * <p>A description of the DAX cluster. with its new replication factor.</p>
     */
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    /**
     * <p>A description of the DAX cluster. with its new replication factor.</p>
     */
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    /**
     * <p>A description of the DAX cluster. with its new replication factor.</p>
     */
    inline IncreaseReplicationFactorResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    /**
     * <p>A description of the DAX cluster. with its new replication factor.</p>
     */
    inline IncreaseReplicationFactorResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}

  private:

    Cluster m_cluster;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
