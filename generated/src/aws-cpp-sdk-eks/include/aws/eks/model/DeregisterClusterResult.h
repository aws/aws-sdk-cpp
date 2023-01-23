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
  class DeregisterClusterResult
  {
  public:
    AWS_EKS_API DeregisterClusterResult();
    AWS_EKS_API DeregisterClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API DeregisterClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Cluster& GetCluster() const{ return m_cluster; }

    
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    
    inline DeregisterClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    
    inline DeregisterClusterResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}

  private:

    Cluster m_cluster;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
