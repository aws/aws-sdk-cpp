/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/PosixUser.h>
#include <aws/deadline/model/RunAs.h>
#include <aws/deadline/model/WindowsUser.h>
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
    AWS_DEADLINE_API JobRunAsUser();
    AWS_DEADLINE_API JobRunAsUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobRunAsUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user and group that the jobs in the queue run as.</p>
     */
    inline const PosixUser& GetPosix() const{ return m_posix; }

    /**
     * <p>The user and group that the jobs in the queue run as.</p>
     */
    inline bool PosixHasBeenSet() const { return m_posixHasBeenSet; }

    /**
     * <p>The user and group that the jobs in the queue run as.</p>
     */
    inline void SetPosix(const PosixUser& value) { m_posixHasBeenSet = true; m_posix = value; }

    /**
     * <p>The user and group that the jobs in the queue run as.</p>
     */
    inline void SetPosix(PosixUser&& value) { m_posixHasBeenSet = true; m_posix = std::move(value); }

    /**
     * <p>The user and group that the jobs in the queue run as.</p>
     */
    inline JobRunAsUser& WithPosix(const PosixUser& value) { SetPosix(value); return *this;}

    /**
     * <p>The user and group that the jobs in the queue run as.</p>
     */
    inline JobRunAsUser& WithPosix(PosixUser&& value) { SetPosix(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the job should run using the queue's system user or if the
     * job should run using the worker agent system user.</p>
     */
    inline const RunAs& GetRunAs() const{ return m_runAs; }

    /**
     * <p>Specifies whether the job should run using the queue's system user or if the
     * job should run using the worker agent system user.</p>
     */
    inline bool RunAsHasBeenSet() const { return m_runAsHasBeenSet; }

    /**
     * <p>Specifies whether the job should run using the queue's system user or if the
     * job should run using the worker agent system user.</p>
     */
    inline void SetRunAs(const RunAs& value) { m_runAsHasBeenSet = true; m_runAs = value; }

    /**
     * <p>Specifies whether the job should run using the queue's system user or if the
     * job should run using the worker agent system user.</p>
     */
    inline void SetRunAs(RunAs&& value) { m_runAsHasBeenSet = true; m_runAs = std::move(value); }

    /**
     * <p>Specifies whether the job should run using the queue's system user or if the
     * job should run using the worker agent system user.</p>
     */
    inline JobRunAsUser& WithRunAs(const RunAs& value) { SetRunAs(value); return *this;}

    /**
     * <p>Specifies whether the job should run using the queue's system user or if the
     * job should run using the worker agent system user.</p>
     */
    inline JobRunAsUser& WithRunAs(RunAs&& value) { SetRunAs(std::move(value)); return *this;}


    /**
     * <p>Identifies a Microsoft Windows user.</p>
     */
    inline const WindowsUser& GetWindows() const{ return m_windows; }

    /**
     * <p>Identifies a Microsoft Windows user.</p>
     */
    inline bool WindowsHasBeenSet() const { return m_windowsHasBeenSet; }

    /**
     * <p>Identifies a Microsoft Windows user.</p>
     */
    inline void SetWindows(const WindowsUser& value) { m_windowsHasBeenSet = true; m_windows = value; }

    /**
     * <p>Identifies a Microsoft Windows user.</p>
     */
    inline void SetWindows(WindowsUser&& value) { m_windowsHasBeenSet = true; m_windows = std::move(value); }

    /**
     * <p>Identifies a Microsoft Windows user.</p>
     */
    inline JobRunAsUser& WithWindows(const WindowsUser& value) { SetWindows(value); return *this;}

    /**
     * <p>Identifies a Microsoft Windows user.</p>
     */
    inline JobRunAsUser& WithWindows(WindowsUser&& value) { SetWindows(std::move(value)); return *this;}

  private:

    PosixUser m_posix;
    bool m_posixHasBeenSet = false;

    RunAs m_runAs;
    bool m_runAsHasBeenSet = false;

    WindowsUser m_windows;
    bool m_windowsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
