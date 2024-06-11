/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateClusterRequest : public DAXRequest
  {
  public:
    AWS_DAX_API UpdateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_DAX_API Aws::String SerializePayload() const override;

    AWS_DAX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the DAX cluster to be modified.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline UpdateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline UpdateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the changes being made to the cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A range of time when maintenance of DAX cluster software will be performed.
     * For example: <code>sun:01:00-sun:09:00</code>. Cluster maintenance normally
     * takes less than 30 minutes, and is performed automatically within the
     * maintenance window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline UpdateClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline UpdateClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the topic.</p>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }
    inline UpdateClusterRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}
    inline UpdateClusterRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the topic. A value of “active” means that notifications
     * will be sent to the topic. A value of “inactive” means that notifications will
     * not be sent to the topic.</p>
     */
    inline const Aws::String& GetNotificationTopicStatus() const{ return m_notificationTopicStatus; }
    inline bool NotificationTopicStatusHasBeenSet() const { return m_notificationTopicStatusHasBeenSet; }
    inline void SetNotificationTopicStatus(const Aws::String& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = value; }
    inline void SetNotificationTopicStatus(Aws::String&& value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus = std::move(value); }
    inline void SetNotificationTopicStatus(const char* value) { m_notificationTopicStatusHasBeenSet = true; m_notificationTopicStatus.assign(value); }
    inline UpdateClusterRequest& WithNotificationTopicStatus(const Aws::String& value) { SetNotificationTopicStatus(value); return *this;}
    inline UpdateClusterRequest& WithNotificationTopicStatus(Aws::String&& value) { SetNotificationTopicStatus(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithNotificationTopicStatus(const char* value) { SetNotificationTopicStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a parameter group for this cluster.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }
    inline UpdateClusterRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}
    inline UpdateClusterRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of user-specified security group IDs to be assigned to each node in
     * the DAX cluster. If this parameter is not specified, DAX assigns the default VPC
     * security group to each node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline UpdateClusterRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline UpdateClusterRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline UpdateClusterRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline UpdateClusterRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline UpdateClusterRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet = false;

    Aws::String m_notificationTopicStatus;
    bool m_notificationTopicStatusHasBeenSet = false;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
