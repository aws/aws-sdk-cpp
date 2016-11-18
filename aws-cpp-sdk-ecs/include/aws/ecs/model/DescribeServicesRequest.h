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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API DescribeServicesRequest : public ECSRequest
  {
  public:
    DescribeServicesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the cluster that hosts the service to describe. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The name of the cluster that hosts the service to describe. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The name of the cluster that hosts the service to describe. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The name of the cluster that hosts the service to describe. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The name of the cluster that hosts the service to describe. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline DescribeServicesRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The name of the cluster that hosts the service to describe. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline DescribeServicesRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The name of the cluster that hosts the service to describe. If you do not
     * specify a cluster, the default cluster is assumed.</p>
     */
    inline DescribeServicesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /**
     * <p>A list of services to describe. You may specify up to 10 services to describe
     * in a single operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServices() const{ return m_services; }

    /**
     * <p>A list of services to describe. You may specify up to 10 services to describe
     * in a single operation.</p>
     */
    inline void SetServices(const Aws::Vector<Aws::String>& value) { m_servicesHasBeenSet = true; m_services = value; }

    /**
     * <p>A list of services to describe. You may specify up to 10 services to describe
     * in a single operation.</p>
     */
    inline void SetServices(Aws::Vector<Aws::String>&& value) { m_servicesHasBeenSet = true; m_services = value; }

    /**
     * <p>A list of services to describe. You may specify up to 10 services to describe
     * in a single operation.</p>
     */
    inline DescribeServicesRequest& WithServices(const Aws::Vector<Aws::String>& value) { SetServices(value); return *this;}

    /**
     * <p>A list of services to describe. You may specify up to 10 services to describe
     * in a single operation.</p>
     */
    inline DescribeServicesRequest& WithServices(Aws::Vector<Aws::String>&& value) { SetServices(value); return *this;}

    /**
     * <p>A list of services to describe. You may specify up to 10 services to describe
     * in a single operation.</p>
     */
    inline DescribeServicesRequest& AddServices(const Aws::String& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

    /**
     * <p>A list of services to describe. You may specify up to 10 services to describe
     * in a single operation.</p>
     */
    inline DescribeServicesRequest& AddServices(Aws::String&& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

    /**
     * <p>A list of services to describe. You may specify up to 10 services to describe
     * in a single operation.</p>
     */
    inline DescribeServicesRequest& AddServices(const char* value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::Vector<Aws::String> m_services;
    bool m_servicesHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
