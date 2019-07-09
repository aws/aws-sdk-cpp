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
   * <p> Request structure for update App request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateAppRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API UpdateAppRequest : public AmplifyRequest
  {
  public:
    UpdateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApp"; }

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
    inline UpdateAppRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> Unique Id for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> Name for an Amplify App. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name for an Amplify App. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name for an Amplify App. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name for an Amplify App. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name for an Amplify App. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Description for an Amplify App. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> Description for an Amplify App. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> Description for an Amplify App. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> Description for an Amplify App. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> Description for an Amplify App. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> Description for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> Description for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> Description for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> Platform for an Amplify App. </p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p> Platform for an Amplify App. </p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p> Platform for an Amplify App. </p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p> Platform for an Amplify App. </p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p> Platform for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p> Platform for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p> IAM service role for an Amplify App. </p>
     */
    inline const Aws::String& GetIamServiceRoleArn() const{ return m_iamServiceRoleArn; }

    /**
     * <p> IAM service role for an Amplify App. </p>
     */
    inline bool IamServiceRoleArnHasBeenSet() const { return m_iamServiceRoleArnHasBeenSet; }

    /**
     * <p> IAM service role for an Amplify App. </p>
     */
    inline void SetIamServiceRoleArn(const Aws::String& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = value; }

    /**
     * <p> IAM service role for an Amplify App. </p>
     */
    inline void SetIamServiceRoleArn(Aws::String&& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = std::move(value); }

    /**
     * <p> IAM service role for an Amplify App. </p>
     */
    inline void SetIamServiceRoleArn(const char* value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn.assign(value); }

    /**
     * <p> IAM service role for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithIamServiceRoleArn(const Aws::String& value) { SetIamServiceRoleArn(value); return *this;}

    /**
     * <p> IAM service role for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithIamServiceRoleArn(Aws::String&& value) { SetIamServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p> IAM service role for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithIamServiceRoleArn(const char* value) { SetIamServiceRoleArn(value); return *this;}


    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables for an Amplify App. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p> Enables branch auto-building for an Amplify App. </p>
     */
    inline bool GetEnableBranchAutoBuild() const{ return m_enableBranchAutoBuild; }

    /**
     * <p> Enables branch auto-building for an Amplify App. </p>
     */
    inline bool EnableBranchAutoBuildHasBeenSet() const { return m_enableBranchAutoBuildHasBeenSet; }

    /**
     * <p> Enables branch auto-building for an Amplify App. </p>
     */
    inline void SetEnableBranchAutoBuild(bool value) { m_enableBranchAutoBuildHasBeenSet = true; m_enableBranchAutoBuild = value; }

    /**
     * <p> Enables branch auto-building for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithEnableBranchAutoBuild(bool value) { SetEnableBranchAutoBuild(value); return *this;}


    /**
     * <p> Enables Basic Authorization for an Amplify App. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }

    /**
     * <p> Enables Basic Authorization for an Amplify App. </p>
     */
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }

    /**
     * <p> Enables Basic Authorization for an Amplify App. </p>
     */
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }

    /**
     * <p> Enables Basic Authorization for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}


    /**
     * <p> Basic Authorization credentials for an Amplify App. </p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> Basic Authorization credentials for an Amplify App. </p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> Basic Authorization credentials for an Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> Basic Authorization credentials for an Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> Basic Authorization credentials for an Amplify App. </p>
     */
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }

    /**
     * <p> Basic Authorization credentials for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> Basic Authorization credentials for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}

    /**
     * <p> Basic Authorization credentials for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}


    /**
     * <p> Custom redirect / rewrite rules for an Amplify App. </p>
     */
    inline const Aws::Vector<CustomRule>& GetCustomRules() const{ return m_customRules; }

    /**
     * <p> Custom redirect / rewrite rules for an Amplify App. </p>
     */
    inline bool CustomRulesHasBeenSet() const { return m_customRulesHasBeenSet; }

    /**
     * <p> Custom redirect / rewrite rules for an Amplify App. </p>
     */
    inline void SetCustomRules(const Aws::Vector<CustomRule>& value) { m_customRulesHasBeenSet = true; m_customRules = value; }

    /**
     * <p> Custom redirect / rewrite rules for an Amplify App. </p>
     */
    inline void SetCustomRules(Aws::Vector<CustomRule>&& value) { m_customRulesHasBeenSet = true; m_customRules = std::move(value); }

    /**
     * <p> Custom redirect / rewrite rules for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithCustomRules(const Aws::Vector<CustomRule>& value) { SetCustomRules(value); return *this;}

    /**
     * <p> Custom redirect / rewrite rules for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithCustomRules(Aws::Vector<CustomRule>&& value) { SetCustomRules(std::move(value)); return *this;}

    /**
     * <p> Custom redirect / rewrite rules for an Amplify App. </p>
     */
    inline UpdateAppRequest& AddCustomRules(const CustomRule& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(value); return *this; }

    /**
     * <p> Custom redirect / rewrite rules for an Amplify App. </p>
     */
    inline UpdateAppRequest& AddCustomRules(CustomRule&& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(std::move(value)); return *this; }


    /**
     * <p> BuildSpec for an Amplify App. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }

    /**
     * <p> BuildSpec for an Amplify App. </p>
     */
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }

    /**
     * <p> BuildSpec for an Amplify App. </p>
     */
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }

    /**
     * <p> BuildSpec for an Amplify App. </p>
     */
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }

    /**
     * <p> BuildSpec for an Amplify App. </p>
     */
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }

    /**
     * <p> BuildSpec for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}

    /**
     * <p> BuildSpec for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}

    /**
     * <p> BuildSpec for an Amplify App. </p>
     */
    inline UpdateAppRequest& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}


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
    inline UpdateAppRequest& WithEnableAutoBranchCreation(bool value) { SetEnableAutoBranchCreation(value); return *this;}


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
    inline UpdateAppRequest& WithAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { SetAutoBranchCreationPatterns(value); return *this;}

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline UpdateAppRequest& WithAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { SetAutoBranchCreationPatterns(std::move(value)); return *this;}

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline UpdateAppRequest& AddAutoBranchCreationPatterns(const Aws::String& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline UpdateAppRequest& AddAutoBranchCreationPatterns(Aws::String&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p> Automated branch creation glob patterns for the Amplify App. </p>
     */
    inline UpdateAppRequest& AddAutoBranchCreationPatterns(const char* value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }


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
    inline UpdateAppRequest& WithAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { SetAutoBranchCreationConfig(value); return *this;}

    /**
     * <p> Automated branch creation config for the Amplify App. </p>
     */
    inline UpdateAppRequest& WithAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { SetAutoBranchCreationConfig(std::move(value)); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Platform m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_iamServiceRoleArn;
    bool m_iamServiceRoleArnHasBeenSet;

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
