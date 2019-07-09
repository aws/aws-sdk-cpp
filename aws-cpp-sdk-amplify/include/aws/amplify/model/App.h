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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplify/model/Platform.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplify/model/ProductionBranch.h>
#include <aws/amplify/model/AutoBranchCreationConfig.h>
#include <aws/amplify/model/CustomRule.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> Amplify App represents different branches of a repository for building,
   * deploying, and hosting. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/App">AWS API
   * Reference</a></p>
   */
  class AWS_AMPLIFY_API App
  {
  public:
    App();
    App(Aws::Utils::Json::JsonView jsonValue);
    App& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Unique Id for the Amplify App. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> Unique Id for the Amplify App. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> Unique Id for the Amplify App. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> Unique Id for the Amplify App. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> Unique Id for the Amplify App. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> Unique Id for the Amplify App. </p>
     */
    inline App& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> Unique Id for the Amplify App. </p>
     */
    inline App& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for the Amplify App. </p>
     */
    inline App& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> ARN for the Amplify App. </p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p> ARN for the Amplify App. </p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p> ARN for the Amplify App. </p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p> ARN for the Amplify App. </p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p> ARN for the Amplify App. </p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p> ARN for the Amplify App. </p>
     */
    inline App& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p> ARN for the Amplify App. </p>
     */
    inline App& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p> ARN for the Amplify App. </p>
     */
    inline App& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p> Name for the Amplify App. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name for the Amplify App. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name for the Amplify App. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name for the Amplify App. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name for the Amplify App. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name for the Amplify App. </p>
     */
    inline App& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name for the Amplify App. </p>
     */
    inline App& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name for the Amplify App. </p>
     */
    inline App& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Tag for Amplify App. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline App& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline App& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline App& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline App& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline App& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline App& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline App& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline App& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Tag for Amplify App. </p>
     */
    inline App& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> Description for the Amplify App. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> Description for the Amplify App. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> Description for the Amplify App. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> Description for the Amplify App. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> Description for the Amplify App. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> Description for the Amplify App. </p>
     */
    inline App& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> Description for the Amplify App. </p>
     */
    inline App& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> Description for the Amplify App. </p>
     */
    inline App& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Repository for the Amplify App. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> Repository for the Amplify App. </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> Repository for the Amplify App. </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> Repository for the Amplify App. </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> Repository for the Amplify App. </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> Repository for the Amplify App. </p>
     */
    inline App& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> Repository for the Amplify App. </p>
     */
    inline App& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> Repository for the Amplify App. </p>
     */
    inline App& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p> Platform for the Amplify App. </p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p> Platform for the Amplify App. </p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p> Platform for the Amplify App. </p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p> Platform for the Amplify App. </p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p> Platform for the Amplify App. </p>
     */
    inline App& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p> Platform for the Amplify App. </p>
     */
    inline App& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p> Create date / time for the Amplify App. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p> Create date / time for the Amplify App. </p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p> Create date / time for the Amplify App. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p> Create date / time for the Amplify App. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p> Create date / time for the Amplify App. </p>
     */
    inline App& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p> Create date / time for the Amplify App. </p>
     */
    inline App& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p> Update date / time for the Amplify App. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p> Update date / time for the Amplify App. </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p> Update date / time for the Amplify App. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p> Update date / time for the Amplify App. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p> Update date / time for the Amplify App. </p>
     */
    inline App& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> Update date / time for the Amplify App. </p>
     */
    inline App& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p> IAM service role ARN for the Amplify App. </p>
     */
    inline const Aws::String& GetIamServiceRoleArn() const{ return m_iamServiceRoleArn; }

    /**
     * <p> IAM service role ARN for the Amplify App. </p>
     */
    inline bool IamServiceRoleArnHasBeenSet() const { return m_iamServiceRoleArnHasBeenSet; }

    /**
     * <p> IAM service role ARN for the Amplify App. </p>
     */
    inline void SetIamServiceRoleArn(const Aws::String& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = value; }

    /**
     * <p> IAM service role ARN for the Amplify App. </p>
     */
    inline void SetIamServiceRoleArn(Aws::String&& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = std::move(value); }

    /**
     * <p> IAM service role ARN for the Amplify App. </p>
     */
    inline void SetIamServiceRoleArn(const char* value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn.assign(value); }

    /**
     * <p> IAM service role ARN for the Amplify App. </p>
     */
    inline App& WithIamServiceRoleArn(const Aws::String& value) { SetIamServiceRoleArn(value); return *this;}

    /**
     * <p> IAM service role ARN for the Amplify App. </p>
     */
    inline App& WithIamServiceRoleArn(Aws::String&& value) { SetIamServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p> IAM service role ARN for the Amplify App. </p>
     */
    inline App& WithIamServiceRoleArn(const char* value) { SetIamServiceRoleArn(value); return *this;}


    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline App& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline App& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline App& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline App& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline App& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline App& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline App& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline App& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables for the Amplify App. </p>
     */
    inline App& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p> Default domain for the Amplify App. </p>
     */
    inline const Aws::String& GetDefaultDomain() const{ return m_defaultDomain; }

    /**
     * <p> Default domain for the Amplify App. </p>
     */
    inline bool DefaultDomainHasBeenSet() const { return m_defaultDomainHasBeenSet; }

    /**
     * <p> Default domain for the Amplify App. </p>
     */
    inline void SetDefaultDomain(const Aws::String& value) { m_defaultDomainHasBeenSet = true; m_defaultDomain = value; }

    /**
     * <p> Default domain for the Amplify App. </p>
     */
    inline void SetDefaultDomain(Aws::String&& value) { m_defaultDomainHasBeenSet = true; m_defaultDomain = std::move(value); }

    /**
     * <p> Default domain for the Amplify App. </p>
     */
    inline void SetDefaultDomain(const char* value) { m_defaultDomainHasBeenSet = true; m_defaultDomain.assign(value); }

    /**
     * <p> Default domain for the Amplify App. </p>
     */
    inline App& WithDefaultDomain(const Aws::String& value) { SetDefaultDomain(value); return *this;}

    /**
     * <p> Default domain for the Amplify App. </p>
     */
    inline App& WithDefaultDomain(Aws::String&& value) { SetDefaultDomain(std::move(value)); return *this;}

    /**
     * <p> Default domain for the Amplify App. </p>
     */
    inline App& WithDefaultDomain(const char* value) { SetDefaultDomain(value); return *this;}


    /**
     * <p> Enables auto-building of branches for the Amplify App. </p>
     */
    inline bool GetEnableBranchAutoBuild() const{ return m_enableBranchAutoBuild; }

    /**
     * <p> Enables auto-building of branches for the Amplify App. </p>
     */
    inline bool EnableBranchAutoBuildHasBeenSet() const { return m_enableBranchAutoBuildHasBeenSet; }

    /**
     * <p> Enables auto-building of branches for the Amplify App. </p>
     */
    inline void SetEnableBranchAutoBuild(bool value) { m_enableBranchAutoBuildHasBeenSet = true; m_enableBranchAutoBuild = value; }

    /**
     * <p> Enables auto-building of branches for the Amplify App. </p>
     */
    inline App& WithEnableBranchAutoBuild(bool value) { SetEnableBranchAutoBuild(value); return *this;}


    /**
     * <p> Enables Basic Authorization for branches for the Amplify App. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }

    /**
     * <p> Enables Basic Authorization for branches for the Amplify App. </p>
     */
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }

    /**
     * <p> Enables Basic Authorization for branches for the Amplify App. </p>
     */
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }

    /**
     * <p> Enables Basic Authorization for branches for the Amplify App. </p>
     */
    inline App& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}


    /**
     * <p> Basic Authorization credentials for branches for the Amplify App. </p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> Basic Authorization credentials for branches for the Amplify App. </p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> Basic Authorization credentials for branches for the Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> Basic Authorization credentials for branches for the Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> Basic Authorization credentials for branches for the Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }

    /**
     * <p> Basic Authorization credentials for branches for the Amplify App. </p>
     */
    inline App& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> Basic Authorization credentials for branches for the Amplify App. </p>
     */
    inline App& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}

    /**
     * <p> Basic Authorization credentials for branches for the Amplify App. </p>
     */
    inline App& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}


    /**
     * <p> Custom redirect / rewrite rules for the Amplify App. </p>
     */
    inline const Aws::Vector<CustomRule>& GetCustomRules() const{ return m_customRules; }

    /**
     * <p> Custom redirect / rewrite rules for the Amplify App. </p>
     */
    inline bool CustomRulesHasBeenSet() const { return m_customRulesHasBeenSet; }

    /**
     * <p> Custom redirect / rewrite rules for the Amplify App. </p>
     */
    inline void SetCustomRules(const Aws::Vector<CustomRule>& value) { m_customRulesHasBeenSet = true; m_customRules = value; }

    /**
     * <p> Custom redirect / rewrite rules for the Amplify App. </p>
     */
    inline void SetCustomRules(Aws::Vector<CustomRule>&& value) { m_customRulesHasBeenSet = true; m_customRules = std::move(value); }

    /**
     * <p> Custom redirect / rewrite rules for the Amplify App. </p>
     */
    inline App& WithCustomRules(const Aws::Vector<CustomRule>& value) { SetCustomRules(value); return *this;}

    /**
     * <p> Custom redirect / rewrite rules for the Amplify App. </p>
     */
    inline App& WithCustomRules(Aws::Vector<CustomRule>&& value) { SetCustomRules(std::move(value)); return *this;}

    /**
     * <p> Custom redirect / rewrite rules for the Amplify App. </p>
     */
    inline App& AddCustomRules(const CustomRule& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(value); return *this; }

    /**
     * <p> Custom redirect / rewrite rules for the Amplify App. </p>
     */
    inline App& AddCustomRules(CustomRule&& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(std::move(value)); return *this; }


    /**
     * <p> Structure with Production Branch information. </p>
     */
    inline const ProductionBranch& GetProductionBranch() const{ return m_productionBranch; }

    /**
     * <p> Structure with Production Branch information. </p>
     */
    inline bool ProductionBranchHasBeenSet() const { return m_productionBranchHasBeenSet; }

    /**
     * <p> Structure with Production Branch information. </p>
     */
    inline void SetProductionBranch(const ProductionBranch& value) { m_productionBranchHasBeenSet = true; m_productionBranch = value; }

    /**
     * <p> Structure with Production Branch information. </p>
     */
    inline void SetProductionBranch(ProductionBranch&& value) { m_productionBranchHasBeenSet = true; m_productionBranch = std::move(value); }

    /**
     * <p> Structure with Production Branch information. </p>
     */
    inline App& WithProductionBranch(const ProductionBranch& value) { SetProductionBranch(value); return *this;}

    /**
     * <p> Structure with Production Branch information. </p>
     */
    inline App& WithProductionBranch(ProductionBranch&& value) { SetProductionBranch(std::move(value)); return *this;}


    /**
     * <p> BuildSpec content for Amplify App. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }

    /**
     * <p> BuildSpec content for Amplify App. </p>
     */
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }

    /**
     * <p> BuildSpec content for Amplify App. </p>
     */
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }

    /**
     * <p> BuildSpec content for Amplify App. </p>
     */
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }

    /**
     * <p> BuildSpec content for Amplify App. </p>
     */
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }

    /**
     * <p> BuildSpec content for Amplify App. </p>
     */
    inline App& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}

    /**
     * <p> BuildSpec content for Amplify App. </p>
     */
    inline App& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}

    /**
     * <p> BuildSpec content for Amplify App. </p>
     */
    inline App& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}


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
    inline App& WithEnableAutoBranchCreation(bool value) { SetEnableAutoBranchCreation(value); return *this;}


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
    inline App& WithAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { SetAutoBranchCreationPatterns(value); return *this;}

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline App& WithAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { SetAutoBranchCreationPatterns(std::move(value)); return *this;}

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline App& AddAutoBranchCreationPatterns(const Aws::String& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline App& AddAutoBranchCreationPatterns(Aws::String&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline App& AddAutoBranchCreationPatterns(const char* value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }


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
    inline App& WithAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { SetAutoBranchCreationConfig(value); return *this;}

    /**
     * <p> Automated branch creation config for the Amplify App. </p>
     */
    inline App& WithAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { SetAutoBranchCreationConfig(std::move(value)); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet;

    Platform m_platform;
    bool m_platformHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet;

    Aws::String m_iamServiceRoleArn;
    bool m_iamServiceRoleArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet;

    Aws::String m_defaultDomain;
    bool m_defaultDomainHasBeenSet;

    bool m_enableBranchAutoBuild;
    bool m_enableBranchAutoBuildHasBeenSet;

    bool m_enableBasicAuth;
    bool m_enableBasicAuthHasBeenSet;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet;

    Aws::Vector<CustomRule> m_customRules;
    bool m_customRulesHasBeenSet;

    ProductionBranch m_productionBranch;
    bool m_productionBranchHasBeenSet;

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
