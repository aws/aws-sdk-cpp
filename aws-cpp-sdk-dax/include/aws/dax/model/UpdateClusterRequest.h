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
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class AWS_DAX_API UpdateClusterRequest : public DAXRequest
  {
  public:
    UpdateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the DAX cluster to be modified.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the DAX cluster to be modified.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the DAX cluster to be modified.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the DAX cluster to be modified.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the DAX cluster to be modified.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the DAX cluster to be modified.</p>
     */
    inline UpdateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the DAX cluster to be modified.</p>
     */
    inline UpdateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the DAX cluster to be modified.</p>
     */
    inline UpdateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>A description of the changes being made to the cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the changes being made to the cluster.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the changes being made to the cluster.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the changes being made to the cluster.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the changes being made to the cluster.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the changes being made to the cluster.</p>
     */
    inline UpdateClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the changes being made to the cluster.</p>
     */
    inline UpdateClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the changes being made to the cluster.</p>
     */
    inline UpdateClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline UpdateClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline UpdateClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline UpdateClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline UpdateClusterRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline UpdateClusterRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline UpdateClusterRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}


    /**
     * <p>The current state of the topic.</p>
     */
    inline const Aws::String& GetNotificationTopicStatus() const{ return m_notificationTopicStatus; }

    /**
     * <p>The current state of the topic.</p>
     */
    inline bool NotificationTopicStatusHasBeenSet() const { return m_notificationTopicStatusHasBeenSet; }

    /**
     * <p>The current state of the topic.</p>
     */
    inline void SetNotificationTopicStatus(const Aws::String& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }

    /**
     * <p>The current state of the topic.</p>
     */
    inline void SetNotificationTopicStatus(Aws::String&& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = std::move(value); }

    /**
     * <p>The current state of the topic.</p>
     */
    inline void SetNotificationTopicStatus(const char* value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus.assign(value); }

    /**
     * <p>The current state of the topic.</p>
     */
    inline UpdateClusterRequest& WithNotificationTopicStatus(const Aws::String& value) { SetNotificationTopicStatus(value); return *this;}

    /**
     * <p>The current state of the topic.</p>
     */
    inline UpdateClusterRequest& WithNotificationTopicStatus(Aws::String&& value) { SetNotificationTopicStatus(std::move(value)); return *this;}

    /**
     * <p>The current state of the topic.</p>
     */
    inline UpdateClusterRequest& WithNotificationTopicStatus(const char* value) { SetNotificationTopicStatus(value); return *this;}


    /**
     * <p>The name of a parameter group for this cluster.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of a parameter group for this cluster.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of a parameter group for this cluster.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of a parameter group for this cluster.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of a parameter group for this cluster.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of a parameter group for this cluster.</p>
     */
    inline UpdateClusterRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of a parameter group for this cluster.</p>
     */
    inline UpdateClusterRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of a parameter group for this cluster.</p>
     */
    inline UpdateClusterRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline UpdateClusterRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline UpdateClusterRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline UpdateClusterRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline UpdateClusterRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline UpdateClusterRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet;

    Aws::String m_notificationTopicStatus;
    bool m_notificationTopicStatusHasBeenSet;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
