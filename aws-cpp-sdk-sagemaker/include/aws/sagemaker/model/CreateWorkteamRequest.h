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
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateWorkteamRequest : public SageMakerRequest
  {
  public:
    CreateWorkteamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkteam"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline const Aws::String& GetWorkteamName() const{ return m_workteamName; }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline bool WorkteamNameHasBeenSet() const { return m_workteamNameHasBeenSet; }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline void SetWorkteamName(const Aws::String& value) { m_workteamNameHasBeenSet = true; m_workteamName = value; }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline void SetWorkteamName(Aws::String&& value) { m_workteamNameHasBeenSet = true; m_workteamName = std::move(value); }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline void SetWorkteamName(const char* value) { m_workteamNameHasBeenSet = true; m_workteamName.assign(value); }

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline CreateWorkteamRequest& WithWorkteamName(const Aws::String& value) { SetWorkteamName(value); return *this;}

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline CreateWorkteamRequest& WithWorkteamName(Aws::String&& value) { SetWorkteamName(std::move(value)); return *this;}

    /**
     * <p>The name of the work team. Use this name to identify the work team.</p>
     */
    inline CreateWorkteamRequest& WithWorkteamName(const char* value) { SetWorkteamName(value); return *this;}


    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the Amazon Cognito user pool that makes up the work team. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>All of the <code>CognitoMemberDefinition</code>
     * objects that make up the member definition must have the same
     * <code>ClientId</code> and <code>UserPool</code> values.</p>
     */
    inline const Aws::Vector<MemberDefinition>& GetMemberDefinitions() const{ return m_memberDefinitions; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the Amazon Cognito user pool that makes up the work team. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>All of the <code>CognitoMemberDefinition</code>
     * objects that make up the member definition must have the same
     * <code>ClientId</code> and <code>UserPool</code> values.</p>
     */
    inline bool MemberDefinitionsHasBeenSet() const { return m_memberDefinitionsHasBeenSet; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the Amazon Cognito user pool that makes up the work team. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>All of the <code>CognitoMemberDefinition</code>
     * objects that make up the member definition must have the same
     * <code>ClientId</code> and <code>UserPool</code> values.</p>
     */
    inline void SetMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = value; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the Amazon Cognito user pool that makes up the work team. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>All of the <code>CognitoMemberDefinition</code>
     * objects that make up the member definition must have the same
     * <code>ClientId</code> and <code>UserPool</code> values.</p>
     */
    inline void SetMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions = std::move(value); }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the Amazon Cognito user pool that makes up the work team. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>All of the <code>CognitoMemberDefinition</code>
     * objects that make up the member definition must have the same
     * <code>ClientId</code> and <code>UserPool</code> values.</p>
     */
    inline CreateWorkteamRequest& WithMemberDefinitions(const Aws::Vector<MemberDefinition>& value) { SetMemberDefinitions(value); return *this;}

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the Amazon Cognito user pool that makes up the work team. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>All of the <code>CognitoMemberDefinition</code>
     * objects that make up the member definition must have the same
     * <code>ClientId</code> and <code>UserPool</code> values.</p>
     */
    inline CreateWorkteamRequest& WithMemberDefinitions(Aws::Vector<MemberDefinition>&& value) { SetMemberDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the Amazon Cognito user pool that makes up the work team. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>All of the <code>CognitoMemberDefinition</code>
     * objects that make up the member definition must have the same
     * <code>ClientId</code> and <code>UserPool</code> values.</p>
     */
    inline CreateWorkteamRequest& AddMemberDefinitions(const MemberDefinition& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of <code>MemberDefinition</code> objects that contains objects that
     * identify the Amazon Cognito user pool that makes up the work team. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito User Pools</a>.</p> <p>All of the <code>CognitoMemberDefinition</code>
     * objects that make up the member definition must have the same
     * <code>ClientId</code> and <code>UserPool</code> values.</p>
     */
    inline CreateWorkteamRequest& AddMemberDefinitions(MemberDefinition&& value) { m_memberDefinitionsHasBeenSet = true; m_memberDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of the work team.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the work team.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the work team.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the work team.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the work team.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the work team.</p>
     */
    inline CreateWorkteamRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the work team.</p>
     */
    inline CreateWorkteamRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the work team.</p>
     */
    inline CreateWorkteamRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline CreateWorkteamRequest& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>Configures notification of workers regarding available or expiring work
     * items.</p>
     */
    inline CreateWorkteamRequest& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p/>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p/>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p/>
     */
    inline CreateWorkteamRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p/>
     */
    inline CreateWorkteamRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateWorkteamRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline CreateWorkteamRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_workteamName;
    bool m_workteamNameHasBeenSet;

    Aws::Vector<MemberDefinition> m_memberDefinitions;
    bool m_memberDefinitionsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
