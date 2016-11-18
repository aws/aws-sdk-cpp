/*
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
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API DeleteServiceRequest : public ECSRequest
  {
  public:
    DeleteServiceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the cluster that hosts the service to delete. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The name of the cluster that hosts the service to delete. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The name of the cluster that hosts the service to delete. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The name of the cluster that hosts the service to delete. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The name of the cluster that hosts the service to delete. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline DeleteServiceRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The name of the cluster that hosts the service to delete. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline DeleteServiceRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The name of the cluster that hosts the service to delete. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline DeleteServiceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /**
     * <p>The name of the service to delete.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The name of the service to delete.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The name of the service to delete.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The name of the service to delete.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The name of the service to delete.</p>
     */
    inline DeleteServiceRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The name of the service to delete.</p>
     */
    inline DeleteServiceRequest& WithService(Aws::String&& value) { SetService(value); return *this;}

    /**
     * <p>The name of the service to delete.</p>
     */
    inline DeleteServiceRequest& WithService(const char* value) { SetService(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_service;
    bool m_serviceHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
