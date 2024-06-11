﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleetModifyConfig.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class ModifyInstanceFleetRequest : public EMRRequest
  {
  public:
    AWS_EMR_API ModifyInstanceFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceFleet"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline ModifyInstanceFleetRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline ModifyInstanceFleetRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline ModifyInstanceFleetRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters of the instance fleet.</p>
     */
    inline const InstanceFleetModifyConfig& GetInstanceFleet() const{ return m_instanceFleet; }
    inline bool InstanceFleetHasBeenSet() const { return m_instanceFleetHasBeenSet; }
    inline void SetInstanceFleet(const InstanceFleetModifyConfig& value) { m_instanceFleetHasBeenSet = true; m_instanceFleet = value; }
    inline void SetInstanceFleet(InstanceFleetModifyConfig&& value) { m_instanceFleetHasBeenSet = true; m_instanceFleet = std::move(value); }
    inline ModifyInstanceFleetRequest& WithInstanceFleet(const InstanceFleetModifyConfig& value) { SetInstanceFleet(value); return *this;}
    inline ModifyInstanceFleetRequest& WithInstanceFleet(InstanceFleetModifyConfig&& value) { SetInstanceFleet(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    InstanceFleetModifyConfig m_instanceFleet;
    bool m_instanceFleetHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
