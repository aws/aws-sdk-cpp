/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>The script location for a particular operating system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/PlatformScriptKey">AWS
   * API Reference</a></p>
   */
  class PlatformScriptKey
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API PlatformScriptKey();
    AWS_MIGRATIONHUBORCHESTRATOR_API PlatformScriptKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API PlatformScriptKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The script location for Linux.</p>
     */
    inline const Aws::String& GetLinux() const{ return m_linux; }

    /**
     * <p>The script location for Linux.</p>
     */
    inline bool LinuxHasBeenSet() const { return m_linuxHasBeenSet; }

    /**
     * <p>The script location for Linux.</p>
     */
    inline void SetLinux(const Aws::String& value) { m_linuxHasBeenSet = true; m_linux = value; }

    /**
     * <p>The script location for Linux.</p>
     */
    inline void SetLinux(Aws::String&& value) { m_linuxHasBeenSet = true; m_linux = std::move(value); }

    /**
     * <p>The script location for Linux.</p>
     */
    inline void SetLinux(const char* value) { m_linuxHasBeenSet = true; m_linux.assign(value); }

    /**
     * <p>The script location for Linux.</p>
     */
    inline PlatformScriptKey& WithLinux(const Aws::String& value) { SetLinux(value); return *this;}

    /**
     * <p>The script location for Linux.</p>
     */
    inline PlatformScriptKey& WithLinux(Aws::String&& value) { SetLinux(std::move(value)); return *this;}

    /**
     * <p>The script location for Linux.</p>
     */
    inline PlatformScriptKey& WithLinux(const char* value) { SetLinux(value); return *this;}


    /**
     * <p>The script location for Windows.</p>
     */
    inline const Aws::String& GetWindows() const{ return m_windows; }

    /**
     * <p>The script location for Windows.</p>
     */
    inline bool WindowsHasBeenSet() const { return m_windowsHasBeenSet; }

    /**
     * <p>The script location for Windows.</p>
     */
    inline void SetWindows(const Aws::String& value) { m_windowsHasBeenSet = true; m_windows = value; }

    /**
     * <p>The script location for Windows.</p>
     */
    inline void SetWindows(Aws::String&& value) { m_windowsHasBeenSet = true; m_windows = std::move(value); }

    /**
     * <p>The script location for Windows.</p>
     */
    inline void SetWindows(const char* value) { m_windowsHasBeenSet = true; m_windows.assign(value); }

    /**
     * <p>The script location for Windows.</p>
     */
    inline PlatformScriptKey& WithWindows(const Aws::String& value) { SetWindows(value); return *this;}

    /**
     * <p>The script location for Windows.</p>
     */
    inline PlatformScriptKey& WithWindows(Aws::String&& value) { SetWindows(std::move(value)); return *this;}

    /**
     * <p>The script location for Windows.</p>
     */
    inline PlatformScriptKey& WithWindows(const char* value) { SetWindows(value); return *this;}

  private:

    Aws::String m_linux;
    bool m_linuxHasBeenSet = false;

    Aws::String m_windows;
    bool m_windowsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
