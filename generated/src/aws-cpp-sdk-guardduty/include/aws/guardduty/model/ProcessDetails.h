/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/LineageObject.h>
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
   * <p>Information about the observed process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ProcessDetails">AWS
   * API Reference</a></p>
   */
  class ProcessDetails
  {
  public:
    AWS_GUARDDUTY_API ProcessDetails();
    AWS_GUARDDUTY_API ProcessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ProcessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the process.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ProcessDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ProcessDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ProcessDetails& WithName(const char* value) { SetName(value); return *this;}
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
    inline ProcessDetails& WithExecutablePath(const Aws::String& value) { SetExecutablePath(value); return *this;}
    inline ProcessDetails& WithExecutablePath(Aws::String&& value) { SetExecutablePath(std::move(value)); return *this;}
    inline ProcessDetails& WithExecutablePath(const char* value) { SetExecutablePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SHA256</code> hash of the process executable.</p>
     */
    inline const Aws::String& GetExecutableSha256() const{ return m_executableSha256; }
    inline bool ExecutableSha256HasBeenSet() const { return m_executableSha256HasBeenSet; }
    inline void SetExecutableSha256(const Aws::String& value) { m_executableSha256HasBeenSet = true; m_executableSha256 = value; }
    inline void SetExecutableSha256(Aws::String&& value) { m_executableSha256HasBeenSet = true; m_executableSha256 = std::move(value); }
    inline void SetExecutableSha256(const char* value) { m_executableSha256HasBeenSet = true; m_executableSha256.assign(value); }
    inline ProcessDetails& WithExecutableSha256(const Aws::String& value) { SetExecutableSha256(value); return *this;}
    inline ProcessDetails& WithExecutableSha256(Aws::String&& value) { SetExecutableSha256(std::move(value)); return *this;}
    inline ProcessDetails& WithExecutableSha256(const char* value) { SetExecutableSha256(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the child process.</p>
     */
    inline int GetNamespacePid() const{ return m_namespacePid; }
    inline bool NamespacePidHasBeenSet() const { return m_namespacePidHasBeenSet; }
    inline void SetNamespacePid(int value) { m_namespacePidHasBeenSet = true; m_namespacePid = value; }
    inline ProcessDetails& WithNamespacePid(int value) { SetNamespacePid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The present working directory of the process.</p>
     */
    inline const Aws::String& GetPwd() const{ return m_pwd; }
    inline bool PwdHasBeenSet() const { return m_pwdHasBeenSet; }
    inline void SetPwd(const Aws::String& value) { m_pwdHasBeenSet = true; m_pwd = value; }
    inline void SetPwd(Aws::String&& value) { m_pwdHasBeenSet = true; m_pwd = std::move(value); }
    inline void SetPwd(const char* value) { m_pwdHasBeenSet = true; m_pwd.assign(value); }
    inline ProcessDetails& WithPwd(const Aws::String& value) { SetPwd(value); return *this;}
    inline ProcessDetails& WithPwd(Aws::String&& value) { SetPwd(std::move(value)); return *this;}
    inline ProcessDetails& WithPwd(const char* value) { SetPwd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the process.</p>
     */
    inline int GetPid() const{ return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline ProcessDetails& WithPid(int value) { SetPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the process started. This is in UTC format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ProcessDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ProcessDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
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
    inline ProcessDetails& WithUuid(const Aws::String& value) { SetUuid(value); return *this;}
    inline ProcessDetails& WithUuid(Aws::String&& value) { SetUuid(std::move(value)); return *this;}
    inline ProcessDetails& WithUuid(const char* value) { SetUuid(value); return *this;}
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
    inline ProcessDetails& WithParentUuid(const Aws::String& value) { SetParentUuid(value); return *this;}
    inline ProcessDetails& WithParentUuid(Aws::String&& value) { SetParentUuid(std::move(value)); return *this;}
    inline ProcessDetails& WithParentUuid(const char* value) { SetParentUuid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user that executed the process.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }
    inline ProcessDetails& WithUser(const Aws::String& value) { SetUser(value); return *this;}
    inline ProcessDetails& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}
    inline ProcessDetails& WithUser(const char* value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the user that executed the process.</p>
     */
    inline int GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(int value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline ProcessDetails& WithUserId(int value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective user ID of the user that executed the process.</p>
     */
    inline int GetEuid() const{ return m_euid; }
    inline bool EuidHasBeenSet() const { return m_euidHasBeenSet; }
    inline void SetEuid(int value) { m_euidHasBeenSet = true; m_euid = value; }
    inline ProcessDetails& WithEuid(int value) { SetEuid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the process's lineage.</p>
     */
    inline const Aws::Vector<LineageObject>& GetLineage() const{ return m_lineage; }
    inline bool LineageHasBeenSet() const { return m_lineageHasBeenSet; }
    inline void SetLineage(const Aws::Vector<LineageObject>& value) { m_lineageHasBeenSet = true; m_lineage = value; }
    inline void SetLineage(Aws::Vector<LineageObject>&& value) { m_lineageHasBeenSet = true; m_lineage = std::move(value); }
    inline ProcessDetails& WithLineage(const Aws::Vector<LineageObject>& value) { SetLineage(value); return *this;}
    inline ProcessDetails& WithLineage(Aws::Vector<LineageObject>&& value) { SetLineage(std::move(value)); return *this;}
    inline ProcessDetails& AddLineage(const LineageObject& value) { m_lineageHasBeenSet = true; m_lineage.push_back(value); return *this; }
    inline ProcessDetails& AddLineage(LineageObject&& value) { m_lineageHasBeenSet = true; m_lineage.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_executablePath;
    bool m_executablePathHasBeenSet = false;

    Aws::String m_executableSha256;
    bool m_executableSha256HasBeenSet = false;

    int m_namespacePid;
    bool m_namespacePidHasBeenSet = false;

    Aws::String m_pwd;
    bool m_pwdHasBeenSet = false;

    int m_pid;
    bool m_pidHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_uuid;
    bool m_uuidHasBeenSet = false;

    Aws::String m_parentUuid;
    bool m_parentUuidHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    int m_userId;
    bool m_userIdHasBeenSet = false;

    int m_euid;
    bool m_euidHasBeenSet = false;

    Aws::Vector<LineageObject> m_lineage;
    bool m_lineageHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
