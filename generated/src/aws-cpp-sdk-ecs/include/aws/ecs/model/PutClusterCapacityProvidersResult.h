/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Cluster.h>
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
namespace ECS
{
namespace Model
{
  class PutClusterCapacityProvidersResult
  {
  public:
    AWS_ECS_API PutClusterCapacityProvidersResult();
    AWS_ECS_API PutClusterCapacityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API PutClusterCapacityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the cluster.</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }

    /**
     * <p>Details about the cluster.</p>
     */
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    /**
     * <p>Details about the cluster.</p>
     */
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    /**
     * <p>Details about the cluster.</p>
     */
    inline PutClusterCapacityProvidersResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    /**
     * <p>Details about the cluster.</p>
     */
    inline PutClusterCapacityProvidersResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}

  private:

    Cluster m_cluster;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
