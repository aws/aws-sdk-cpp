/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p> The request structure for the update app request. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateAppRequest">AWS
   * API Reference</a></p>
   */
  class UpdateAppRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API UpdateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApp"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> The name for an Amplify app. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name for an Amplify app. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name for an Amplify app. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name for an Amplify app. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name for an Amplify app. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description for an Amplify app. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description for an Amplify app. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description for an Amplify app. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description for an Amplify app. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description for an Amplify app. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The platform for the Amplify app. For a static app, set the platform type to
     * <code>WEB</code>. For a dynamic server-side rendered (SSR) app, set the platform
     * type to <code>WEB_COMPUTE</code>. For an app requiring Amplify Hosting's
     * original SSR support only, set the platform type to
     * <code>WEB_DYNAMIC</code>.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p> The platform for the Amplify app. For a static app, set the platform type to
     * <code>WEB</code>. For a dynamic server-side rendered (SSR) app, set the platform
     * type to <code>WEB_COMPUTE</code>. For an app requiring Amplify Hosting's
     * original SSR support only, set the platform type to
     * <code>WEB_DYNAMIC</code>.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p> The platform for the Amplify app. For a static app, set the platform type to
     * <code>WEB</code>. For a dynamic server-side rendered (SSR) app, set the platform
     * type to <code>WEB_COMPUTE</code>. For an app requiring Amplify Hosting's
     * original SSR support only, set the platform type to
     * <code>WEB_DYNAMIC</code>.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p> The platform for the Amplify app. For a static app, set the platform type to
     * <code>WEB</code>. For a dynamic server-side rendered (SSR) app, set the platform
     * type to <code>WEB_COMPUTE</code>. For an app requiring Amplify Hosting's
     * original SSR support only, set the platform type to
     * <code>WEB_DYNAMIC</code>.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p> The platform for the Amplify app. For a static app, set the platform type to
     * <code>WEB</code>. For a dynamic server-side rendered (SSR) app, set the platform
     * type to <code>WEB_COMPUTE</code>. For an app requiring Amplify Hosting's
     * original SSR support only, set the platform type to
     * <code>WEB_DYNAMIC</code>.</p>
     */
    inline UpdateAppRequest& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p> The platform for the Amplify app. For a static app, set the platform type to
     * <code>WEB</code>. For a dynamic server-side rendered (SSR) app, set the platform
     * type to <code>WEB_COMPUTE</code>. For an app requiring Amplify Hosting's
     * original SSR support only, set the platform type to
     * <code>WEB_DYNAMIC</code>.</p>
     */
    inline UpdateAppRequest& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p> The AWS Identity and Access Management (IAM) service role for an Amplify
     * app. </p>
     */
    inline const Aws::String& GetIamServiceRoleArn() const{ return m_iamServiceRoleArn; }

    /**
     * <p> The AWS Identity and Access Management (IAM) service role for an Amplify
     * app. </p>
     */
    inline bool IamServiceRoleArnHasBeenSet() const { return m_iamServiceRoleArnHasBeenSet; }

    /**
     * <p> The AWS Identity and Access Management (IAM) service role for an Amplify
     * app. </p>
     */
    inline void SetIamServiceRoleArn(const Aws::String& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = value; }

    /**
     * <p> The AWS Identity and Access Management (IAM) service role for an Amplify
     * app. </p>
     */
    inline void SetIamServiceRoleArn(Aws::String&& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = std::move(value); }

    /**
     * <p> The AWS Identity and Access Management (IAM) service role for an Amplify
     * app. </p>
     */
    inline void SetIamServiceRoleArn(const char* value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn.assign(value); }

    /**
     * <p> The AWS Identity and Access Management (IAM) service role for an Amplify
     * app. </p>
     */
    inline UpdateAppRequest& WithIamServiceRoleArn(const Aws::String& value) { SetIamServiceRoleArn(value); return *this;}

    /**
     * <p> The AWS Identity and Access Management (IAM) service role for an Amplify
     * app. </p>
     */
    inline UpdateAppRequest& WithIamServiceRoleArn(Aws::String&& value) { SetIamServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p> The AWS Identity and Access Management (IAM) service role for an Amplify
     * app. </p>
     */
    inline UpdateAppRequest& WithIamServiceRoleArn(const char* value) { SetIamServiceRoleArn(value); return *this;}


    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> The environment variables for an Amplify app. </p>
     */
    inline UpdateAppRequest& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p> Enables branch auto-building for an Amplify app. </p>
     */
    inline bool GetEnableBranchAutoBuild() const{ return m_enableBranchAutoBuild; }

    /**
     * <p> Enables branch auto-building for an Amplify app. </p>
     */
    inline bool EnableBranchAutoBuildHasBeenSet() const { return m_enableBranchAutoBuildHasBeenSet; }

    /**
     * <p> Enables branch auto-building for an Amplify app. </p>
     */
    inline void SetEnableBranchAutoBuild(bool value) { m_enableBranchAutoBuildHasBeenSet = true; m_enableBranchAutoBuild = value; }

    /**
     * <p> Enables branch auto-building for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithEnableBranchAutoBuild(bool value) { SetEnableBranchAutoBuild(value); return *this;}


    /**
     * <p> Automatically disconnects a branch in the Amplify Console when you delete a
     * branch from your Git repository. </p>
     */
    inline bool GetEnableBranchAutoDeletion() const{ return m_enableBranchAutoDeletion; }

    /**
     * <p> Automatically disconnects a branch in the Amplify Console when you delete a
     * branch from your Git repository. </p>
     */
    inline bool EnableBranchAutoDeletionHasBeenSet() const { return m_enableBranchAutoDeletionHasBeenSet; }

    /**
     * <p> Automatically disconnects a branch in the Amplify Console when you delete a
     * branch from your Git repository. </p>
     */
    inline void SetEnableBranchAutoDeletion(bool value) { m_enableBranchAutoDeletionHasBeenSet = true; m_enableBranchAutoDeletion = value; }

    /**
     * <p> Automatically disconnects a branch in the Amplify Console when you delete a
     * branch from your Git repository. </p>
     */
    inline UpdateAppRequest& WithEnableBranchAutoDeletion(bool value) { SetEnableBranchAutoDeletion(value); return *this;}


    /**
     * <p> Enables basic authorization for an Amplify app. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }

    /**
     * <p> Enables basic authorization for an Amplify app. </p>
     */
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }

    /**
     * <p> Enables basic authorization for an Amplify app. </p>
     */
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }

    /**
     * <p> Enables basic authorization for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}


    /**
     * <p> The basic authorization credentials for an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> The basic authorization credentials for an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> The basic authorization credentials for an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> The basic authorization credentials for an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> The basic authorization credentials for an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }

    /**
     * <p> The basic authorization credentials for an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline UpdateAppRequest& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> The basic authorization credentials for an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline UpdateAppRequest& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}

    /**
     * <p> The basic authorization credentials for an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline UpdateAppRequest& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}


    /**
     * <p> The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline const Aws::Vector<CustomRule>& GetCustomRules() const{ return m_customRules; }

    /**
     * <p> The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline bool CustomRulesHasBeenSet() const { return m_customRulesHasBeenSet; }

    /**
     * <p> The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline void SetCustomRules(const Aws::Vector<CustomRule>& value) { m_customRulesHasBeenSet = true; m_customRules = value; }

    /**
     * <p> The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline void SetCustomRules(Aws::Vector<CustomRule>&& value) { m_customRulesHasBeenSet = true; m_customRules = std::move(value); }

    /**
     * <p> The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithCustomRules(const Aws::Vector<CustomRule>& value) { SetCustomRules(value); return *this;}

    /**
     * <p> The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithCustomRules(Aws::Vector<CustomRule>&& value) { SetCustomRules(std::move(value)); return *this;}

    /**
     * <p> The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline UpdateAppRequest& AddCustomRules(const CustomRule& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(value); return *this; }

    /**
     * <p> The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline UpdateAppRequest& AddCustomRules(CustomRule&& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(std::move(value)); return *this; }


    /**
     * <p> The build specification (build spec) for an Amplify app. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }

    /**
     * <p> The build specification (build spec) for an Amplify app. </p>
     */
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }

    /**
     * <p> The build specification (build spec) for an Amplify app. </p>
     */
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }

    /**
     * <p> The build specification (build spec) for an Amplify app. </p>
     */
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }

    /**
     * <p> The build specification (build spec) for an Amplify app. </p>
     */
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }

    /**
     * <p> The build specification (build spec) for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}

    /**
     * <p> The build specification (build spec) for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}

    /**
     * <p> The build specification (build spec) for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}


    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline const Aws::String& GetCustomHeaders() const{ return m_customHeaders; }

    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }

    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline void SetCustomHeaders(const Aws::String& value) { m_customHeadersHasBeenSet = true; m_customHeaders = value; }

    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline void SetCustomHeaders(Aws::String&& value) { m_customHeadersHasBeenSet = true; m_customHeaders = std::move(value); }

    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline void SetCustomHeaders(const char* value) { m_customHeadersHasBeenSet = true; m_customHeaders.assign(value); }

    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline UpdateAppRequest& WithCustomHeaders(const Aws::String& value) { SetCustomHeaders(value); return *this;}

    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline UpdateAppRequest& WithCustomHeaders(Aws::String&& value) { SetCustomHeaders(std::move(value)); return *this;}

    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline UpdateAppRequest& WithCustomHeaders(const char* value) { SetCustomHeaders(value); return *this;}


    /**
     * <p> Enables automated branch creation for an Amplify app. </p>
     */
    inline bool GetEnableAutoBranchCreation() const{ return m_enableAutoBranchCreation; }

    /**
     * <p> Enables automated branch creation for an Amplify app. </p>
     */
    inline bool EnableAutoBranchCreationHasBeenSet() const { return m_enableAutoBranchCreationHasBeenSet; }

    /**
     * <p> Enables automated branch creation for an Amplify app. </p>
     */
    inline void SetEnableAutoBranchCreation(bool value) { m_enableAutoBranchCreationHasBeenSet = true; m_enableAutoBranchCreation = value; }

    /**
     * <p> Enables automated branch creation for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithEnableAutoBranchCreation(bool value) { SetEnableAutoBranchCreation(value); return *this;}


    /**
     * <p> Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoBranchCreationPatterns() const{ return m_autoBranchCreationPatterns; }

    /**
     * <p> Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline bool AutoBranchCreationPatternsHasBeenSet() const { return m_autoBranchCreationPatternsHasBeenSet; }

    /**
     * <p> Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline void SetAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = value; }

    /**
     * <p> Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline void SetAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = std::move(value); }

    /**
     * <p> Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline UpdateAppRequest& WithAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { SetAutoBranchCreationPatterns(value); return *this;}

    /**
     * <p> Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline UpdateAppRequest& WithAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { SetAutoBranchCreationPatterns(std::move(value)); return *this;}

    /**
     * <p> Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline UpdateAppRequest& AddAutoBranchCreationPatterns(const Aws::String& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }

    /**
     * <p> Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline UpdateAppRequest& AddAutoBranchCreationPatterns(Aws::String&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p> Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline UpdateAppRequest& AddAutoBranchCreationPatterns(const char* value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }


    /**
     * <p> The automated branch creation configuration for an Amplify app. </p>
     */
    inline const AutoBranchCreationConfig& GetAutoBranchCreationConfig() const{ return m_autoBranchCreationConfig; }

    /**
     * <p> The automated branch creation configuration for an Amplify app. </p>
     */
    inline bool AutoBranchCreationConfigHasBeenSet() const { return m_autoBranchCreationConfigHasBeenSet; }

    /**
     * <p> The automated branch creation configuration for an Amplify app. </p>
     */
    inline void SetAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = value; }

    /**
     * <p> The automated branch creation configuration for an Amplify app. </p>
     */
    inline void SetAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = std::move(value); }

    /**
     * <p> The automated branch creation configuration for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { SetAutoBranchCreationConfig(value); return *this;}

    /**
     * <p> The automated branch creation configuration for an Amplify app. </p>
     */
    inline UpdateAppRequest& WithAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { SetAutoBranchCreationConfig(std::move(value)); return *this;}


    /**
     * <p> The name of the repository for an Amplify app </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p> The name of the repository for an Amplify app </p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p> The name of the repository for an Amplify app </p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p> The name of the repository for an Amplify app </p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p> The name of the repository for an Amplify app </p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p> The name of the repository for an Amplify app </p>
     */
    inline UpdateAppRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p> The name of the repository for an Amplify app </p>
     */
    inline UpdateAppRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p> The name of the repository for an Amplify app </p>
     */
    inline UpdateAppRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>The OAuth token for a third-party source control system for an Amplify app.
     * The OAuth token is used to create a webhook and a read-only deploy key using SSH
     * cloning. The OAuth token is not stored.</p> <p>Use <code>oauthToken</code> for
     * repository providers other than GitHub, such as Bitbucket or CodeCommit.</p>
     * <p>To authorize access to GitHub as your repository provider, use
     * <code>accessToken</code>.</p> <p>You must specify either <code>oauthToken</code>
     * or <code>accessToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline const Aws::String& GetOauthToken() const{ return m_oauthToken; }

    /**
     * <p>The OAuth token for a third-party source control system for an Amplify app.
     * The OAuth token is used to create a webhook and a read-only deploy key using SSH
     * cloning. The OAuth token is not stored.</p> <p>Use <code>oauthToken</code> for
     * repository providers other than GitHub, such as Bitbucket or CodeCommit.</p>
     * <p>To authorize access to GitHub as your repository provider, use
     * <code>accessToken</code>.</p> <p>You must specify either <code>oauthToken</code>
     * or <code>accessToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline bool OauthTokenHasBeenSet() const { return m_oauthTokenHasBeenSet; }

    /**
     * <p>The OAuth token for a third-party source control system for an Amplify app.
     * The OAuth token is used to create a webhook and a read-only deploy key using SSH
     * cloning. The OAuth token is not stored.</p> <p>Use <code>oauthToken</code> for
     * repository providers other than GitHub, such as Bitbucket or CodeCommit.</p>
     * <p>To authorize access to GitHub as your repository provider, use
     * <code>accessToken</code>.</p> <p>You must specify either <code>oauthToken</code>
     * or <code>accessToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline void SetOauthToken(const Aws::String& value) { m_oauthTokenHasBeenSet = true; m_oauthToken = value; }

    /**
     * <p>The OAuth token for a third-party source control system for an Amplify app.
     * The OAuth token is used to create a webhook and a read-only deploy key using SSH
     * cloning. The OAuth token is not stored.</p> <p>Use <code>oauthToken</code> for
     * repository providers other than GitHub, such as Bitbucket or CodeCommit.</p>
     * <p>To authorize access to GitHub as your repository provider, use
     * <code>accessToken</code>.</p> <p>You must specify either <code>oauthToken</code>
     * or <code>accessToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline void SetOauthToken(Aws::String&& value) { m_oauthTokenHasBeenSet = true; m_oauthToken = std::move(value); }

    /**
     * <p>The OAuth token for a third-party source control system for an Amplify app.
     * The OAuth token is used to create a webhook and a read-only deploy key using SSH
     * cloning. The OAuth token is not stored.</p> <p>Use <code>oauthToken</code> for
     * repository providers other than GitHub, such as Bitbucket or CodeCommit.</p>
     * <p>To authorize access to GitHub as your repository provider, use
     * <code>accessToken</code>.</p> <p>You must specify either <code>oauthToken</code>
     * or <code>accessToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline void SetOauthToken(const char* value) { m_oauthTokenHasBeenSet = true; m_oauthToken.assign(value); }

    /**
     * <p>The OAuth token for a third-party source control system for an Amplify app.
     * The OAuth token is used to create a webhook and a read-only deploy key using SSH
     * cloning. The OAuth token is not stored.</p> <p>Use <code>oauthToken</code> for
     * repository providers other than GitHub, such as Bitbucket or CodeCommit.</p>
     * <p>To authorize access to GitHub as your repository provider, use
     * <code>accessToken</code>.</p> <p>You must specify either <code>oauthToken</code>
     * or <code>accessToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline UpdateAppRequest& WithOauthToken(const Aws::String& value) { SetOauthToken(value); return *this;}

    /**
     * <p>The OAuth token for a third-party source control system for an Amplify app.
     * The OAuth token is used to create a webhook and a read-only deploy key using SSH
     * cloning. The OAuth token is not stored.</p> <p>Use <code>oauthToken</code> for
     * repository providers other than GitHub, such as Bitbucket or CodeCommit.</p>
     * <p>To authorize access to GitHub as your repository provider, use
     * <code>accessToken</code>.</p> <p>You must specify either <code>oauthToken</code>
     * or <code>accessToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline UpdateAppRequest& WithOauthToken(Aws::String&& value) { SetOauthToken(std::move(value)); return *this;}

    /**
     * <p>The OAuth token for a third-party source control system for an Amplify app.
     * The OAuth token is used to create a webhook and a read-only deploy key using SSH
     * cloning. The OAuth token is not stored.</p> <p>Use <code>oauthToken</code> for
     * repository providers other than GitHub, such as Bitbucket or CodeCommit.</p>
     * <p>To authorize access to GitHub as your repository provider, use
     * <code>accessToken</code>.</p> <p>You must specify either <code>oauthToken</code>
     * or <code>accessToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline UpdateAppRequest& WithOauthToken(const char* value) { SetOauthToken(value); return *this;}


    /**
     * <p>The personal access token for a GitHub repository for an Amplify app. The
     * personal access token is used to authorize access to a GitHub repository using
     * the Amplify GitHub App. The token is not stored.</p> <p>Use
     * <code>accessToken</code> for GitHub repositories only. To authorize access to a
     * repository provider such as Bitbucket or CodeCommit, use
     * <code>oauthToken</code>.</p> <p>You must specify either <code>accessToken</code>
     * or <code>oauthToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The personal access token for a GitHub repository for an Amplify app. The
     * personal access token is used to authorize access to a GitHub repository using
     * the Amplify GitHub App. The token is not stored.</p> <p>Use
     * <code>accessToken</code> for GitHub repositories only. To authorize access to a
     * repository provider such as Bitbucket or CodeCommit, use
     * <code>oauthToken</code>.</p> <p>You must specify either <code>accessToken</code>
     * or <code>oauthToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>The personal access token for a GitHub repository for an Amplify app. The
     * personal access token is used to authorize access to a GitHub repository using
     * the Amplify GitHub App. The token is not stored.</p> <p>Use
     * <code>accessToken</code> for GitHub repositories only. To authorize access to a
     * repository provider such as Bitbucket or CodeCommit, use
     * <code>oauthToken</code>.</p> <p>You must specify either <code>accessToken</code>
     * or <code>oauthToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The personal access token for a GitHub repository for an Amplify app. The
     * personal access token is used to authorize access to a GitHub repository using
     * the Amplify GitHub App. The token is not stored.</p> <p>Use
     * <code>accessToken</code> for GitHub repositories only. To authorize access to a
     * repository provider such as Bitbucket or CodeCommit, use
     * <code>oauthToken</code>.</p> <p>You must specify either <code>accessToken</code>
     * or <code>oauthToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>The personal access token for a GitHub repository for an Amplify app. The
     * personal access token is used to authorize access to a GitHub repository using
     * the Amplify GitHub App. The token is not stored.</p> <p>Use
     * <code>accessToken</code> for GitHub repositories only. To authorize access to a
     * repository provider such as Bitbucket or CodeCommit, use
     * <code>oauthToken</code>.</p> <p>You must specify either <code>accessToken</code>
     * or <code>oauthToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The personal access token for a GitHub repository for an Amplify app. The
     * personal access token is used to authorize access to a GitHub repository using
     * the Amplify GitHub App. The token is not stored.</p> <p>Use
     * <code>accessToken</code> for GitHub repositories only. To authorize access to a
     * repository provider such as Bitbucket or CodeCommit, use
     * <code>oauthToken</code>.</p> <p>You must specify either <code>accessToken</code>
     * or <code>oauthToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline UpdateAppRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The personal access token for a GitHub repository for an Amplify app. The
     * personal access token is used to authorize access to a GitHub repository using
     * the Amplify GitHub App. The token is not stored.</p> <p>Use
     * <code>accessToken</code> for GitHub repositories only. To authorize access to a
     * repository provider such as Bitbucket or CodeCommit, use
     * <code>oauthToken</code>.</p> <p>You must specify either <code>accessToken</code>
     * or <code>oauthToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline UpdateAppRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The personal access token for a GitHub repository for an Amplify app. The
     * personal access token is used to authorize access to a GitHub repository using
     * the Amplify GitHub App. The token is not stored.</p> <p>Use
     * <code>accessToken</code> for GitHub repositories only. To authorize access to a
     * repository provider such as Bitbucket or CodeCommit, use
     * <code>oauthToken</code>.</p> <p>You must specify either <code>accessToken</code>
     * or <code>oauthToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/UserGuide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline UpdateAppRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_iamServiceRoleArn;
    bool m_iamServiceRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    bool m_enableBranchAutoBuild;
    bool m_enableBranchAutoBuildHasBeenSet = false;

    bool m_enableBranchAutoDeletion;
    bool m_enableBranchAutoDeletionHasBeenSet = false;

    bool m_enableBasicAuth;
    bool m_enableBasicAuthHasBeenSet = false;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet = false;

    Aws::Vector<CustomRule> m_customRules;
    bool m_customRulesHasBeenSet = false;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet = false;

    Aws::String m_customHeaders;
    bool m_customHeadersHasBeenSet = false;

    bool m_enableAutoBranchCreation;
    bool m_enableAutoBranchCreationHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoBranchCreationPatterns;
    bool m_autoBranchCreationPatternsHasBeenSet = false;

    AutoBranchCreationConfig m_autoBranchCreationConfig;
    bool m_autoBranchCreationConfigHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_oauthToken;
    bool m_oauthTokenHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
