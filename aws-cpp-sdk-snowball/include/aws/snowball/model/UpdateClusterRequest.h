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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Notification.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class AWS_SNOWBALL_API UpdateClusterRequest : public SnowballRequest
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
     * <p>The cluster ID of the cluster that you want to update, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The cluster ID of the cluster that you want to update, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The cluster ID of the cluster that you want to update, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The cluster ID of the cluster that you want to update, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The cluster ID of the cluster that you want to update, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The cluster ID of the cluster that you want to update, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline UpdateClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The cluster ID of the cluster that you want to update, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline UpdateClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The cluster ID of the cluster that you want to update, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline UpdateClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * cluster. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * cluster. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * cluster. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * cluster. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * cluster. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * cluster. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline UpdateClusterRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * cluster. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline UpdateClusterRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * cluster. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * API action in AWS Identity and Access Management (IAM).</p>
     */
    inline UpdateClusterRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The updated description of this cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of this cluster.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description of this cluster.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description of this cluster.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description of this cluster.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description of this cluster.</p>
     */
    inline UpdateClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of this cluster.</p>
     */
    inline UpdateClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of this cluster.</p>
     */
    inline UpdateClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The updated arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }

    /**
     * <p>The updated arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The updated arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The updated arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The updated arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline UpdateClusterRequest& WithResources(const JobResource& value) { SetResources(value); return *this;}

    /**
     * <p>The updated arrays of <a>JobResource</a> objects that can include updated
     * <a>S3Resource</a> objects or <a>LambdaResource</a> objects.</p>
     */
    inline UpdateClusterRequest& WithResources(JobResource&& value) { SetResources(std::move(value)); return *this;}


    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }

    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }

    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = std::move(value); }

    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }

    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline UpdateClusterRequest& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline UpdateClusterRequest& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}

    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline UpdateClusterRequest& WithAddressId(const char* value) { SetAddressId(value); return *this;}


    /**
     * <p>The updated shipping option value of this cluster's <a>ShippingDetails</a>
     * object.</p>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }

    /**
     * <p>The updated shipping option value of this cluster's <a>ShippingDetails</a>
     * object.</p>
     */
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }

    /**
     * <p>The updated shipping option value of this cluster's <a>ShippingDetails</a>
     * object.</p>
     */
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }

    /**
     * <p>The updated shipping option value of this cluster's <a>ShippingDetails</a>
     * object.</p>
     */
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = std::move(value); }

    /**
     * <p>The updated shipping option value of this cluster's <a>ShippingDetails</a>
     * object.</p>
     */
    inline UpdateClusterRequest& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}

    /**
     * <p>The updated shipping option value of this cluster's <a>ShippingDetails</a>
     * object.</p>
     */
    inline UpdateClusterRequest& WithShippingOption(ShippingOption&& value) { SetShippingOption(std::move(value)); return *this;}


    /**
     * <p>The new or updated <a>Notification</a> object.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }

    /**
     * <p>The new or updated <a>Notification</a> object.</p>
     */
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }

    /**
     * <p>The new or updated <a>Notification</a> object.</p>
     */
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>The new or updated <a>Notification</a> object.</p>
     */
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    /**
     * <p>The new or updated <a>Notification</a> object.</p>
     */
    inline UpdateClusterRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>The new or updated <a>Notification</a> object.</p>
     */
    inline UpdateClusterRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}


    /**
     * <p>The updated ID for the forwarding address for a cluster. This field is not
     * supported in most regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const{ return m_forwardingAddressId; }

    /**
     * <p>The updated ID for the forwarding address for a cluster. This field is not
     * supported in most regions.</p>
     */
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }

    /**
     * <p>The updated ID for the forwarding address for a cluster. This field is not
     * supported in most regions.</p>
     */
    inline void SetForwardingAddressId(const Aws::String& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = value; }

    /**
     * <p>The updated ID for the forwarding address for a cluster. This field is not
     * supported in most regions.</p>
     */
    inline void SetForwardingAddressId(Aws::String&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::move(value); }

    /**
     * <p>The updated ID for the forwarding address for a cluster. This field is not
     * supported in most regions.</p>
     */
    inline void SetForwardingAddressId(const char* value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId.assign(value); }

    /**
     * <p>The updated ID for the forwarding address for a cluster. This field is not
     * supported in most regions.</p>
     */
    inline UpdateClusterRequest& WithForwardingAddressId(const Aws::String& value) { SetForwardingAddressId(value); return *this;}

    /**
     * <p>The updated ID for the forwarding address for a cluster. This field is not
     * supported in most regions.</p>
     */
    inline UpdateClusterRequest& WithForwardingAddressId(Aws::String&& value) { SetForwardingAddressId(std::move(value)); return *this;}

    /**
     * <p>The updated ID for the forwarding address for a cluster. This field is not
     * supported in most regions.</p>
     */
    inline UpdateClusterRequest& WithForwardingAddressId(const char* value) { SetForwardingAddressId(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    JobResource m_resources;
    bool m_resourcesHasBeenSet;

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet;

    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet;

    Notification m_notification;
    bool m_notificationHasBeenSet;

    Aws::String m_forwardingAddressId;
    bool m_forwardingAddressIdHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
