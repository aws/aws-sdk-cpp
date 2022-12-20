/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>The launch profile initialization script is used when start streaming session
   * runs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/LaunchProfileInitializationScript">AWS
   * API Reference</a></p>
   */
  class LaunchProfileInitializationScript
  {
  public:
    AWS_NIMBLESTUDIO_API LaunchProfileInitializationScript();
    AWS_NIMBLESTUDIO_API LaunchProfileInitializationScript(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API LaunchProfileInitializationScript& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An IAM role attached to a Studio Component that gives the studio component
     * access to Amazon Web Services resources at anytime while the instance is
     * running. </p>
     */
    inline const Aws::String& GetRuntimeRoleArn() const{ return m_runtimeRoleArn; }

    /**
     * <p>An IAM role attached to a Studio Component that gives the studio component
     * access to Amazon Web Services resources at anytime while the instance is
     * running. </p>
     */
    inline bool RuntimeRoleArnHasBeenSet() const { return m_runtimeRoleArnHasBeenSet; }

    /**
     * <p>An IAM role attached to a Studio Component that gives the studio component
     * access to Amazon Web Services resources at anytime while the instance is
     * running. </p>
     */
    inline void SetRuntimeRoleArn(const Aws::String& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = value; }

    /**
     * <p>An IAM role attached to a Studio Component that gives the studio component
     * access to Amazon Web Services resources at anytime while the instance is
     * running. </p>
     */
    inline void SetRuntimeRoleArn(Aws::String&& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = std::move(value); }

    /**
     * <p>An IAM role attached to a Studio Component that gives the studio component
     * access to Amazon Web Services resources at anytime while the instance is
     * running. </p>
     */
    inline void SetRuntimeRoleArn(const char* value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn.assign(value); }

    /**
     * <p>An IAM role attached to a Studio Component that gives the studio component
     * access to Amazon Web Services resources at anytime while the instance is
     * running. </p>
     */
    inline LaunchProfileInitializationScript& WithRuntimeRoleArn(const Aws::String& value) { SetRuntimeRoleArn(value); return *this;}

    /**
     * <p>An IAM role attached to a Studio Component that gives the studio component
     * access to Amazon Web Services resources at anytime while the instance is
     * running. </p>
     */
    inline LaunchProfileInitializationScript& WithRuntimeRoleArn(Aws::String&& value) { SetRuntimeRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role attached to a Studio Component that gives the studio component
     * access to Amazon Web Services resources at anytime while the instance is
     * running. </p>
     */
    inline LaunchProfileInitializationScript& WithRuntimeRoleArn(const char* value) { SetRuntimeRoleArn(value); return *this;}


    /**
     * <p>The initialization script.</p>
     */
    inline const Aws::String& GetScript() const{ return m_script; }

    /**
     * <p>The initialization script.</p>
     */
    inline bool ScriptHasBeenSet() const { return m_scriptHasBeenSet; }

    /**
     * <p>The initialization script.</p>
     */
    inline void SetScript(const Aws::String& value) { m_scriptHasBeenSet = true; m_script = value; }

    /**
     * <p>The initialization script.</p>
     */
    inline void SetScript(Aws::String&& value) { m_scriptHasBeenSet = true; m_script = std::move(value); }

    /**
     * <p>The initialization script.</p>
     */
    inline void SetScript(const char* value) { m_scriptHasBeenSet = true; m_script.assign(value); }

    /**
     * <p>The initialization script.</p>
     */
    inline LaunchProfileInitializationScript& WithScript(const Aws::String& value) { SetScript(value); return *this;}

    /**
     * <p>The initialization script.</p>
     */
    inline LaunchProfileInitializationScript& WithScript(Aws::String&& value) { SetScript(std::move(value)); return *this;}

    /**
     * <p>The initialization script.</p>
     */
    inline LaunchProfileInitializationScript& WithScript(const char* value) { SetScript(value); return *this;}


    /**
     * <p>An IAM role attached to Studio Component when the system initialization
     * script runs which give the studio component access to Amazon Web Services
     * resources when the system initialization script runs.</p>
     */
    inline const Aws::String& GetSecureInitializationRoleArn() const{ return m_secureInitializationRoleArn; }

    /**
     * <p>An IAM role attached to Studio Component when the system initialization
     * script runs which give the studio component access to Amazon Web Services
     * resources when the system initialization script runs.</p>
     */
    inline bool SecureInitializationRoleArnHasBeenSet() const { return m_secureInitializationRoleArnHasBeenSet; }

    /**
     * <p>An IAM role attached to Studio Component when the system initialization
     * script runs which give the studio component access to Amazon Web Services
     * resources when the system initialization script runs.</p>
     */
    inline void SetSecureInitializationRoleArn(const Aws::String& value) { m_secureInitializationRoleArnHasBeenSet = true; m_secureInitializationRoleArn = value; }

    /**
     * <p>An IAM role attached to Studio Component when the system initialization
     * script runs which give the studio component access to Amazon Web Services
     * resources when the system initialization script runs.</p>
     */
    inline void SetSecureInitializationRoleArn(Aws::String&& value) { m_secureInitializationRoleArnHasBeenSet = true; m_secureInitializationRoleArn = std::move(value); }

    /**
     * <p>An IAM role attached to Studio Component when the system initialization
     * script runs which give the studio component access to Amazon Web Services
     * resources when the system initialization script runs.</p>
     */
    inline void SetSecureInitializationRoleArn(const char* value) { m_secureInitializationRoleArnHasBeenSet = true; m_secureInitializationRoleArn.assign(value); }

    /**
     * <p>An IAM role attached to Studio Component when the system initialization
     * script runs which give the studio component access to Amazon Web Services
     * resources when the system initialization script runs.</p>
     */
    inline LaunchProfileInitializationScript& WithSecureInitializationRoleArn(const Aws::String& value) { SetSecureInitializationRoleArn(value); return *this;}

    /**
     * <p>An IAM role attached to Studio Component when the system initialization
     * script runs which give the studio component access to Amazon Web Services
     * resources when the system initialization script runs.</p>
     */
    inline LaunchProfileInitializationScript& WithSecureInitializationRoleArn(Aws::String&& value) { SetSecureInitializationRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role attached to Studio Component when the system initialization
     * script runs which give the studio component access to Amazon Web Services
     * resources when the system initialization script runs.</p>
     */
    inline LaunchProfileInitializationScript& WithSecureInitializationRoleArn(const char* value) { SetSecureInitializationRoleArn(value); return *this;}


    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline const Aws::String& GetStudioComponentId() const{ return m_studioComponentId; }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline bool StudioComponentIdHasBeenSet() const { return m_studioComponentIdHasBeenSet; }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline void SetStudioComponentId(const Aws::String& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = value; }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline void SetStudioComponentId(Aws::String&& value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId = std::move(value); }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline void SetStudioComponentId(const char* value) { m_studioComponentIdHasBeenSet = true; m_studioComponentId.assign(value); }

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline LaunchProfileInitializationScript& WithStudioComponentId(const Aws::String& value) { SetStudioComponentId(value); return *this;}

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline LaunchProfileInitializationScript& WithStudioComponentId(Aws::String&& value) { SetStudioComponentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a studio component resource.</p>
     */
    inline LaunchProfileInitializationScript& WithStudioComponentId(const char* value) { SetStudioComponentId(value); return *this;}


    /**
     * <p>The name for the studio component.</p>
     */
    inline const Aws::String& GetStudioComponentName() const{ return m_studioComponentName; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline bool StudioComponentNameHasBeenSet() const { return m_studioComponentNameHasBeenSet; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetStudioComponentName(const Aws::String& value) { m_studioComponentNameHasBeenSet = true; m_studioComponentName = value; }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetStudioComponentName(Aws::String&& value) { m_studioComponentNameHasBeenSet = true; m_studioComponentName = std::move(value); }

    /**
     * <p>The name for the studio component.</p>
     */
    inline void SetStudioComponentName(const char* value) { m_studioComponentNameHasBeenSet = true; m_studioComponentName.assign(value); }

    /**
     * <p>The name for the studio component.</p>
     */
    inline LaunchProfileInitializationScript& WithStudioComponentName(const Aws::String& value) { SetStudioComponentName(value); return *this;}

    /**
     * <p>The name for the studio component.</p>
     */
    inline LaunchProfileInitializationScript& WithStudioComponentName(Aws::String&& value) { SetStudioComponentName(std::move(value)); return *this;}

    /**
     * <p>The name for the studio component.</p>
     */
    inline LaunchProfileInitializationScript& WithStudioComponentName(const char* value) { SetStudioComponentName(value); return *this;}

  private:

    Aws::String m_runtimeRoleArn;
    bool m_runtimeRoleArnHasBeenSet = false;

    Aws::String m_script;
    bool m_scriptHasBeenSet = false;

    Aws::String m_secureInitializationRoleArn;
    bool m_secureInitializationRoleArnHasBeenSet = false;

    Aws::String m_studioComponentId;
    bool m_studioComponentIdHasBeenSet = false;

    Aws::String m_studioComponentName;
    bool m_studioComponentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
