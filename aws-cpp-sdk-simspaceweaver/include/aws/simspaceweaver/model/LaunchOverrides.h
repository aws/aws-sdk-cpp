/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>Options that apply when the app starts. These optiAons override default
   * behavior.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/LaunchOverrides">AWS
   * API Reference</a></p>
   */
  class LaunchOverrides
  {
  public:
    AWS_SIMSPACEWEAVER_API LaunchOverrides();
    AWS_SIMSPACEWEAVER_API LaunchOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API LaunchOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>App launch commands and command line parameters that override the launch
     * command configured in the simulation schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchCommands() const{ return m_launchCommands; }

    /**
     * <p>App launch commands and command line parameters that override the launch
     * command configured in the simulation schema.</p>
     */
    inline bool LaunchCommandsHasBeenSet() const { return m_launchCommandsHasBeenSet; }

    /**
     * <p>App launch commands and command line parameters that override the launch
     * command configured in the simulation schema.</p>
     */
    inline void SetLaunchCommands(const Aws::Vector<Aws::String>& value) { m_launchCommandsHasBeenSet = true; m_launchCommands = value; }

    /**
     * <p>App launch commands and command line parameters that override the launch
     * command configured in the simulation schema.</p>
     */
    inline void SetLaunchCommands(Aws::Vector<Aws::String>&& value) { m_launchCommandsHasBeenSet = true; m_launchCommands = std::move(value); }

    /**
     * <p>App launch commands and command line parameters that override the launch
     * command configured in the simulation schema.</p>
     */
    inline LaunchOverrides& WithLaunchCommands(const Aws::Vector<Aws::String>& value) { SetLaunchCommands(value); return *this;}

    /**
     * <p>App launch commands and command line parameters that override the launch
     * command configured in the simulation schema.</p>
     */
    inline LaunchOverrides& WithLaunchCommands(Aws::Vector<Aws::String>&& value) { SetLaunchCommands(std::move(value)); return *this;}

    /**
     * <p>App launch commands and command line parameters that override the launch
     * command configured in the simulation schema.</p>
     */
    inline LaunchOverrides& AddLaunchCommands(const Aws::String& value) { m_launchCommandsHasBeenSet = true; m_launchCommands.push_back(value); return *this; }

    /**
     * <p>App launch commands and command line parameters that override the launch
     * command configured in the simulation schema.</p>
     */
    inline LaunchOverrides& AddLaunchCommands(Aws::String&& value) { m_launchCommandsHasBeenSet = true; m_launchCommands.push_back(std::move(value)); return *this; }

    /**
     * <p>App launch commands and command line parameters that override the launch
     * command configured in the simulation schema.</p>
     */
    inline LaunchOverrides& AddLaunchCommands(const char* value) { m_launchCommandsHasBeenSet = true; m_launchCommands.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_launchCommands;
    bool m_launchCommandsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
