/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/Cluster.h>
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
namespace EKS
{
namespace Model
{
  class CreateClusterResult
  {
  public:
    AWS_EKS_API CreateClusterResult();
    AWS_EKS_API CreateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API CreateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your new cluster.</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }

    /**
     * <p>The full description of your new cluster.</p>
     */
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    /**
     * <p>The full description of your new cluster.</p>
     */
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    /**
     * <p>The full description of your new cluster.</p>
     */
    inline CreateClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    /**
     * <p>The full description of your new cluster.</p>
     */
    inline CreateClusterResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}

  private:

    Cluster m_cluster;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
