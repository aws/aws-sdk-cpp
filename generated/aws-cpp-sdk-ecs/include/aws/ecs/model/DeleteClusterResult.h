﻿/**
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
  class AWS_ECS_API DeleteClusterResult
  {
  public:
    DeleteClusterResult();
    DeleteClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of the deleted cluster.</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }

    /**
     * <p>The full description of the deleted cluster.</p>
     */
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    /**
     * <p>The full description of the deleted cluster.</p>
     */
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    /**
     * <p>The full description of the deleted cluster.</p>
     */
    inline DeleteClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    /**
     * <p>The full description of the deleted cluster.</p>
     */
    inline DeleteClusterResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}

  private:

    Cluster m_cluster;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
