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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/Stage.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> Request structure for a branch create request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBranchRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API CreateBranchRequest : public AmplifyRequest
  {
  public:
    CreateBranchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBranch"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline CreateBranchRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline CreateBranchRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline CreateBranchRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> Name for the branch. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p> Name for the branch. </p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p> Name for the branch. </p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p> Name for the branch. </p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p> Name for the branch. </p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p> Name for the branch. </p>
     */
    inline CreateBranchRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p> Name for the branch. </p>
     */
    inline CreateBranchRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p> Name for the branch. </p>
     */
    inline CreateBranchRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}


    /**
     * <p> Description for the branch. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> Description for the branch. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> Description for the branch. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> Description for the branch. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> Description for the branch. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> Description for the branch. </p>
     */
    inline CreateBranchRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> Description for the branch. </p>
     */
    inline CreateBranchRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> Description for the branch. </p>
     */
    inline CreateBranchRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Stage for the branch. </p>
     */
    inline const Stage& GetStage() const{ return m_stage; }

    /**
     * <p> Stage for the branch. </p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p> Stage for the branch. </p>
     */
    inline void SetStage(const Stage& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p> Stage for the branch. </p>
     */
    inline void SetStage(Stage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p> Stage for the branch. </p>
     */
    inline CreateBranchRequest& WithStage(const Stage& value) { SetStage(value); return *this;}

    /**
     * <p> Stage for the branch. </p>
     */
    inline CreateBranchRequest& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}


    /**
     * <p> Framework for the branch. </p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }

    /**
     * <p> Framework for the branch. </p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p> Framework for the branch. </p>
     */
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p> Framework for the branch. </p>
     */
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p> Framework for the branch. </p>
     */
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }

    /**
     * <p> Framework for the branch. </p>
     */
    inline CreateBranchRequest& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}

    /**
     * <p> Framework for the branch. </p>
     */
    inline CreateBranchRequest& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}

    /**
     * <p> Framework for the branch. </p>
     */
    inline CreateBranchRequest& WithFramework(const char* value) { SetFramework(value); return *this;}


    /**
     * <p> Enables notifications for the branch. </p>
     */
    inline bool GetEnableNotification() const{ return m_enableNotification; }

    /**
     * <p> Enables notifications for the branch. </p>
     */
    inline bool EnableNotificationHasBeenSet() const { return m_enableNotificationHasBeenSet; }

    /**
     * <p> Enables notifications for the branch. </p>
     */
    inline void SetEnableNotification(bool value) { m_enableNotificationHasBeenSet = true; m_enableNotification = value; }

    /**
     * <p> Enables notifications for the branch. </p>
     */
    inline CreateBranchRequest& WithEnableNotification(bool value) { SetEnableNotification(value); return *this;}


    /**
     * <p> Enables auto building for the branch. </p>
     */
    inline bool GetEnableAutoBuild() const{ return m_enableAutoBuild; }

    /**
     * <p> Enables auto building for the branch. </p>
     */
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }

    /**
     * <p> Enables auto building for the branch. </p>
     */
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }

    /**
     * <p> Enables auto building for the branch. </p>
     */
    inline CreateBranchRequest& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}


    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline CreateBranchRequest& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline CreateBranchRequest& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline CreateBranchRequest& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline CreateBranchRequest& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline CreateBranchRequest& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline CreateBranchRequest& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline CreateBranchRequest& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline CreateBranchRequest& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables for the branch. </p>
     */
    inline CreateBranchRequest& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p> Basic Authorization credentials for the branch. </p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> Basic Authorization credentials for the branch. </p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> Basic Authorization credentials for the branch. </p>
     */
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> Basic Authorization credentials for the branch. </p>
     */
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> Basic Authorization credentials for the branch. </p>
     */
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }

    /**
     * <p> Basic Authorization credentials for the branch. </p>
     */
    inline CreateBranchRequest& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> Basic Authorization credentials for the branch. </p>
     */
    inline CreateBranchRequest& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}

    /**
     * <p> Basic Authorization credentials for the branch. </p>
     */
    inline CreateBranchRequest& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}


    /**
     * <p> Enables Basic Auth for the branch. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }

    /**
     * <p> Enables Basic Auth for the branch. </p>
     */
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }

    /**
     * <p> Enables Basic Auth for the branch. </p>
     */
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }

    /**
     * <p> Enables Basic Auth for the branch. </p>
     */
    inline CreateBranchRequest& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}


    /**
     * <p> Tag for the branch. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> Tag for the branch. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Tag for the branch. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Tag for the branch. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Tag for the branch. </p>
     */
    inline CreateBranchRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> Tag for the branch. </p>
     */
    inline CreateBranchRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Tag for the branch. </p>
     */
    inline CreateBranchRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> Tag for the branch. </p>
     */
    inline CreateBranchRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Tag for the branch. </p>
     */
    inline CreateBranchRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Tag for the branch. </p>
     */
    inline CreateBranchRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Tag for the branch. </p>
     */
    inline CreateBranchRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Tag for the branch. </p>
     */
    inline CreateBranchRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Tag for the branch. </p>
     */
    inline CreateBranchRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> BuildSpec for the branch. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }

    /**
     * <p> BuildSpec for the branch. </p>
     */
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }

    /**
     * <p> BuildSpec for the branch. </p>
     */
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }

    /**
     * <p> BuildSpec for the branch. </p>
     */
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }

    /**
     * <p> BuildSpec for the branch. </p>
     */
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }

    /**
     * <p> BuildSpec for the branch. </p>
     */
    inline CreateBranchRequest& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}

    /**
     * <p> BuildSpec for the branch. </p>
     */
    inline CreateBranchRequest& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}

    /**
     * <p> BuildSpec for the branch. </p>
     */
    inline CreateBranchRequest& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}


    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline const Aws::String& GetTtl() const{ return m_ttl; }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline void SetTtl(const Aws::String& value) { m_ttlHasBeenSet = true; m_ttl = value; }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline void SetTtl(Aws::String&& value) { m_ttlHasBeenSet = true; m_ttl = std::move(value); }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline void SetTtl(const char* value) { m_ttlHasBeenSet = true; m_ttl.assign(value); }

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline CreateBranchRequest& WithTtl(const Aws::String& value) { SetTtl(value); return *this;}

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline CreateBranchRequest& WithTtl(Aws::String&& value) { SetTtl(std::move(value)); return *this;}

    /**
     * <p> The content TTL for the website in seconds. </p>
     */
    inline CreateBranchRequest& WithTtl(const char* value) { SetTtl(value); return *this;}


    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline CreateBranchRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline CreateBranchRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p> Display name for a branch, will use as the default domain prefix. </p>
     */
    inline CreateBranchRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Stage m_stage;
    bool m_stageHasBeenSet;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet;

    bool m_enableNotification;
    bool m_enableNotificationHasBeenSet;

    bool m_enableAutoBuild;
    bool m_enableAutoBuildHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet;

    bool m_enableBasicAuth;
    bool m_enableBasicAuthHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet;

    Aws::String m_ttl;
    bool m_ttlHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
