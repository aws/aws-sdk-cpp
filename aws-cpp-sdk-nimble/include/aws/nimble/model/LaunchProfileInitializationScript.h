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
   * <p>The Launch Profile Initialization Script is used when start streaming session
   * runs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/LaunchProfileInitializationScript">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API LaunchProfileInitializationScript
  {
  public:
    LaunchProfileInitializationScript();
    LaunchProfileInitializationScript(Aws::Utils::Json::JsonView jsonValue);
    LaunchProfileInitializationScript& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

    Aws::String m_script;
    bool m_scriptHasBeenSet;

    Aws::String m_studioComponentId;
    bool m_studioComponentIdHasBeenSet;

    Aws::String m_studioComponentName;
    bool m_studioComponentNameHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
