/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ProcessDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Additional information about the suspicious activity.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RuntimeContext">AWS
   * API Reference</a></p>
   */
  class RuntimeContext
  {
  public:
    AWS_GUARDDUTY_API RuntimeContext();
    AWS_GUARDDUTY_API RuntimeContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RuntimeContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the process that modified the current process. This is
     * available for multiple finding types.</p>
     */
    inline const ProcessDetails& GetModifyingProcess() const{ return m_modifyingProcess; }

    /**
     * <p>Information about the process that modified the current process. This is
     * available for multiple finding types.</p>
     */
    inline bool ModifyingProcessHasBeenSet() const { return m_modifyingProcessHasBeenSet; }

    /**
     * <p>Information about the process that modified the current process. This is
     * available for multiple finding types.</p>
     */
    inline void SetModifyingProcess(const ProcessDetails& value) { m_modifyingProcessHasBeenSet = true; m_modifyingProcess = value; }

    /**
     * <p>Information about the process that modified the current process. This is
     * available for multiple finding types.</p>
     */
    inline void SetModifyingProcess(ProcessDetails&& value) { m_modifyingProcessHasBeenSet = true; m_modifyingProcess = std::move(value); }

    /**
     * <p>Information about the process that modified the current process. This is
     * available for multiple finding types.</p>
     */
    inline RuntimeContext& WithModifyingProcess(const ProcessDetails& value) { SetModifyingProcess(value); return *this;}

    /**
     * <p>Information about the process that modified the current process. This is
     * available for multiple finding types.</p>
     */
    inline RuntimeContext& WithModifyingProcess(ProcessDetails&& value) { SetModifyingProcess(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the process modified the current process. The
     * timestamp is in UTC date string format.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The timestamp at which the process modified the current process. The
     * timestamp is in UTC date string format.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The timestamp at which the process modified the current process. The
     * timestamp is in UTC date string format.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The timestamp at which the process modified the current process. The
     * timestamp is in UTC date string format.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The timestamp at which the process modified the current process. The
     * timestamp is in UTC date string format.</p>
     */
    inline RuntimeContext& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The timestamp at which the process modified the current process. The
     * timestamp is in UTC date string format.</p>
     */
    inline RuntimeContext& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The path to the script that was executed.</p>
     */
    inline const Aws::String& GetScriptPath() const{ return m_scriptPath; }

    /**
     * <p>The path to the script that was executed.</p>
     */
    inline bool ScriptPathHasBeenSet() const { return m_scriptPathHasBeenSet; }

    /**
     * <p>The path to the script that was executed.</p>
     */
    inline void SetScriptPath(const Aws::String& value) { m_scriptPathHasBeenSet = true; m_scriptPath = value; }

    /**
     * <p>The path to the script that was executed.</p>
     */
    inline void SetScriptPath(Aws::String&& value) { m_scriptPathHasBeenSet = true; m_scriptPath = std::move(value); }

    /**
     * <p>The path to the script that was executed.</p>
     */
    inline void SetScriptPath(const char* value) { m_scriptPathHasBeenSet = true; m_scriptPath.assign(value); }

    /**
     * <p>The path to the script that was executed.</p>
     */
    inline RuntimeContext& WithScriptPath(const Aws::String& value) { SetScriptPath(value); return *this;}

    /**
     * <p>The path to the script that was executed.</p>
     */
    inline RuntimeContext& WithScriptPath(Aws::String&& value) { SetScriptPath(std::move(value)); return *this;}

    /**
     * <p>The path to the script that was executed.</p>
     */
    inline RuntimeContext& WithScriptPath(const char* value) { SetScriptPath(value); return *this;}


    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline const Aws::String& GetLibraryPath() const{ return m_libraryPath; }

    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline bool LibraryPathHasBeenSet() const { return m_libraryPathHasBeenSet; }

    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline void SetLibraryPath(const Aws::String& value) { m_libraryPathHasBeenSet = true; m_libraryPath = value; }

    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline void SetLibraryPath(Aws::String&& value) { m_libraryPathHasBeenSet = true; m_libraryPath = std::move(value); }

    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline void SetLibraryPath(const char* value) { m_libraryPathHasBeenSet = true; m_libraryPath.assign(value); }

    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline RuntimeContext& WithLibraryPath(const Aws::String& value) { SetLibraryPath(value); return *this;}

    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline RuntimeContext& WithLibraryPath(Aws::String&& value) { SetLibraryPath(std::move(value)); return *this;}

    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline RuntimeContext& WithLibraryPath(const char* value) { SetLibraryPath(value); return *this;}


    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline const Aws::String& GetLdPreloadValue() const{ return m_ldPreloadValue; }

    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline bool LdPreloadValueHasBeenSet() const { return m_ldPreloadValueHasBeenSet; }

    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline void SetLdPreloadValue(const Aws::String& value) { m_ldPreloadValueHasBeenSet = true; m_ldPreloadValue = value; }

    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline void SetLdPreloadValue(Aws::String&& value) { m_ldPreloadValueHasBeenSet = true; m_ldPreloadValue = std::move(value); }

    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline void SetLdPreloadValue(const char* value) { m_ldPreloadValueHasBeenSet = true; m_ldPreloadValue.assign(value); }

    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline RuntimeContext& WithLdPreloadValue(const Aws::String& value) { SetLdPreloadValue(value); return *this;}

    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline RuntimeContext& WithLdPreloadValue(Aws::String&& value) { SetLdPreloadValue(std::move(value)); return *this;}

    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline RuntimeContext& WithLdPreloadValue(const char* value) { SetLdPreloadValue(value); return *this;}


    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline const Aws::String& GetSocketPath() const{ return m_socketPath; }

    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline bool SocketPathHasBeenSet() const { return m_socketPathHasBeenSet; }

    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline void SetSocketPath(const Aws::String& value) { m_socketPathHasBeenSet = true; m_socketPath = value; }

    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline void SetSocketPath(Aws::String&& value) { m_socketPathHasBeenSet = true; m_socketPath = std::move(value); }

    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline void SetSocketPath(const char* value) { m_socketPathHasBeenSet = true; m_socketPath.assign(value); }

    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline RuntimeContext& WithSocketPath(const Aws::String& value) { SetSocketPath(value); return *this;}

    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline RuntimeContext& WithSocketPath(Aws::String&& value) { SetSocketPath(std::move(value)); return *this;}

    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline RuntimeContext& WithSocketPath(const char* value) { SetSocketPath(value); return *this;}


    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline const Aws::String& GetRuncBinaryPath() const{ return m_runcBinaryPath; }

    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline bool RuncBinaryPathHasBeenSet() const { return m_runcBinaryPathHasBeenSet; }

    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline void SetRuncBinaryPath(const Aws::String& value) { m_runcBinaryPathHasBeenSet = true; m_runcBinaryPath = value; }

    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline void SetRuncBinaryPath(Aws::String&& value) { m_runcBinaryPathHasBeenSet = true; m_runcBinaryPath = std::move(value); }

    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline void SetRuncBinaryPath(const char* value) { m_runcBinaryPathHasBeenSet = true; m_runcBinaryPath.assign(value); }

    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline RuntimeContext& WithRuncBinaryPath(const Aws::String& value) { SetRuncBinaryPath(value); return *this;}

    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline RuntimeContext& WithRuncBinaryPath(Aws::String&& value) { SetRuncBinaryPath(std::move(value)); return *this;}

    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline RuntimeContext& WithRuncBinaryPath(const char* value) { SetRuncBinaryPath(value); return *this;}


    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline const Aws::String& GetReleaseAgentPath() const{ return m_releaseAgentPath; }

    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline bool ReleaseAgentPathHasBeenSet() const { return m_releaseAgentPathHasBeenSet; }

    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline void SetReleaseAgentPath(const Aws::String& value) { m_releaseAgentPathHasBeenSet = true; m_releaseAgentPath = value; }

    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline void SetReleaseAgentPath(Aws::String&& value) { m_releaseAgentPathHasBeenSet = true; m_releaseAgentPath = std::move(value); }

    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline void SetReleaseAgentPath(const char* value) { m_releaseAgentPathHasBeenSet = true; m_releaseAgentPath.assign(value); }

    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline RuntimeContext& WithReleaseAgentPath(const Aws::String& value) { SetReleaseAgentPath(value); return *this;}

    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline RuntimeContext& WithReleaseAgentPath(Aws::String&& value) { SetReleaseAgentPath(std::move(value)); return *this;}

    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline RuntimeContext& WithReleaseAgentPath(const char* value) { SetReleaseAgentPath(value); return *this;}


    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline const Aws::String& GetMountSource() const{ return m_mountSource; }

    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline bool MountSourceHasBeenSet() const { return m_mountSourceHasBeenSet; }

    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline void SetMountSource(const Aws::String& value) { m_mountSourceHasBeenSet = true; m_mountSource = value; }

    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline void SetMountSource(Aws::String&& value) { m_mountSourceHasBeenSet = true; m_mountSource = std::move(value); }

    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline void SetMountSource(const char* value) { m_mountSourceHasBeenSet = true; m_mountSource.assign(value); }

    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline RuntimeContext& WithMountSource(const Aws::String& value) { SetMountSource(value); return *this;}

    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline RuntimeContext& WithMountSource(Aws::String&& value) { SetMountSource(std::move(value)); return *this;}

    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline RuntimeContext& WithMountSource(const char* value) { SetMountSource(value); return *this;}


    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline const Aws::String& GetMountTarget() const{ return m_mountTarget; }

    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline bool MountTargetHasBeenSet() const { return m_mountTargetHasBeenSet; }

    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline void SetMountTarget(const Aws::String& value) { m_mountTargetHasBeenSet = true; m_mountTarget = value; }

    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline void SetMountTarget(Aws::String&& value) { m_mountTargetHasBeenSet = true; m_mountTarget = std::move(value); }

    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline void SetMountTarget(const char* value) { m_mountTargetHasBeenSet = true; m_mountTarget.assign(value); }

    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline RuntimeContext& WithMountTarget(const Aws::String& value) { SetMountTarget(value); return *this;}

    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline RuntimeContext& WithMountTarget(Aws::String&& value) { SetMountTarget(std::move(value)); return *this;}

    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline RuntimeContext& WithMountTarget(const char* value) { SetMountTarget(value); return *this;}


    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline const Aws::String& GetFileSystemType() const{ return m_fileSystemType; }

    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }

    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline void SetFileSystemType(const Aws::String& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }

    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline void SetFileSystemType(Aws::String&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::move(value); }

    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline void SetFileSystemType(const char* value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType.assign(value); }

    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline RuntimeContext& WithFileSystemType(const Aws::String& value) { SetFileSystemType(value); return *this;}

    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline RuntimeContext& WithFileSystemType(Aws::String&& value) { SetFileSystemType(std::move(value)); return *this;}

    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline RuntimeContext& WithFileSystemType(const char* value) { SetFileSystemType(value); return *this;}


    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlags() const{ return m_flags; }

    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline bool FlagsHasBeenSet() const { return m_flagsHasBeenSet; }

    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline void SetFlags(const Aws::Vector<Aws::String>& value) { m_flagsHasBeenSet = true; m_flags = value; }

    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline void SetFlags(Aws::Vector<Aws::String>&& value) { m_flagsHasBeenSet = true; m_flags = std::move(value); }

    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline RuntimeContext& WithFlags(const Aws::Vector<Aws::String>& value) { SetFlags(value); return *this;}

    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline RuntimeContext& WithFlags(Aws::Vector<Aws::String>&& value) { SetFlags(std::move(value)); return *this;}

    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline RuntimeContext& AddFlags(const Aws::String& value) { m_flagsHasBeenSet = true; m_flags.push_back(value); return *this; }

    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline RuntimeContext& AddFlags(Aws::String&& value) { m_flagsHasBeenSet = true; m_flags.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline RuntimeContext& AddFlags(const char* value) { m_flagsHasBeenSet = true; m_flags.push_back(value); return *this; }


    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline const Aws::String& GetModuleName() const{ return m_moduleName; }

    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline bool ModuleNameHasBeenSet() const { return m_moduleNameHasBeenSet; }

    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline void SetModuleName(const Aws::String& value) { m_moduleNameHasBeenSet = true; m_moduleName = value; }

    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline void SetModuleName(Aws::String&& value) { m_moduleNameHasBeenSet = true; m_moduleName = std::move(value); }

    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline void SetModuleName(const char* value) { m_moduleNameHasBeenSet = true; m_moduleName.assign(value); }

    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline RuntimeContext& WithModuleName(const Aws::String& value) { SetModuleName(value); return *this;}

    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline RuntimeContext& WithModuleName(Aws::String&& value) { SetModuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline RuntimeContext& WithModuleName(const char* value) { SetModuleName(value); return *this;}


    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline const Aws::String& GetModuleFilePath() const{ return m_moduleFilePath; }

    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline bool ModuleFilePathHasBeenSet() const { return m_moduleFilePathHasBeenSet; }

    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline void SetModuleFilePath(const Aws::String& value) { m_moduleFilePathHasBeenSet = true; m_moduleFilePath = value; }

    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline void SetModuleFilePath(Aws::String&& value) { m_moduleFilePathHasBeenSet = true; m_moduleFilePath = std::move(value); }

    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline void SetModuleFilePath(const char* value) { m_moduleFilePathHasBeenSet = true; m_moduleFilePath.assign(value); }

    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline RuntimeContext& WithModuleFilePath(const Aws::String& value) { SetModuleFilePath(value); return *this;}

    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline RuntimeContext& WithModuleFilePath(Aws::String&& value) { SetModuleFilePath(std::move(value)); return *this;}

    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline RuntimeContext& WithModuleFilePath(const char* value) { SetModuleFilePath(value); return *this;}


    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline const Aws::String& GetModuleSha256() const{ return m_moduleSha256; }

    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline bool ModuleSha256HasBeenSet() const { return m_moduleSha256HasBeenSet; }

    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline void SetModuleSha256(const Aws::String& value) { m_moduleSha256HasBeenSet = true; m_moduleSha256 = value; }

    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline void SetModuleSha256(Aws::String&& value) { m_moduleSha256HasBeenSet = true; m_moduleSha256 = std::move(value); }

    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline void SetModuleSha256(const char* value) { m_moduleSha256HasBeenSet = true; m_moduleSha256.assign(value); }

    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline RuntimeContext& WithModuleSha256(const Aws::String& value) { SetModuleSha256(value); return *this;}

    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline RuntimeContext& WithModuleSha256(Aws::String&& value) { SetModuleSha256(std::move(value)); return *this;}

    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline RuntimeContext& WithModuleSha256(const char* value) { SetModuleSha256(value); return *this;}


    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline const Aws::String& GetShellHistoryFilePath() const{ return m_shellHistoryFilePath; }

    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline bool ShellHistoryFilePathHasBeenSet() const { return m_shellHistoryFilePathHasBeenSet; }

    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline void SetShellHistoryFilePath(const Aws::String& value) { m_shellHistoryFilePathHasBeenSet = true; m_shellHistoryFilePath = value; }

    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline void SetShellHistoryFilePath(Aws::String&& value) { m_shellHistoryFilePathHasBeenSet = true; m_shellHistoryFilePath = std::move(value); }

    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline void SetShellHistoryFilePath(const char* value) { m_shellHistoryFilePathHasBeenSet = true; m_shellHistoryFilePath.assign(value); }

    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline RuntimeContext& WithShellHistoryFilePath(const Aws::String& value) { SetShellHistoryFilePath(value); return *this;}

    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline RuntimeContext& WithShellHistoryFilePath(Aws::String&& value) { SetShellHistoryFilePath(std::move(value)); return *this;}

    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline RuntimeContext& WithShellHistoryFilePath(const char* value) { SetShellHistoryFilePath(value); return *this;}


    /**
     * <p>Information about the process that had its memory overwritten by the current
     * process.</p>
     */
    inline const ProcessDetails& GetTargetProcess() const{ return m_targetProcess; }

    /**
     * <p>Information about the process that had its memory overwritten by the current
     * process.</p>
     */
    inline bool TargetProcessHasBeenSet() const { return m_targetProcessHasBeenSet; }

    /**
     * <p>Information about the process that had its memory overwritten by the current
     * process.</p>
     */
    inline void SetTargetProcess(const ProcessDetails& value) { m_targetProcessHasBeenSet = true; m_targetProcess = value; }

    /**
     * <p>Information about the process that had its memory overwritten by the current
     * process.</p>
     */
    inline void SetTargetProcess(ProcessDetails&& value) { m_targetProcessHasBeenSet = true; m_targetProcess = std::move(value); }

    /**
     * <p>Information about the process that had its memory overwritten by the current
     * process.</p>
     */
    inline RuntimeContext& WithTargetProcess(const ProcessDetails& value) { SetTargetProcess(value); return *this;}

    /**
     * <p>Information about the process that had its memory overwritten by the current
     * process.</p>
     */
    inline RuntimeContext& WithTargetProcess(ProcessDetails&& value) { SetTargetProcess(std::move(value)); return *this;}


    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline const Aws::String& GetAddressFamily() const{ return m_addressFamily; }

    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }

    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline void SetAddressFamily(const Aws::String& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }

    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline void SetAddressFamily(Aws::String&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }

    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline void SetAddressFamily(const char* value) { m_addressFamilyHasBeenSet = true; m_addressFamily.assign(value); }

    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline RuntimeContext& WithAddressFamily(const Aws::String& value) { SetAddressFamily(value); return *this;}

    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline RuntimeContext& WithAddressFamily(Aws::String&& value) { SetAddressFamily(std::move(value)); return *this;}

    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline RuntimeContext& WithAddressFamily(const char* value) { SetAddressFamily(value); return *this;}


    /**
     * <p>Specifies a particular protocol within the address family. Usually there is a
     * single protocol in address families. For example, the address family
     * <code>AF_INET</code> only has the IP protocol.</p>
     */
    inline int GetIanaProtocolNumber() const{ return m_ianaProtocolNumber; }

    /**
     * <p>Specifies a particular protocol within the address family. Usually there is a
     * single protocol in address families. For example, the address family
     * <code>AF_INET</code> only has the IP protocol.</p>
     */
    inline bool IanaProtocolNumberHasBeenSet() const { return m_ianaProtocolNumberHasBeenSet; }

    /**
     * <p>Specifies a particular protocol within the address family. Usually there is a
     * single protocol in address families. For example, the address family
     * <code>AF_INET</code> only has the IP protocol.</p>
     */
    inline void SetIanaProtocolNumber(int value) { m_ianaProtocolNumberHasBeenSet = true; m_ianaProtocolNumber = value; }

    /**
     * <p>Specifies a particular protocol within the address family. Usually there is a
     * single protocol in address families. For example, the address family
     * <code>AF_INET</code> only has the IP protocol.</p>
     */
    inline RuntimeContext& WithIanaProtocolNumber(int value) { SetIanaProtocolNumber(value); return *this;}


    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemoryRegions() const{ return m_memoryRegions; }

    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline bool MemoryRegionsHasBeenSet() const { return m_memoryRegionsHasBeenSet; }

    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline void SetMemoryRegions(const Aws::Vector<Aws::String>& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions = value; }

    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline void SetMemoryRegions(Aws::Vector<Aws::String>&& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions = std::move(value); }

    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline RuntimeContext& WithMemoryRegions(const Aws::Vector<Aws::String>& value) { SetMemoryRegions(value); return *this;}

    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline RuntimeContext& WithMemoryRegions(Aws::Vector<Aws::String>&& value) { SetMemoryRegions(std::move(value)); return *this;}

    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline RuntimeContext& AddMemoryRegions(const Aws::String& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions.push_back(value); return *this; }

    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline RuntimeContext& AddMemoryRegions(Aws::String&& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline RuntimeContext& AddMemoryRegions(const char* value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions.push_back(value); return *this; }

  private:

    ProcessDetails m_modifyingProcess;
    bool m_modifyingProcessHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_scriptPath;
    bool m_scriptPathHasBeenSet = false;

    Aws::String m_libraryPath;
    bool m_libraryPathHasBeenSet = false;

    Aws::String m_ldPreloadValue;
    bool m_ldPreloadValueHasBeenSet = false;

    Aws::String m_socketPath;
    bool m_socketPathHasBeenSet = false;

    Aws::String m_runcBinaryPath;
    bool m_runcBinaryPathHasBeenSet = false;

    Aws::String m_releaseAgentPath;
    bool m_releaseAgentPathHasBeenSet = false;

    Aws::String m_mountSource;
    bool m_mountSourceHasBeenSet = false;

    Aws::String m_mountTarget;
    bool m_mountTargetHasBeenSet = false;

    Aws::String m_fileSystemType;
    bool m_fileSystemTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_flags;
    bool m_flagsHasBeenSet = false;

    Aws::String m_moduleName;
    bool m_moduleNameHasBeenSet = false;

    Aws::String m_moduleFilePath;
    bool m_moduleFilePathHasBeenSet = false;

    Aws::String m_moduleSha256;
    bool m_moduleSha256HasBeenSet = false;

    Aws::String m_shellHistoryFilePath;
    bool m_shellHistoryFilePathHasBeenSet = false;

    ProcessDetails m_targetProcess;
    bool m_targetProcessHasBeenSet = false;

    Aws::String m_addressFamily;
    bool m_addressFamilyHasBeenSet = false;

    int m_ianaProtocolNumber;
    bool m_ianaProtocolNumberHasBeenSet = false;

    Aws::Vector<Aws::String> m_memoryRegions;
    bool m_memoryRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
