/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleetConfig.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class AWS_EMR_API AddInstanceFleetRequest : public EMRRequest
  {
  public:
    AddInstanceFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddInstanceFleet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline AddInstanceFleetRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline AddInstanceFleetRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline AddInstanceFleetRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>Specifies the configuration of the instance fleet.</p>
     */
    inline const InstanceFleetConfig& GetInstanceFleet() const{ return m_instanceFleet; }

    /**
     * <p>Specifies the configuration of the instance fleet.</p>
     */
    inline bool InstanceFleetHasBeenSet() const { return m_instanceFleetHasBeenSet; }

    /**
     * <p>Specifies the configuration of the instance fleet.</p>
     */
    inline void SetInstanceFleet(const InstanceFleetConfig& value) { m_instanceFleetHasBeenSet = true; m_instanceFleet = value; }

    /**
     * <p>Specifies the configuration of the instance fleet.</p>
     */
    inline void SetInstanceFleet(InstanceFleetConfig&& value) { m_instanceFleetHasBeenSet = true; m_instanceFleet = std::move(value); }

    /**
     * <p>Specifies the configuration of the instance fleet.</p>
     */
    inline AddInstanceFleetRequest& WithInstanceFleet(const InstanceFleetConfig& value) { SetInstanceFleet(value); return *this;}

    /**
     * <p>Specifies the configuration of the instance fleet.</p>
     */
    inline AddInstanceFleetRequest& WithInstanceFleet(InstanceFleetConfig&& value) { SetInstanceFleet(std::move(value)); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    InstanceFleetConfig m_instanceFleet;
    bool m_instanceFleetHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
