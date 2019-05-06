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
#include <aws/snowball/model/Notification.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/SnowballCapacity.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class AWS_SNOWBALL_API UpdateJobRequest : public SnowballRequest
  {
  public:
    UpdateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The job ID of the job that you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID of the job that you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID of the job that you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID of the job that you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID of the job that you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID of the job that you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline UpdateJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID of the job that you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline UpdateJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID of the job that you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline UpdateJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * job. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>AWS
     * Identity and Access Management (IAM) API action.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * job. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>AWS
     * Identity and Access Management (IAM) API action.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * job. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>AWS
     * Identity and Access Management (IAM) API action.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * job. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>AWS
     * Identity and Access Management (IAM) API action.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * job. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>AWS
     * Identity and Access Management (IAM) API action.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * job. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>AWS
     * Identity and Access Management (IAM) API action.</p>
     */
    inline UpdateJobRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * job. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>AWS
     * Identity and Access Management (IAM) API action.</p>
     */
    inline UpdateJobRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The new role Amazon Resource Name (ARN) that you want to associate with this
     * job. To create a role ARN, use the <a
     * href="http://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>AWS
     * Identity and Access Management (IAM) API action.</p>
     */
    inline UpdateJobRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


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
    inline UpdateJobRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>The new or updated <a>Notification</a> object.</p>
     */
    inline UpdateJobRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}


    /**
     * <p>The updated <code>JobResource</code> object, or the updated
     * <a>JobResource</a> object. </p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }

    /**
     * <p>The updated <code>JobResource</code> object, or the updated
     * <a>JobResource</a> object. </p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The updated <code>JobResource</code> object, or the updated
     * <a>JobResource</a> object. </p>
     */
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The updated <code>JobResource</code> object, or the updated
     * <a>JobResource</a> object. </p>
     */
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The updated <code>JobResource</code> object, or the updated
     * <a>JobResource</a> object. </p>
     */
    inline UpdateJobRequest& WithResources(const JobResource& value) { SetResources(value); return *this;}

    /**
     * <p>The updated <code>JobResource</code> object, or the updated
     * <a>JobResource</a> object. </p>
     */
    inline UpdateJobRequest& WithResources(JobResource&& value) { SetResources(std::move(value)); return *this;}


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
    inline UpdateJobRequest& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline UpdateJobRequest& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}

    /**
     * <p>The ID of the updated <a>Address</a> object.</p>
     */
    inline UpdateJobRequest& WithAddressId(const char* value) { SetAddressId(value); return *this;}


    /**
     * <p>The updated shipping option value of this job's <a>ShippingDetails</a>
     * object.</p>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }

    /**
     * <p>The updated shipping option value of this job's <a>ShippingDetails</a>
     * object.</p>
     */
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }

    /**
     * <p>The updated shipping option value of this job's <a>ShippingDetails</a>
     * object.</p>
     */
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }

    /**
     * <p>The updated shipping option value of this job's <a>ShippingDetails</a>
     * object.</p>
     */
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = std::move(value); }

    /**
     * <p>The updated shipping option value of this job's <a>ShippingDetails</a>
     * object.</p>
     */
    inline UpdateJobRequest& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}

    /**
     * <p>The updated shipping option value of this job's <a>ShippingDetails</a>
     * object.</p>
     */
    inline UpdateJobRequest& WithShippingOption(ShippingOption&& value) { SetShippingOption(std::move(value)); return *this;}


    /**
     * <p>The updated description of this job's <a>JobMetadata</a> object.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated description of this job's <a>JobMetadata</a> object.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated description of this job's <a>JobMetadata</a> object.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated description of this job's <a>JobMetadata</a> object.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated description of this job's <a>JobMetadata</a> object.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated description of this job's <a>JobMetadata</a> object.</p>
     */
    inline UpdateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated description of this job's <a>JobMetadata</a> object.</p>
     */
    inline UpdateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated description of this job's <a>JobMetadata</a> object.</p>
     */
    inline UpdateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The updated <code>SnowballCapacityPreference</code> of this job's
     * <a>JobMetadata</a> object. The 50 TB Snowballs are only available in the US
     * regions.</p>
     */
    inline const SnowballCapacity& GetSnowballCapacityPreference() const{ return m_snowballCapacityPreference; }

    /**
     * <p>The updated <code>SnowballCapacityPreference</code> of this job's
     * <a>JobMetadata</a> object. The 50 TB Snowballs are only available in the US
     * regions.</p>
     */
    inline bool SnowballCapacityPreferenceHasBeenSet() const { return m_snowballCapacityPreferenceHasBeenSet; }

    /**
     * <p>The updated <code>SnowballCapacityPreference</code> of this job's
     * <a>JobMetadata</a> object. The 50 TB Snowballs are only available in the US
     * regions.</p>
     */
    inline void SetSnowballCapacityPreference(const SnowballCapacity& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }

    /**
     * <p>The updated <code>SnowballCapacityPreference</code> of this job's
     * <a>JobMetadata</a> object. The 50 TB Snowballs are only available in the US
     * regions.</p>
     */
    inline void SetSnowballCapacityPreference(SnowballCapacity&& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = std::move(value); }

    /**
     * <p>The updated <code>SnowballCapacityPreference</code> of this job's
     * <a>JobMetadata</a> object. The 50 TB Snowballs are only available in the US
     * regions.</p>
     */
    inline UpdateJobRequest& WithSnowballCapacityPreference(const SnowballCapacity& value) { SetSnowballCapacityPreference(value); return *this;}

    /**
     * <p>The updated <code>SnowballCapacityPreference</code> of this job's
     * <a>JobMetadata</a> object. The 50 TB Snowballs are only available in the US
     * regions.</p>
     */
    inline UpdateJobRequest& WithSnowballCapacityPreference(SnowballCapacity&& value) { SetSnowballCapacityPreference(std::move(value)); return *this;}


    /**
     * <p>The updated ID for the forwarding address for a job. This field is not
     * supported in most regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const{ return m_forwardingAddressId; }

    /**
     * <p>The updated ID for the forwarding address for a job. This field is not
     * supported in most regions.</p>
     */
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }

    /**
     * <p>The updated ID for the forwarding address for a job. This field is not
     * supported in most regions.</p>
     */
    inline void SetForwardingAddressId(const Aws::String& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = value; }

    /**
     * <p>The updated ID for the forwarding address for a job. This field is not
     * supported in most regions.</p>
     */
    inline void SetForwardingAddressId(Aws::String&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::move(value); }

    /**
     * <p>The updated ID for the forwarding address for a job. This field is not
     * supported in most regions.</p>
     */
    inline void SetForwardingAddressId(const char* value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId.assign(value); }

    /**
     * <p>The updated ID for the forwarding address for a job. This field is not
     * supported in most regions.</p>
     */
    inline UpdateJobRequest& WithForwardingAddressId(const Aws::String& value) { SetForwardingAddressId(value); return *this;}

    /**
     * <p>The updated ID for the forwarding address for a job. This field is not
     * supported in most regions.</p>
     */
    inline UpdateJobRequest& WithForwardingAddressId(Aws::String&& value) { SetForwardingAddressId(std::move(value)); return *this;}

    /**
     * <p>The updated ID for the forwarding address for a job. This field is not
     * supported in most regions.</p>
     */
    inline UpdateJobRequest& WithForwardingAddressId(const char* value) { SetForwardingAddressId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    Notification m_notification;
    bool m_notificationHasBeenSet;

    JobResource m_resources;
    bool m_resourcesHasBeenSet;

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet;

    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    SnowballCapacity m_snowballCapacityPreference;
    bool m_snowballCapacityPreferenceHasBeenSet;

    Aws::String m_forwardingAddressId;
    bool m_forwardingAddressIdHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
