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
    AWS_GUARDDUTY_API ProcessDetails() = default;
    AWS_GUARDDUTY_API ProcessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ProcessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the process.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProcessDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The absolute path of the process executable file.</p>
     */
    inline const Aws::String& GetExecutablePath() const { return m_executablePath; }
    inline bool ExecutablePathHasBeenSet() const { return m_executablePathHasBeenSet; }
    template<typename ExecutablePathT = Aws::String>
    void SetExecutablePath(ExecutablePathT&& value) { m_executablePathHasBeenSet = true; m_executablePath = std::forward<ExecutablePathT>(value); }
    template<typename ExecutablePathT = Aws::String>
    ProcessDetails& WithExecutablePath(ExecutablePathT&& value) { SetExecutablePath(std::forward<ExecutablePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SHA256</code> hash of the process executable.</p>
     */
    inline const Aws::String& GetExecutableSha256() const { return m_executableSha256; }
    inline bool ExecutableSha256HasBeenSet() const { return m_executableSha256HasBeenSet; }
    template<typename ExecutableSha256T = Aws::String>
    void SetExecutableSha256(ExecutableSha256T&& value) { m_executableSha256HasBeenSet = true; m_executableSha256 = std::forward<ExecutableSha256T>(value); }
    template<typename ExecutableSha256T = Aws::String>
    ProcessDetails& WithExecutableSha256(ExecutableSha256T&& value) { SetExecutableSha256(std::forward<ExecutableSha256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the child process.</p>
     */
    inline int GetNamespacePid() const { return m_namespacePid; }
    inline bool NamespacePidHasBeenSet() const { return m_namespacePidHasBeenSet; }
    inline void SetNamespacePid(int value) { m_namespacePidHasBeenSet = true; m_namespacePid = value; }
    inline ProcessDetails& WithNamespacePid(int value) { SetNamespacePid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The present working directory of the process.</p>
     */
    inline const Aws::String& GetPwd() const { return m_pwd; }
    inline bool PwdHasBeenSet() const { return m_pwdHasBeenSet; }
    template<typename PwdT = Aws::String>
    void SetPwd(PwdT&& value) { m_pwdHasBeenSet = true; m_pwd = std::forward<PwdT>(value); }
    template<typename PwdT = Aws::String>
    ProcessDetails& WithPwd(PwdT&& value) { SetPwd(std::forward<PwdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the process.</p>
     */
    inline int GetPid() const { return m_pid; }
    inline bool PidHasBeenSet() const { return m_pidHasBeenSet; }
    inline void SetPid(int value) { m_pidHasBeenSet = true; m_pid = value; }
    inline ProcessDetails& WithPid(int value) { SetPid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the process started. This is in UTC format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ProcessDetails& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID assigned to the process by GuardDuty.</p>
     */
    inline const Aws::String& GetUuid() const { return m_uuid; }
    inline bool UuidHasBeenSet() const { return m_uuidHasBeenSet; }
    template<typename UuidT = Aws::String>
    void SetUuid(UuidT&& value) { m_uuidHasBeenSet = true; m_uuid = std::forward<UuidT>(value); }
    template<typename UuidT = Aws::String>
    ProcessDetails& WithUuid(UuidT&& value) { SetUuid(std::forward<UuidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the parent process. This ID is assigned to the parent
     * process by GuardDuty.</p>
     */
    inline const Aws::String& GetParentUuid() const { return m_parentUuid; }
    inline bool ParentUuidHasBeenSet() const { return m_parentUuidHasBeenSet; }
    template<typename ParentUuidT = Aws::String>
    void SetParentUuid(ParentUuidT&& value) { m_parentUuidHasBeenSet = true; m_parentUuid = std::forward<ParentUuidT>(value); }
    template<typename ParentUuidT = Aws::String>
    ProcessDetails& WithParentUuid(ParentUuidT&& value) { SetParentUuid(std::forward<ParentUuidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user that executed the process.</p>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    ProcessDetails& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the user that executed the process.</p>
     */
    inline int GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(int value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline ProcessDetails& WithUserId(int value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective user ID of the user that executed the process.</p>
     */
    inline int GetEuid() const { return m_euid; }
    inline bool EuidHasBeenSet() const { return m_euidHasBeenSet; }
    inline void SetEuid(int value) { m_euidHasBeenSet = true; m_euid = value; }
    inline ProcessDetails& WithEuid(int value) { SetEuid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the process's lineage.</p>
     */
    inline const Aws::Vector<LineageObject>& GetLineage() const { return m_lineage; }
    inline bool LineageHasBeenSet() const { return m_lineageHasBeenSet; }
    template<typename LineageT = Aws::Vector<LineageObject>>
    void SetLineage(LineageT&& value) { m_lineageHasBeenSet = true; m_lineage = std::forward<LineageT>(value); }
    template<typename LineageT = Aws::Vector<LineageObject>>
    ProcessDetails& WithLineage(LineageT&& value) { SetLineage(std::forward<LineageT>(value)); return *this;}
    template<typename LineageT = LineageObject>
    ProcessDetails& AddLineage(LineageT&& value) { m_lineageHasBeenSet = true; m_lineage.emplace_back(std::forward<LineageT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_executablePath;
    bool m_executablePathHasBeenSet = false;

    Aws::String m_executableSha256;
    bool m_executableSha256HasBeenSet = false;

    int m_namespacePid{0};
    bool m_namespacePidHasBeenSet = false;

    Aws::String m_pwd;
    bool m_pwdHasBeenSet = false;

    int m_pid{0};
    bool m_pidHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::String m_uuid;
    bool m_uuidHasBeenSet = false;

    Aws::String m_parentUuid;
    bool m_parentUuidHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    int m_userId{0};
    bool m_userIdHasBeenSet = false;

    int m_euid{0};
    bool m_euidHasBeenSet = false;

    Aws::Vector<LineageObject> m_lineage;
    bool m_lineageHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
