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
#include <aws/amplify/model/Stage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p> Structure with auto branch creation config. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/AutoBranchCreationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API AutoBranchCreationConfig
  {
  public:
    AutoBranchCreationConfig();
    AutoBranchCreationConfig(Aws::Utils::Json::JsonView jsonValue);
    AutoBranchCreationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Stage for the auto created branch. </p>
     */
    inline const Stage& GetStage() const{ return m_stage; }

    /**
     * <p> Stage for the auto created branch. </p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p> Stage for the auto created branch. </p>
     */
    inline void SetStage(const Stage& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p> Stage for the auto created branch. </p>
     */
    inline void SetStage(Stage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p> Stage for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithStage(const Stage& value) { SetStage(value); return *this;}

    /**
     * <p> Stage for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}


    /**
     * <p> Framework for the auto created branch. </p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }

    /**
     * <p> Framework for the auto created branch. </p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p> Framework for the auto created branch. </p>
     */
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p> Framework for the auto created branch. </p>
     */
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p> Framework for the auto created branch. </p>
     */
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }

    /**
     * <p> Framework for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}

    /**
     * <p> Framework for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}

    /**
     * <p> Framework for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithFramework(const char* value) { SetFramework(value); return *this;}


    /**
     * <p> Enables auto building for the auto created branch. </p>
     */
    inline bool GetEnableAutoBuild() const{ return m_enableAutoBuild; }

    /**
     * <p> Enables auto building for the auto created branch. </p>
     */
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }

    /**
     * <p> Enables auto building for the auto created branch. </p>
     */
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }

    /**
     * <p> Enables auto building for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}


    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Environment Variables for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p> Basic Authorization credentials for the auto created branch. </p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> Basic Authorization credentials for the auto created branch. </p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> Basic Authorization credentials for the auto created branch. </p>
     */
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> Basic Authorization credentials for the auto created branch. </p>
     */
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> Basic Authorization credentials for the auto created branch. </p>
     */
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }

    /**
     * <p> Basic Authorization credentials for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> Basic Authorization credentials for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}

    /**
     * <p> Basic Authorization credentials for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}


    /**
     * <p> Enables Basic Auth for the auto created branch. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }

    /**
     * <p> Enables Basic Auth for the auto created branch. </p>
     */
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }

    /**
     * <p> Enables Basic Auth for the auto created branch. </p>
     */
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }

    /**
     * <p> Enables Basic Auth for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}


    /**
     * <p> BuildSpec for the auto created branch. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }

    /**
     * <p> BuildSpec for the auto created branch. </p>
     */
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }

    /**
     * <p> BuildSpec for the auto created branch. </p>
     */
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }

    /**
     * <p> BuildSpec for the auto created branch. </p>
     */
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }

    /**
     * <p> BuildSpec for the auto created branch. </p>
     */
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }

    /**
     * <p> BuildSpec for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}

    /**
     * <p> BuildSpec for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}

    /**
     * <p> BuildSpec for the auto created branch. </p>
     */
    inline AutoBranchCreationConfig& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}

  private:

    Stage m_stage;
    bool m_stageHasBeenSet;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet;

    bool m_enableAutoBuild;
    bool m_enableAutoBuildHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet;

    bool m_enableBasicAuth;
    bool m_enableBasicAuthHasBeenSet;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
