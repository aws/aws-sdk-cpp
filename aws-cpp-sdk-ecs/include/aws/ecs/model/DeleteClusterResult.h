﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Cluster.h>

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
    DeleteClusterResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteClusterResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetCluster(Cluster&& value) { m_cluster = value; }

    /**
     * <p>The full description of the deleted cluster.</p>
     */
    inline DeleteClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    /**
     * <p>The full description of the deleted cluster.</p>
     */
    inline DeleteClusterResult& WithCluster(Cluster&& value) { SetCluster(value); return *this;}

  private:
    Cluster m_cluster;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
