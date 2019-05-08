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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/NotificationConfiguration.h>
#include <aws/sagemaker/model/MemberDefinition.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API UpdateWorkteamRequest : public SageMakerRequest
  {
  public:
    UpdateWorkteamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkteam"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the work team to update.</p>
     */
    inline const Aws::String& GetWorkteamName() const{ return m_workteamName; }

    /**
     * <p>The name of the work team to update.</p>
     */
    inline bool WorkteamNameHasBeenSet() const { return m_workteamNameHasBeenSet; }

    /**
     * <p>The name of the work team to update.</p>
     */
    inline void SetWorkteamName(const Aws::String& value) { m_workteamNameHasBeenSet = true; m_workteamName = value; }

    /**
     * <p>The name of the work team to update.</p>
     */
    inline void SetWorkteamName(Aws::String&& value) { m_workteamNameHasBeenSet = true; m_workteamName = std::move(value); }

    /**
     * <p>The name of the work team to update.</p>
     */
    inline void SetWorkteamName(const char* value) { m_workteamNameHasBeenSet = true; m_workteamName.assign(value); }

    /**
     * <p>The name of the work team to update.</p>
     */
    inline UpdateWorkteamRequest& WithWorkteamName(const Aws::String& value) { SetWorkteamName(value); return *this;}

    /**
     * <p>The name of the work team to update.</p>
     */
    inline UpdateWorkteamRequest& WithWorkteamName(Aws::String&& value) { SetWorkteamName(std::move(value)); return *this;}

    /**
     * <p>The name of the work team to update.</p>
     */
    inline UpdateWorkteamRequest& WithWorkteamName(const char* value) { SetWorkteamName(value); return *this;}


    /**
     * <p>A list of <code>MemberDefinition</code> objects that contain the updated work
     * team members.</p>
     */
    inline const Aws::Vector<MemberDefinition>& GetMemberDefinitions() const{ return m_memberDefinitions; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contain the updated work
     * team members.</p>
     */
    inline bool MemberDefinitionsHasBeenSet() const { return m_memberDefinitionsHasBeenSet; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contain the updated work
     * team members.</p>
     */
    inline void SetMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = value; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contain the updated work
     * team members.</p>
     */
    inline void SetMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = std::move(value); }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contain the updated work
     * team members.</p>
     */
    inline UpdateWorkteamRequest& WithMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { SetMemberDefinitions(value); return *this;}

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contain the updated work
     * team members.</p>
     */
    inline UpdateWorkteamRequest& WithMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { SetMemberDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contain the updated work
     * team members.</p>
     */
    inline UpdateWorkteamRequest& AddMemberDefinitions(const MemberDefinition& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contain the updated work
     * team members.</p>
     */
    inline UpdateWorkteamRequest& AddMemberDefinitions(MemberDefinition&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>An updated description for the work team.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An updated description for the work team.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An updated description for the work team.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An updated description for the work team.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An updated description for the work team.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An updated description for the work team.</p>
     */
    inline UpdateWorkteamRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An updated description for the work team.</p>
     */
    inline UpdateWorkteamRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An updated description for the work team.</p>
     */
    inline UpdateWorkteamRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configures SNS topic notifications for available or expiring work items</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>Configures SNS topic notifications for available or expiring work items</p>
     */
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }

    /**
     * <p>Configures SNS topic notifications for available or expiring work items</p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }

    /**
     * <p>Configures SNS topic notifications for available or expiring work items</p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }

    /**
     * <p>Configures SNS topic notifications for available or expiring work items</p>
     */
    inline UpdateWorkteamRequest& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>Configures SNS topic notifications for available or expiring work items</p>
     */
    inline UpdateWorkteamRequest& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_workteamName;
    bool m_workteamNameHasBeenSet;

    Aws::Vector<MemberDefinition> m_memberDefinitions;
    bool m_memberDefinitionsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
