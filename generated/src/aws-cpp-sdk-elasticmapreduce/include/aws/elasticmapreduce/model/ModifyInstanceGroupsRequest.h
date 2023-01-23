/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/InstanceGroupModifyConfig.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>Change the size of some instance groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ModifyInstanceGroupsInput">AWS
   * API Reference</a></p>
   */
  class ModifyInstanceGroupsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API ModifyInstanceGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceGroups"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the cluster to which the instance group belongs.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The ID of the cluster to which the instance group belongs.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The ID of the cluster to which the instance group belongs.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The ID of the cluster to which the instance group belongs.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The ID of the cluster to which the instance group belongs.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The ID of the cluster to which the instance group belongs.</p>
     */
    inline ModifyInstanceGroupsRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The ID of the cluster to which the instance group belongs.</p>
     */
    inline ModifyInstanceGroupsRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the cluster to which the instance group belongs.</p>
     */
    inline ModifyInstanceGroupsRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>Instance groups to change.</p>
     */
    inline const Aws::Vector<InstanceGroupModifyConfig>& GetInstanceGroups() const{ return m_instanceGroups; }

    /**
     * <p>Instance groups to change.</p>
     */
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }

    /**
     * <p>Instance groups to change.</p>
     */
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroupModifyConfig>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Instance groups to change.</p>
     */
    inline void SetInstanceGroups(Aws::Vector<InstanceGroupModifyConfig>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::move(value); }

    /**
     * <p>Instance groups to change.</p>
     */
    inline ModifyInstanceGroupsRequest& WithInstanceGroups(const Aws::Vector<InstanceGroupModifyConfig>& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Instance groups to change.</p>
     */
    inline ModifyInstanceGroupsRequest& WithInstanceGroups(Aws::Vector<InstanceGroupModifyConfig>&& value) { SetInstanceGroups(std::move(value)); return *this;}

    /**
     * <p>Instance groups to change.</p>
     */
    inline ModifyInstanceGroupsRequest& AddInstanceGroups(const InstanceGroupModifyConfig& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>Instance groups to change.</p>
     */
    inline ModifyInstanceGroupsRequest& AddInstanceGroups(InstanceGroupModifyConfig&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Vector<InstanceGroupModifyConfig> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
