/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/PosixUser.h>
#include <aws/deadline/model/WindowsUser.h>
#include <aws/deadline/model/RunAs.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>Identifies the user for a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobRunAsUser">AWS
   * API Reference</a></p>
   */
  class JobRunAsUser
  {
  public:
    AWS_DEADLINE_API JobRunAsUser() = default;
    AWS_DEADLINE_API JobRunAsUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobRunAsUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user and group that the jobs in the queue run as.</p>
     */
    inline const PosixUser& GetPosix() const { return m_posix; }
    inline bool PosixHasBeenSet() const { return m_posixHasBeenSet; }
    template<typename PosixT = PosixUser>
    void SetPosix(PosixT&& value) { m_posixHasBeenSet = true; m_posix = std::forward<PosixT>(value); }
    template<typename PosixT = PosixUser>
    JobRunAsUser& WithPosix(PosixT&& value) { SetPosix(std::forward<PosixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies a Microsoft Windows user.</p>
     */
    inline const WindowsUser& GetWindows() const { return m_windows; }
    inline bool WindowsHasBeenSet() const { return m_windowsHasBeenSet; }
    template<typename WindowsT = WindowsUser>
    void SetWindows(WindowsT&& value) { m_windowsHasBeenSet = true; m_windows = std::forward<WindowsT>(value); }
    template<typename WindowsT = WindowsUser>
    JobRunAsUser& WithWindows(WindowsT&& value) { SetWindows(std::forward<WindowsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the job should run using the queue's system user or if the
     * job should run using the worker agent system user.</p>
     */
    inline RunAs GetRunAs() const { return m_runAs; }
    inline bool RunAsHasBeenSet() const { return m_runAsHasBeenSet; }
    inline void SetRunAs(RunAs value) { m_runAsHasBeenSet = true; m_runAs = value; }
    inline JobRunAsUser& WithRunAs(RunAs value) { SetRunAs(value); return *this;}
    ///@}
  private:

    PosixUser m_posix;
    bool m_posixHasBeenSet = false;

    WindowsUser m_windows;
    bool m_windowsHasBeenSet = false;

    RunAs m_runAs{RunAs::NOT_SET};
    bool m_runAsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
