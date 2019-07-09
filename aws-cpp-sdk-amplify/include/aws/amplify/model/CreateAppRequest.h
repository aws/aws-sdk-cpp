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
#include <aws/amplify/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplify/model/AutoBranchCreationConfig.h>
#include <aws/amplify/model/CustomRule.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> Request structure used to create Apps in Amplify. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateAppRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API CreateAppRequest : public AmplifyRequest
  {
  public:
    CreateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApp"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> Name for the Amplify App </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name for the Amplify App </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name for the Amplify App </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name for the Amplify App </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name for the Amplify App </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name for the Amplify App </p>
     */
    inline CreateAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name for the Amplify App </p>
     */
    inline CreateAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name for the Amplify App </p>
     */
    inline CreateAppRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Description for an Amplify App </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> Description for an Amplify App </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> Description for an Amplify App </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> Description for an Amplify App </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> Description for an Amplify App </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> Description for an Amplify App </p>
     */
    inline CreateAppRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> Description for an Amplify App </p>
     */
    inline CreateAppRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> Description for an Amplify App </p>
     */
    inline CreateAppRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Repository for an Amplify App </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> Repository for an Amplify App </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> Repository for an Amplify App </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> Repository for an Amplify App </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> Repository for an Amplify App </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> Repository for an Amplify App </p>
     */
    inline CreateAppRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> Repository for an Amplify App </p>
     */
    inline CreateAppRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> Repository for an Amplify App </p>
     */
    inline CreateAppRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p> Platform / framework for an Amplify App </p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p> Platform / framework for an Amplify App </p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p> Platform / framework for an Amplify App </p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p> Platform / framework for an Amplify App </p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p> Platform / framework for an Amplify App </p>
     */
    inline CreateAppRequest& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p> Platform / framework for an Amplify App </p>
     */
    inline CreateAppRequest& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p> AWS IAM service role for an Amplify App </p>
     */
    inline const Aws::String& GetIamServiceRoleArn() const{ return m_iamServiceRoleArn; }

    /**
     * <p> AWS IAM service role for an Amplify App </p>
     */
    inline bool IamServiceRoleArnHasBeenSet() const { return m_iamServiceRoleArnHasBeenSet; }

    /**
     * <p> AWS IAM service role for an Amplify App </p>
     */
    inline void SetIamServiceRoleArn(const Aws::String& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = value; }

    /**
     * <p> AWS IAM service role for an Amplify App </p>
     */
    inline void SetIamServiceRoleArn(Aws::String&& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = std::move(value); }

    /**
     * <p> AWS IAM service role for an Amplify App </p>
     */
    inline void SetIamServiceRoleArn(const char* value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn.assign(value); }

    /**
     * <p> AWS IAM service role for an Amplify App </p>
     */
    inline CreateAppRequest& WithIamServiceRoleArn(const Aws::String& value) { SetIamServiceRoleArn(value); return *this;}

    /**
     * <p> AWS IAM service role for an Amplify App </p>
     */
    inline CreateAppRequest& WithIamServiceRoleArn(Aws::String&& value) { SetIamServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p> AWS IAM service role for an Amplify App </p>
     */
    inline CreateAppRequest& WithIamServiceRoleArn(const char* value) { SetIamServiceRoleArn(value); return *this;}


    /**
     * <p> OAuth token for 3rd party source control system for an Amplify App, used to
     * create webhook and read-only deploy key. OAuth token is not stored. </p>
     */
    inline const Aws::String& GetOauthToken() const{ return m_oauthToken; }

    /**
     * <p> OAuth token for 3rd party source control system for an Amplify App, used to
     * create webhook and read-only deploy key. OAuth token is not stored. </p>
     */
    inline bool OauthTokenHasBeenSet() const { return m_oauthTokenHasBeenSet; }

    /**
     * <p> OAuth token for 3rd party source control system for an Amplify App, used to
     * create webhook and read-only deploy key. OAuth token is not stored. </p>
     */
    inline void SetOauthToken(const Aws::String& value) { m_oauthTokenHasBeenSet = true; m_oauthToken = value; }

    /**
     * <p> OAuth token for 3rd party source control system for an Amplify App, used to
     * create webhook and read-only deploy key. OAuth token is not stored. </p>
     */
    inline void SetOauthToken(Aws::String&& value) { m_oauthTokenHasBeenSet = true; m_oauthToken = std::move(value); }

    /**
     * <p> OAuth token for 3rd party source control system for an Amplify App, used to
     * create webhook and read-only deploy key. OAuth token is not stored. </p>
     */
    inline void SetOauthToken(const char* value) { m_oauthTokenHasBeenSet = true; m_oauthToken.assign(value); }

    /**
     * <p> OAuth token for 3rd party source control system for an Amplify App, used to
     * create webhook and read-only deploy key. OAuth token is not stored. </p>
     */
    inline CreateAppRequest& WithOauthToken(const Aws::String& value) { SetOauthToken(value); return *this;}

    /**
     * <p> OAuth token for 3rd party source control system for an Amplify App, used to
     * create webhook and read-only deploy key. OAuth token is not stored. </p>
     */
    inline CreateAppRequest& WithOauthToken(Aws::String&& value) { SetOauthToken(std::move(value)); return *this;}

    /**
     * <p> OAuth token for 3rd party source control system for an Amplify App, used to
     * create webhook and read-only deploy key. OAuth token is not stored. </p>
     */
    inline CreateAppRequest& WithOauthToken(const char* value) { SetOauthToken(value); return *this;}


    /**
     * <p> Personal Access token for 3rd party source control system for an Amplify
     * App, used to create webhook and read-only deploy key. Token is not stored. </p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p> Personal Access token for 3rd party source control system for an Amplify
     * App, used to create webhook and read-only deploy key. Token is not stored. </p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p> Personal Access token for 3rd party source control system for an Amplify
     * App, used to create webhook and read-only deploy key. Token is not stored. </p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p> Personal Access token for 3rd party source control system for an Amplify
     * App, used to create webhook and read-only deploy key. Token is not stored. </p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p> Personal Access token for 3rd party source control system for an Amplify
     * App, used to create webhook and read-only deploy key. Token is not stored. </p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p> Personal Access token for 3rd party source control system for an Amplify
     * App, used to create webhook and read-only deploy key. Token is not stored. </p>
     */
    inline CreateAppRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p> Personal Access token for 3rd party source control system for an Amplify
     * App, used to create webhook and read-only deploy key. Token is not stored. </p>
     */
    inline CreateAppRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p> Personal Access token for 3rd party source control system for an Amplify
     * App, used to create webhook and read-only deploy key. Token is not stored. </p>
     */
    inline CreateAppRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline CreateAppRequest& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline CreateAppRequest& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline CreateAppRequest& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline CreateAppRequest& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline CreateAppRequest& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline CreateAppRequest& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline CreateAppRequest& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline CreateAppRequest& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment variables map for an Amplify App. </p>
     */
    inline CreateAppRequest& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p> Enable the auto building of branches for an Amplify App. </p>
     */
    inline bool GetEnableBranchAutoBuild() const{ return m_enableBranchAutoBuild; }

    /**
     * <p> Enable the auto building of branches for an Amplify App. </p>
     */
    inline bool EnableBranchAutoBuildHasBeenSet() const { return m_enableBranchAutoBuildHasBeenSet; }

    /**
     * <p> Enable the auto building of branches for an Amplify App. </p>
     */
    inline void SetEnableBranchAutoBuild(bool value) { m_enableBranchAutoBuildHasBeenSet = true; m_enableBranchAutoBuild = value; }

    /**
     * <p> Enable the auto building of branches for an Amplify App. </p>
     */
    inline CreateAppRequest& WithEnableBranchAutoBuild(bool value) { SetEnableBranchAutoBuild(value); return *this;}


    /**
     * <p> Enable Basic Authorization for an Amplify App, this will apply to all
     * branches part of this App. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }

    /**
     * <p> Enable Basic Authorization for an Amplify App, this will apply to all
     * branches part of this App. </p>
     */
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }

    /**
     * <p> Enable Basic Authorization for an Amplify App, this will apply to all
     * branches part of this App. </p>
     */
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }

    /**
     * <p> Enable Basic Authorization for an Amplify App, this will apply to all
     * branches part of this App. </p>
     */
    inline CreateAppRequest& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}


    /**
     * <p> Credentials for Basic Authorization for an Amplify App. </p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> Credentials for Basic Authorization for an Amplify App. </p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> Credentials for Basic Authorization for an Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> Credentials for Basic Authorization for an Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> Credentials for Basic Authorization for an Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }

    /**
     * <p> Credentials for Basic Authorization for an Amplify App. </p>
     */
    inline CreateAppRequest& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> Credentials for Basic Authorization for an Amplify App. </p>
     */
    inline CreateAppRequest& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}

    /**
     * <p> Credentials for Basic Authorization for an Amplify App. </p>
     */
    inline CreateAppRequest& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}


    /**
     * <p> Custom rewrite / redirect rules for an Amplify App. </p>
     */
    inline const Aws::Vector<CustomRule>& GetCustomRules() const{ return m_customRules; }

    /**
     * <p> Custom rewrite / redirect rules for an Amplify App. </p>
     */
    inline bool CustomRulesHasBeenSet() const { return m_customRulesHasBeenSet; }

    /**
     * <p> Custom rewrite / redirect rules for an Amplify App. </p>
     */
    inline void SetCustomRules(const Aws::Vector<CustomRule>& value) { m_customRulesHasBeenSet = true; m_customRules = value; }

    /**
     * <p> Custom rewrite / redirect rules for an Amplify App. </p>
     */
    inline void SetCustomRules(Aws::Vector<CustomRule>&& value) { m_customRulesHasBeenSet = true; m_customRules = std::move(value); }

    /**
     * <p> Custom rewrite / redirect rules for an Amplify App. </p>
     */
    inline CreateAppRequest& WithCustomRules(const Aws::Vector<CustomRule>& value) { SetCustomRules(value); return *this;}

    /**
     * <p> Custom rewrite / redirect rules for an Amplify App. </p>
     */
    inline CreateAppRequest& WithCustomRules(Aws::Vector<CustomRule>&& value) { SetCustomRules(std::move(value)); return *this;}

    /**
     * <p> Custom rewrite / redirect rules for an Amplify App. </p>
     */
    inline CreateAppRequest& AddCustomRules(const CustomRule& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(value); return *this; }

    /**
     * <p> Custom rewrite / redirect rules for an Amplify App. </p>
     */
    inline CreateAppRequest& AddCustomRules(CustomRule&& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(std::move(value)); return *this; }


    /**
     * <p> Tag for an Amplify App </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline CreateAppRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline CreateAppRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline CreateAppRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline CreateAppRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline CreateAppRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline CreateAppRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline CreateAppRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline CreateAppRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Tag for an Amplify App </p>
     */
    inline CreateAppRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> BuildSpec for an Amplify App </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }

    /**
     * <p> BuildSpec for an Amplify App </p>
     */
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }

    /**
     * <p> BuildSpec for an Amplify App </p>
     */
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }

    /**
     * <p> BuildSpec for an Amplify App </p>
     */
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }

    /**
     * <p> BuildSpec for an Amplify App </p>
     */
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }

    /**
     * <p> BuildSpec for an Amplify App </p>
     */
    inline CreateAppRequest& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}

    /**
     * <p> BuildSpec for an Amplify App </p>
     */
    inline CreateAppRequest& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}

    /**
     * <p> BuildSpec for an Amplify App </p>
     */
    inline CreateAppRequest& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}


    /**
     * <p> Enables automated branch creation for the Amplify App. </p>
     */
    inline bool GetEnableAutoBranchCreation() const{ return m_enableAutoBranchCreation; }

    /**
     * <p> Enables automated branch creation for the Amplify App. </p>
     */
    inline bool EnableAutoBranchCreationHasBeenSet() const { return m_enableAutoBranchCreationHasBeenSet; }

    /**
     * <p> Enables automated branch creation for the Amplify App. </p>
     */
    inline void SetEnableAutoBranchCreation(bool value) { m_enableAutoBranchCreationHasBeenSet = true; m_enableAutoBranchCreation = value; }

    /**
     * <p> Enables automated branch creation for the Amplify App. </p>
     */
    inline CreateAppRequest& WithEnableAutoBranchCreation(bool value) { SetEnableAutoBranchCreation(value); return *this;}


    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoBranchCreationPatterns() const{ return m_autoBranchCreationPatterns; }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline bool AutoBranchCreationPatternsHasBeenSet() const { return m_autoBranchCreationPatternsHasBeenSet; }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline void SetAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = value; }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline void SetAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = std::move(value); }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline CreateAppRequest& WithAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { SetAutoBranchCreationPatterns(value); return *this;}

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline CreateAppRequest& WithAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { SetAutoBranchCreationPatterns(std::move(value)); return *this;}

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline CreateAppRequest& AddAutoBranchCreationPatterns(const Aws::String& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline CreateAppRequest& AddAutoBranchCreationPatterns(Aws::String&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline CreateAppRequest& AddAutoBranchCreationPatterns(const char* value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }


    /**
     * <p> Automated branch creation config for the Amplify App. </p>
     */
    inline const AutoBranchCreationConfig& GetAutoBranchCreationConfig() const{ return m_autoBranchCreationConfig; }

    /**
     * <p> Automated branch creation config for the Amplify App. </p>
     */
    inline bool AutoBranchCreationConfigHasBeenSet() const { return m_autoBranchCreationConfigHasBeenSet; }

    /**
     * <p> Automated branch creation config for the Amplify App. </p>
     */
    inline void SetAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = value; }

    /**
     * <p> Automated branch creation config for the Amplify App. </p>
     */
    inline void SetAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = std::move(value); }

    /**
     * <p> Automated branch creation config for the Amplify App. </p>
     */
    inline CreateAppRequest& WithAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { SetAutoBranchCreationConfig(value); return *this;}

    /**
     * <p> Automated branch creation config for the Amplify App. </p>
     */
    inline CreateAppRequest& WithAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { SetAutoBranchCreationConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet;

    Platform m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_iamServiceRoleArn;
    bool m_iamServiceRoleArnHasBeenSet;

    Aws::String m_oauthToken;
    bool m_oauthTokenHasBeenSet;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet;

    bool m_enableBranchAutoBuild;
    bool m_enableBranchAutoBuildHasBeenSet;

    bool m_enableBasicAuth;
    bool m_enableBasicAuthHasBeenSet;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet;

    Aws::Vector<CustomRule> m_customRules;
    bool m_customRulesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet;

    bool m_enableAutoBranchCreation;
    bool m_enableAutoBranchCreationHasBeenSet;

    Aws::Vector<Aws::String> m_autoBranchCreationPatterns;
    bool m_autoBranchCreationPatternsHasBeenSet;

    AutoBranchCreationConfig m_autoBranchCreationConfig;
    bool m_autoBranchCreationConfigHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
