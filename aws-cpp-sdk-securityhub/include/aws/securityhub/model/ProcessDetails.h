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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The details of process-related information about a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ProcessDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API ProcessDetails
  {
  public:
    ProcessDetails();
    ProcessDetails(Aws::Utils::Json::JsonView jsonValue);
    ProcessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the process.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the process.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the process.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the process.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the process.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the process.</p>
     */
    inline ProcessDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the process.</p>
     */
    inline ProcessDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the process.</p>
     */
    inline ProcessDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The path to the process executable.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path to the process executable.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path to the process executable.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path to the process executable.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path to the process executable.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path to the process executable.</p>
     */
    inline ProcessDetails& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path to the process executable.</p>
     */
    inline ProcessDetails& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path to the process executable.</p>
     */
    inline ProcessDetails& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The process ID.</p>
     */
    inline int GetPid() const{ return m_pid; }

    /**
     * <p>The process ID.</p>
     */
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }

    /**
     * <p>The process ID.</p>
     */
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }

    /**
     * <p>The process ID.</p>
     */
    inline ProcessDetails& WithPid(int value) { SetPid(value); return *this;}


    /**
     * <p>The parent process ID.</p>
     */
    inline int GetParentPid() const{ return m_parentPid; }

    /**
     * <p>The parent process ID.</p>
     */
    inline bool ParentPidHasBeenSet() const { return m_parentPidHasBeenSet; }

    /**
     * <p>The parent process ID.</p>
     */
    inline void SetParentPid(int value) { m_parentPidHasBeenSet = true; m_parentPid = value; }

    /**
     * <p>The parent process ID.</p>
     */
    inline ProcessDetails& WithParentPid(int value) { SetParentPid(value); return *this;}


    /**
     * <p>The date/time that the process was launched.</p>
     */
    inline const Aws::String& GetLaunchedAt() const{ return m_launchedAt; }

    /**
     * <p>The date/time that the process was launched.</p>
     */
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }

    /**
     * <p>The date/time that the process was launched.</p>
     */
    inline void SetLaunchedAt(const Aws::String& value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }

    /**
     * <p>The date/time that the process was launched.</p>
     */
    inline void SetLaunchedAt(Aws::String&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::move(value); }

    /**
     * <p>The date/time that the process was launched.</p>
     */
    inline void SetLaunchedAt(const char* value) { m_launchedAtHasBeenSet = true; m_launchedAt.assign(value); }

    /**
     * <p>The date/time that the process was launched.</p>
     */
    inline ProcessDetails& WithLaunchedAt(const Aws::String& value) { SetLaunchedAt(value); return *this;}

    /**
     * <p>The date/time that the process was launched.</p>
     */
    inline ProcessDetails& WithLaunchedAt(Aws::String&& value) { SetLaunchedAt(std::move(value)); return *this;}

    /**
     * <p>The date/time that the process was launched.</p>
     */
    inline ProcessDetails& WithLaunchedAt(const char* value) { SetLaunchedAt(value); return *this;}


    /**
     * <p>The date and time when the process was terminated.</p>
     */
    inline const Aws::String& GetTerminatedAt() const{ return m_terminatedAt; }

    /**
     * <p>The date and time when the process was terminated.</p>
     */
    inline bool TerminatedAtHasBeenSet() const { return m_terminatedAtHasBeenSet; }

    /**
     * <p>The date and time when the process was terminated.</p>
     */
    inline void SetTerminatedAt(const Aws::String& value) { m_terminatedAtHasBeenSet = true; m_terminatedAt = value; }

    /**
     * <p>The date and time when the process was terminated.</p>
     */
    inline void SetTerminatedAt(Aws::String&& value) { m_terminatedAtHasBeenSet = true; m_terminatedAt = std::move(value); }

    /**
     * <p>The date and time when the process was terminated.</p>
     */
    inline void SetTerminatedAt(const char* value) { m_terminatedAtHasBeenSet = true; m_terminatedAt.assign(value); }

    /**
     * <p>The date and time when the process was terminated.</p>
     */
    inline ProcessDetails& WithTerminatedAt(const Aws::String& value) { SetTerminatedAt(value); return *this;}

    /**
     * <p>The date and time when the process was terminated.</p>
     */
    inline ProcessDetails& WithTerminatedAt(Aws::String&& value) { SetTerminatedAt(std::move(value)); return *this;}

    /**
     * <p>The date and time when the process was terminated.</p>
     */
    inline ProcessDetails& WithTerminatedAt(const char* value) { SetTerminatedAt(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    int m_pid;
    bool m_pidHasBeenSet;

    int m_parentPid;
    bool m_parentPidHasBeenSet;

    Aws::String m_launchedAt;
    bool m_launchedAtHasBeenSet;

    Aws::String m_terminatedAt;
    bool m_terminatedAtHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
