﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the runtime process details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/LineageObject">AWS
   * API Reference</a></p>
   */
  class LineageObject
  {
  public:
    AWS_GUARDDUTY_API LineageObject();
    AWS_GUARDDUTY_API LineageObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API LineageObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time when the process started. This is in UTC format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline LineageObject& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline LineageObject& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process ID of the child process.</p>
     */
    inline int GetNamespacePid() const{ return m_namespacePid; }
    inline bool NamespacePidHasBeenSet() const { return m_namespacePidHasBeenSet; }
    inline void SetNamespacePid(int value) { m_namespacePidHasBeenSet = true; m_namespacePid = value; }
    inline LineageObject& WithNamespacePid(int value) { SetNamespacePid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user that executed the process.</p>
     */
    inline int GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(int value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline LineageObject& WithUserId(int value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the process.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LineageObject& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LineageObject& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LineageObject& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the process.</p>
     */
    inline int GetPid() const{ return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline LineageObject& WithPid(int value) { SetPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID assigned to the process by GuardDuty.</p>
     */
    inline const Aws::String& GetUuid() const{ return m_uuid; }
    inline bool UuidHasBeenSet() const { return m_uuidHasBeenSet; }
    inline void SetUuid(const Aws::String& value) { m_uuidHasBeenSet = true; m_uuid = value; }
    inline void SetUuid(Aws::String&& value) { m_uuidHasBeenSet = true; m_uuid = std::move(value); }
    inline void SetUuid(const char* value) { m_uuidHasBeenSet = true; m_uuid.assign(value); }
    inline LineageObject& WithUuid(const Aws::String& value) { SetUuid(value); return *this;}
    inline LineageObject& WithUuid(Aws::String&& value) { SetUuid(std::move(value)); return *this;}
    inline LineageObject& WithUuid(const char* value) { SetUuid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The absolute path of the process executable file.</p>
     */
    inline const Aws::String& GetExecutablePath() const{ return m_executablePath; }
    inline bool ExecutablePathHasBeenSet() const { return m_executablePathHasBeenSet; }
    inline void SetExecutablePath(const Aws::String& value) { m_executablePathHasBeenSet = true; m_executablePath = value; }
    inline void SetExecutablePath(Aws::String&& value) { m_executablePathHasBeenSet = true; m_executablePath = std::move(value); }
    inline void SetExecutablePath(const char* value) { m_executablePathHasBeenSet = true; m_executablePath.assign(value); }
    inline LineageObject& WithExecutablePath(const Aws::String& value) { SetExecutablePath(value); return *this;}
    inline LineageObject& WithExecutablePath(Aws::String&& value) { SetExecutablePath(std::move(value)); return *this;}
    inline LineageObject& WithExecutablePath(const char* value) { SetExecutablePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective user ID that was used to execute the process.</p>
     */
    inline int GetEuid() const{ return m_euid; }
    inline bool EuidHasBeenSet() const { return m_euidHasBeenSet; }
    inline void SetEuid(int value) { m_euidHasBeenSet = true; m_euid = value; }
    inline LineageObject& WithEuid(int value) { SetEuid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the parent process. This ID is assigned to the parent
     * process by GuardDuty.</p>
     */
    inline const Aws::String& GetParentUuid() const{ return m_parentUuid; }
    inline bool ParentUuidHasBeenSet() const { return m_parentUuidHasBeenSet; }
    inline void SetParentUuid(const Aws::String& value) { m_parentUuidHasBeenSet = true; m_parentUuid = value; }
    inline void SetParentUuid(Aws::String&& value) { m_parentUuidHasBeenSet = true; m_parentUuid = std::move(value); }
    inline void SetParentUuid(const char* value) { m_parentUuidHasBeenSet = true; m_parentUuid.assign(value); }
    inline LineageObject& WithParentUuid(const Aws::String& value) { SetParentUuid(value); return *this;}
    inline LineageObject& WithParentUuid(Aws::String&& value) { SetParentUuid(std::move(value)); return *this;}
    inline LineageObject& WithParentUuid(const char* value) { SetParentUuid(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    int m_namespacePid;
    bool m_namespacePidHasBeenSet = false;

    int m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_pid;
    bool m_pidHasBeenSet = false;

    Aws::String m_uuid;
    bool m_uuidHasBeenSet = false;

    Aws::String m_executablePath;
    bool m_executablePathHasBeenSet = false;

    int m_euid;
    bool m_euidHasBeenSet = false;

    Aws::String m_parentUuid;
    bool m_parentUuidHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
