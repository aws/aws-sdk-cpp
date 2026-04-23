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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanType.h>
#include <aws/servicecatalog/model/ProvisionedProductPlanStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/UpdateProvisioningParameter.h>
#include <aws/servicecatalog/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionedProductPlanDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProvisionedProductPlanDetails
  {
  public:
    ProvisionedProductPlanDetails();
    ProvisionedProductPlanDetails(Aws::Utils::Json::JsonView jsonValue);
    ProvisionedProductPlanDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline ProvisionedProductPlanDetails& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The UTC time stamp of the creation time.</p>
     */
    inline ProvisionedProductPlanDetails& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline const Aws::String& GetPathId() const{ return m_pathId; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline bool PathIdHasBeenSet() const { return m_pathIdHasBeenSet; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline void SetPathId(const Aws::String& value) { m_pathIdHasBeenSet = true; m_pathId = value; }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline void SetPathId(Aws::String&& value) { m_pathIdHasBeenSet = true; m_pathId = std::move(value); }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline void SetPathId(const char* value) { m_pathIdHasBeenSet = true; m_pathId.assign(value); }

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline ProvisionedProductPlanDetails& WithPathId(const Aws::String& value) { SetPathId(value); return *this;}

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline ProvisionedProductPlanDetails& WithPathId(Aws::String&& value) { SetPathId(std::move(value)); return *this;}

    /**
     * <p>The path identifier of the product. This value is optional if the product has
     * a default path, and required if the product has more than one path. To list the
     * paths for a product, use <a>ListLaunchPaths</a>.</p>
     */
    inline ProvisionedProductPlanDetails& WithPathId(const char* value) { SetPathId(value); return *this;}


    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionedProductPlanDetails& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionedProductPlanDetails& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionedProductPlanDetails& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The name of the plan.</p>
     */
    inline const Aws::String& GetPlanName() const{ return m_planName; }

    /**
     * <p>The name of the plan.</p>
     */
    inline bool PlanNameHasBeenSet() const { return m_planNameHasBeenSet; }

    /**
     * <p>The name of the plan.</p>
     */
    inline void SetPlanName(const Aws::String& value) { m_planNameHasBeenSet = true; m_planName = value; }

    /**
     * <p>The name of the plan.</p>
     */
    inline void SetPlanName(Aws::String&& value) { m_planNameHasBeenSet = true; m_planName = std::move(value); }

    /**
     * <p>The name of the plan.</p>
     */
    inline void SetPlanName(const char* value) { m_planNameHasBeenSet = true; m_planName.assign(value); }

    /**
     * <p>The name of the plan.</p>
     */
    inline ProvisionedProductPlanDetails& WithPlanName(const Aws::String& value) { SetPlanName(value); return *this;}

    /**
     * <p>The name of the plan.</p>
     */
    inline ProvisionedProductPlanDetails& WithPlanName(Aws::String&& value) { SetPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the plan.</p>
     */
    inline ProvisionedProductPlanDetails& WithPlanName(const char* value) { SetPlanName(value); return *this;}


    /**
     * <p>The plan identifier.</p>
     */
    inline const Aws::String& GetPlanId() const{ return m_planId; }

    /**
     * <p>The plan identifier.</p>
     */
    inline bool PlanIdHasBeenSet() const { return m_planIdHasBeenSet; }

    /**
     * <p>The plan identifier.</p>
     */
    inline void SetPlanId(const Aws::String& value) { m_planIdHasBeenSet = true; m_planId = value; }

    /**
     * <p>The plan identifier.</p>
     */
    inline void SetPlanId(Aws::String&& value) { m_planIdHasBeenSet = true; m_planId = std::move(value); }

    /**
     * <p>The plan identifier.</p>
     */
    inline void SetPlanId(const char* value) { m_planIdHasBeenSet = true; m_planId.assign(value); }

    /**
     * <p>The plan identifier.</p>
     */
    inline ProvisionedProductPlanDetails& WithPlanId(const Aws::String& value) { SetPlanId(value); return *this;}

    /**
     * <p>The plan identifier.</p>
     */
    inline ProvisionedProductPlanDetails& WithPlanId(Aws::String&& value) { SetPlanId(std::move(value)); return *this;}

    /**
     * <p>The plan identifier.</p>
     */
    inline ProvisionedProductPlanDetails& WithPlanId(const char* value) { SetPlanId(value); return *this;}


    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProvisionProductId() const{ return m_provisionProductId; }

    /**
     * <p>The product identifier.</p>
     */
    inline bool ProvisionProductIdHasBeenSet() const { return m_provisionProductIdHasBeenSet; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(const Aws::String& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(Aws::String&& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = std::move(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(const char* value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisionProductId(const Aws::String& value) { SetProvisionProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisionProductId(Aws::String&& value) { SetProvisionProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisionProductId(const char* value) { SetProvisionProductId(value); return *this;}


    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline const Aws::String& GetProvisionProductName() const{ return m_provisionProductName; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline bool ProvisionProductNameHasBeenSet() const { return m_provisionProductNameHasBeenSet; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionProductName(const Aws::String& value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName = value; }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionProductName(Aws::String&& value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName = std::move(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline void SetProvisionProductName(const char* value) { m_provisionProductNameHasBeenSet = true; m_provisionProductName.assign(value); }

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisionProductName(const Aws::String& value) { SetProvisionProductName(value); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisionProductName(Aws::String&& value) { SetProvisionProductName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of the provisioned product.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisionProductName(const char* value) { SetProvisionProductName(value); return *this;}


    /**
     * <p>The plan type.</p>
     */
    inline const ProvisionedProductPlanType& GetPlanType() const{ return m_planType; }

    /**
     * <p>The plan type.</p>
     */
    inline bool PlanTypeHasBeenSet() const { return m_planTypeHasBeenSet; }

    /**
     * <p>The plan type.</p>
     */
    inline void SetPlanType(const ProvisionedProductPlanType& value) { m_planTypeHasBeenSet = true; m_planType = value; }

    /**
     * <p>The plan type.</p>
     */
    inline void SetPlanType(ProvisionedProductPlanType&& value) { m_planTypeHasBeenSet = true; m_planType = std::move(value); }

    /**
     * <p>The plan type.</p>
     */
    inline ProvisionedProductPlanDetails& WithPlanType(const ProvisionedProductPlanType& value) { SetPlanType(value); return *this;}

    /**
     * <p>The plan type.</p>
     */
    inline ProvisionedProductPlanDetails& WithPlanType(ProvisionedProductPlanType&& value) { SetPlanType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline const Aws::String& GetProvisioningArtifactId() const{ return m_provisioningArtifactId; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline bool ProvisioningArtifactIdHasBeenSet() const { return m_provisioningArtifactIdHasBeenSet; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const Aws::String& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = value; }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(Aws::String&& value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId = std::move(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactId(const char* value) { m_provisioningArtifactIdHasBeenSet = true; m_provisioningArtifactId.assign(value); }

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisioningArtifactId(const Aws::String& value) { SetProvisioningArtifactId(value); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisioningArtifactId(Aws::String&& value) { SetProvisioningArtifactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the provisioning artifact.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisioningArtifactId(const char* value) { SetProvisioningArtifactId(value); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const ProvisionedProductPlanStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const ProvisionedProductPlanStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(ProvisionedProductPlanStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline ProvisionedProductPlanDetails& WithStatus(const ProvisionedProductPlanStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline ProvisionedProductPlanDetails& WithStatus(ProvisionedProductPlanStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time when the plan was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const{ return m_updatedTime; }

    /**
     * <p>The time when the plan was last updated.</p>
     */
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }

    /**
     * <p>The time when the plan was last updated.</p>
     */
    inline void SetUpdatedTime(const Aws::Utils::DateTime& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }

    /**
     * <p>The time when the plan was last updated.</p>
     */
    inline void SetUpdatedTime(Aws::Utils::DateTime&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }

    /**
     * <p>The time when the plan was last updated.</p>
     */
    inline ProvisionedProductPlanDetails& WithUpdatedTime(const Aws::Utils::DateTime& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p>The time when the plan was last updated.</p>
     */
    inline ProvisionedProductPlanDetails& WithUpdatedTime(Aws::Utils::DateTime&& value) { SetUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const{ return m_notificationArns; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline void SetNotificationArns(const Aws::Vector<Aws::String>& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = value; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline void SetNotificationArns(Aws::Vector<Aws::String>&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::move(value); }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionedProductPlanDetails& WithNotificationArns(const Aws::Vector<Aws::String>& value) { SetNotificationArns(value); return *this;}

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionedProductPlanDetails& WithNotificationArns(Aws::Vector<Aws::String>&& value) { SetNotificationArns(std::move(value)); return *this;}

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionedProductPlanDetails& AddNotificationArns(const Aws::String& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionedProductPlanDetails& AddNotificationArns(Aws::String&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Passed to CloudFormation. The SNS topic ARNs to which to publish
     * stack-related events.</p>
     */
    inline ProvisionedProductPlanDetails& AddNotificationArns(const char* value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }


    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline const Aws::Vector<UpdateProvisioningParameter>& GetProvisioningParameters() const{ return m_provisioningParameters; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline bool ProvisioningParametersHasBeenSet() const { return m_provisioningParametersHasBeenSet; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline void SetProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = value; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline void SetProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters = std::move(value); }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisioningParameters(const Aws::Vector<UpdateProvisioningParameter>& value) { SetProvisioningParameters(value); return *this;}

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionedProductPlanDetails& WithProvisioningParameters(Aws::Vector<UpdateProvisioningParameter>&& value) { SetProvisioningParameters(std::move(value)); return *this;}

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionedProductPlanDetails& AddProvisioningParameters(const UpdateProvisioningParameter& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(value); return *this; }

    /**
     * <p>Parameters specified by the administrator that are required for provisioning
     * the product.</p>
     */
    inline ProvisionedProductPlanDetails& AddProvisioningParameters(UpdateProvisioningParameter&& value) { m_provisioningParametersHasBeenSet = true; m_provisioningParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline ProvisionedProductPlanDetails& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline ProvisionedProductPlanDetails& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline ProvisionedProductPlanDetails& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline ProvisionedProductPlanDetails& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message.</p>
     */
    inline ProvisionedProductPlanDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline ProvisionedProductPlanDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline ProvisionedProductPlanDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::String m_pathId;
    bool m_pathIdHasBeenSet;

    Aws::String m_productId;
    bool m_productIdHasBeenSet;

    Aws::String m_planName;
    bool m_planNameHasBeenSet;

    Aws::String m_planId;
    bool m_planIdHasBeenSet;

    Aws::String m_provisionProductId;
    bool m_provisionProductIdHasBeenSet;

    Aws::String m_provisionProductName;
    bool m_provisionProductNameHasBeenSet;

    ProvisionedProductPlanType m_planType;
    bool m_planTypeHasBeenSet;

    Aws::String m_provisioningArtifactId;
    bool m_provisioningArtifactIdHasBeenSet;

    ProvisionedProductPlanStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_updatedTime;
    bool m_updatedTimeHasBeenSet;

    Aws::Vector<Aws::String> m_notificationArns;
    bool m_notificationArnsHasBeenSet;

    Aws::Vector<UpdateProvisioningParameter> m_provisioningParameters;
    bool m_provisioningParametersHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
