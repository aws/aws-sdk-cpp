/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AddInstanceFleetRequest : public EMRRequest
  {
  public:
    AWS_EMR_API AddInstanceFleetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddInstanceFleet"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    AddInstanceFleetRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of the instance fleet.</p>
     */
    inline const InstanceFleetConfig& GetInstanceFleet() const { return m_instanceFleet; }
    inline bool InstanceFleetHasBeenSet() const { return m_instanceFleetHasBeenSet; }
    template<typename InstanceFleetT = InstanceFleetConfig>
    void SetInstanceFleet(InstanceFleetT&& value) { m_instanceFleetHasBeenSet = true; m_instanceFleet = std::forward<InstanceFleetT>(value); }
    template<typename InstanceFleetT = InstanceFleetConfig>
    AddInstanceFleetRequest& WithInstanceFleet(InstanceFleetT&& value) { SetInstanceFleet(std::forward<InstanceFleetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    InstanceFleetConfig m_instanceFleet;
    bool m_instanceFleetHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
