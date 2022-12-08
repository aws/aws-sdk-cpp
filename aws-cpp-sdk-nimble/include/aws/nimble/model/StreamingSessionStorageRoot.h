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
   * <p>The upload storage root location (folder) on streaming workstations where
   * files are uploaded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamingSessionStorageRoot">AWS
   * API Reference</a></p>
   */
  class StreamingSessionStorageRoot
  {
  public:
    AWS_NIMBLESTUDIO_API StreamingSessionStorageRoot();
    AWS_NIMBLESTUDIO_API StreamingSessionStorageRoot(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StreamingSessionStorageRoot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The folder path in Linux workstations where files are uploaded.</p>
     */
    inline const Aws::String& GetLinux() const{ return m_linux; }

    /**
     * <p>The folder path in Linux workstations where files are uploaded.</p>
     */
    inline bool LinuxHasBeenSet() const { return m_linuxHasBeenSet; }

    /**
     * <p>The folder path in Linux workstations where files are uploaded.</p>
     */
    inline void SetLinux(const Aws::String& value) { m_linuxHasBeenSet = true; m_linux = value; }

    /**
     * <p>The folder path in Linux workstations where files are uploaded.</p>
     */
    inline void SetLinux(Aws::String&& value) { m_linuxHasBeenSet = true; m_linux = std::move(value); }

    /**
     * <p>The folder path in Linux workstations where files are uploaded.</p>
     */
    inline void SetLinux(const char* value) { m_linuxHasBeenSet = true; m_linux.assign(value); }

    /**
     * <p>The folder path in Linux workstations where files are uploaded.</p>
     */
    inline StreamingSessionStorageRoot& WithLinux(const Aws::String& value) { SetLinux(value); return *this;}

    /**
     * <p>The folder path in Linux workstations where files are uploaded.</p>
     */
    inline StreamingSessionStorageRoot& WithLinux(Aws::String&& value) { SetLinux(std::move(value)); return *this;}

    /**
     * <p>The folder path in Linux workstations where files are uploaded.</p>
     */
    inline StreamingSessionStorageRoot& WithLinux(const char* value) { SetLinux(value); return *this;}


    /**
     * <p>The folder path in Windows workstations where files are uploaded.</p>
     */
    inline const Aws::String& GetWindows() const{ return m_windows; }

    /**
     * <p>The folder path in Windows workstations where files are uploaded.</p>
     */
    inline bool WindowsHasBeenSet() const { return m_windowsHasBeenSet; }

    /**
     * <p>The folder path in Windows workstations where files are uploaded.</p>
     */
    inline void SetWindows(const Aws::String& value) { m_windowsHasBeenSet = true; m_windows = value; }

    /**
     * <p>The folder path in Windows workstations where files are uploaded.</p>
     */
    inline void SetWindows(Aws::String&& value) { m_windowsHasBeenSet = true; m_windows = std::move(value); }

    /**
     * <p>The folder path in Windows workstations where files are uploaded.</p>
     */
    inline void SetWindows(const char* value) { m_windowsHasBeenSet = true; m_windows.assign(value); }

    /**
     * <p>The folder path in Windows workstations where files are uploaded.</p>
     */
    inline StreamingSessionStorageRoot& WithWindows(const Aws::String& value) { SetWindows(value); return *this;}

    /**
     * <p>The folder path in Windows workstations where files are uploaded.</p>
     */
    inline StreamingSessionStorageRoot& WithWindows(Aws::String&& value) { SetWindows(std::move(value)); return *this;}

    /**
     * <p>The folder path in Windows workstations where files are uploaded.</p>
     */
    inline StreamingSessionStorageRoot& WithWindows(const char* value) { SetWindows(value); return *this;}

  private:

    Aws::String m_linux;
    bool m_linuxHasBeenSet = false;

    Aws::String m_windows;
    bool m_windowsHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
