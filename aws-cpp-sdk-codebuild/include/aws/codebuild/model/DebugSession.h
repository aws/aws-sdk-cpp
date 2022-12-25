/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains information about the debug session for a build. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/codebuild/latest/userguide/session-manager.html">Viewing
   * a running build in Session Manager</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/DebugSession">AWS
   * API Reference</a></p>
   */
  class DebugSession
  {
  public:
    AWS_CODEBUILD_API DebugSession();
    AWS_CODEBUILD_API DebugSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API DebugSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies if session debugging is enabled for this build.</p>
     */
    inline bool GetSessionEnabled() const{ return m_sessionEnabled; }

    /**
     * <p>Specifies if session debugging is enabled for this build.</p>
     */
    inline bool SessionEnabledHasBeenSet() const { return m_sessionEnabledHasBeenSet; }

    /**
     * <p>Specifies if session debugging is enabled for this build.</p>
     */
    inline void SetSessionEnabled(bool value) { m_sessionEnabledHasBeenSet = true; m_sessionEnabled = value; }

    /**
     * <p>Specifies if session debugging is enabled for this build.</p>
     */
    inline DebugSession& WithSessionEnabled(bool value) { SetSessionEnabled(value); return *this;}


    /**
     * <p>Contains the identifier of the Session Manager session used for the build. To
     * work with the paused build, you open this session to examine, control, and
     * resume the build.</p>
     */
    inline const Aws::String& GetSessionTarget() const{ return m_sessionTarget; }

    /**
     * <p>Contains the identifier of the Session Manager session used for the build. To
     * work with the paused build, you open this session to examine, control, and
     * resume the build.</p>
     */
    inline bool SessionTargetHasBeenSet() const { return m_sessionTargetHasBeenSet; }

    /**
     * <p>Contains the identifier of the Session Manager session used for the build. To
     * work with the paused build, you open this session to examine, control, and
     * resume the build.</p>
     */
    inline void SetSessionTarget(const Aws::String& value) { m_sessionTargetHasBeenSet = true; m_sessionTarget = value; }

    /**
     * <p>Contains the identifier of the Session Manager session used for the build. To
     * work with the paused build, you open this session to examine, control, and
     * resume the build.</p>
     */
    inline void SetSessionTarget(Aws::String&& value) { m_sessionTargetHasBeenSet = true; m_sessionTarget = std::move(value); }

    /**
     * <p>Contains the identifier of the Session Manager session used for the build. To
     * work with the paused build, you open this session to examine, control, and
     * resume the build.</p>
     */
    inline void SetSessionTarget(const char* value) { m_sessionTargetHasBeenSet = true; m_sessionTarget.assign(value); }

    /**
     * <p>Contains the identifier of the Session Manager session used for the build. To
     * work with the paused build, you open this session to examine, control, and
     * resume the build.</p>
     */
    inline DebugSession& WithSessionTarget(const Aws::String& value) { SetSessionTarget(value); return *this;}

    /**
     * <p>Contains the identifier of the Session Manager session used for the build. To
     * work with the paused build, you open this session to examine, control, and
     * resume the build.</p>
     */
    inline DebugSession& WithSessionTarget(Aws::String&& value) { SetSessionTarget(std::move(value)); return *this;}

    /**
     * <p>Contains the identifier of the Session Manager session used for the build. To
     * work with the paused build, you open this session to examine, control, and
     * resume the build.</p>
     */
    inline DebugSession& WithSessionTarget(const char* value) { SetSessionTarget(value); return *this;}

  private:

    bool m_sessionEnabled;
    bool m_sessionEnabledHasBeenSet = false;

    Aws::String m_sessionTarget;
    bool m_sessionTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
