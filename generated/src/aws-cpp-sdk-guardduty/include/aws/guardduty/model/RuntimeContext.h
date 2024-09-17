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


    ///@{
    /**
     * <p>Information about the process that modified the current process. This is
     * available for multiple finding types.</p>
     */
    inline const ProcessDetails& GetModifyingProcess() const{ return m_modifyingProcess; }
    inline bool ModifyingProcessHasBeenSet() const { return m_modifyingProcessHasBeenSet; }
    inline void SetModifyingProcess(const ProcessDetails& value) { m_modifyingProcessHasBeenSet = true; m_modifyingProcess = value; }
    inline void SetModifyingProcess(ProcessDetails&& value) { m_modifyingProcessHasBeenSet = true; m_modifyingProcess = std::move(value); }
    inline RuntimeContext& WithModifyingProcess(const ProcessDetails& value) { SetModifyingProcess(value); return *this;}
    inline RuntimeContext& WithModifyingProcess(ProcessDetails&& value) { SetModifyingProcess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the process modified the current process. The
     * timestamp is in UTC date string format.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline RuntimeContext& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline RuntimeContext& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the script that was executed.</p>
     */
    inline const Aws::String& GetScriptPath() const{ return m_scriptPath; }
    inline bool ScriptPathHasBeenSet() const { return m_scriptPathHasBeenSet; }
    inline void SetScriptPath(const Aws::String& value) { m_scriptPathHasBeenSet = true; m_scriptPath = value; }
    inline void SetScriptPath(Aws::String&& value) { m_scriptPathHasBeenSet = true; m_scriptPath = std::move(value); }
    inline void SetScriptPath(const char* value) { m_scriptPathHasBeenSet = true; m_scriptPath.assign(value); }
    inline RuntimeContext& WithScriptPath(const Aws::String& value) { SetScriptPath(value); return *this;}
    inline RuntimeContext& WithScriptPath(Aws::String&& value) { SetScriptPath(std::move(value)); return *this;}
    inline RuntimeContext& WithScriptPath(const char* value) { SetScriptPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline const Aws::String& GetLibraryPath() const{ return m_libraryPath; }
    inline bool LibraryPathHasBeenSet() const { return m_libraryPathHasBeenSet; }
    inline void SetLibraryPath(const Aws::String& value) { m_libraryPathHasBeenSet = true; m_libraryPath = value; }
    inline void SetLibraryPath(Aws::String&& value) { m_libraryPathHasBeenSet = true; m_libraryPath = std::move(value); }
    inline void SetLibraryPath(const char* value) { m_libraryPathHasBeenSet = true; m_libraryPath.assign(value); }
    inline RuntimeContext& WithLibraryPath(const Aws::String& value) { SetLibraryPath(value); return *this;}
    inline RuntimeContext& WithLibraryPath(Aws::String&& value) { SetLibraryPath(std::move(value)); return *this;}
    inline RuntimeContext& WithLibraryPath(const char* value) { SetLibraryPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline const Aws::String& GetLdPreloadValue() const{ return m_ldPreloadValue; }
    inline bool LdPreloadValueHasBeenSet() const { return m_ldPreloadValueHasBeenSet; }
    inline void SetLdPreloadValue(const Aws::String& value) { m_ldPreloadValueHasBeenSet = true; m_ldPreloadValue = value; }
    inline void SetLdPreloadValue(Aws::String&& value) { m_ldPreloadValueHasBeenSet = true; m_ldPreloadValue = std::move(value); }
    inline void SetLdPreloadValue(const char* value) { m_ldPreloadValueHasBeenSet = true; m_ldPreloadValue.assign(value); }
    inline RuntimeContext& WithLdPreloadValue(const Aws::String& value) { SetLdPreloadValue(value); return *this;}
    inline RuntimeContext& WithLdPreloadValue(Aws::String&& value) { SetLdPreloadValue(std::move(value)); return *this;}
    inline RuntimeContext& WithLdPreloadValue(const char* value) { SetLdPreloadValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline const Aws::String& GetSocketPath() const{ return m_socketPath; }
    inline bool SocketPathHasBeenSet() const { return m_socketPathHasBeenSet; }
    inline void SetSocketPath(const Aws::String& value) { m_socketPathHasBeenSet = true; m_socketPath = value; }
    inline void SetSocketPath(Aws::String&& value) { m_socketPathHasBeenSet = true; m_socketPath = std::move(value); }
    inline void SetSocketPath(const char* value) { m_socketPathHasBeenSet = true; m_socketPath.assign(value); }
    inline RuntimeContext& WithSocketPath(const Aws::String& value) { SetSocketPath(value); return *this;}
    inline RuntimeContext& WithSocketPath(Aws::String&& value) { SetSocketPath(std::move(value)); return *this;}
    inline RuntimeContext& WithSocketPath(const char* value) { SetSocketPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline const Aws::String& GetRuncBinaryPath() const{ return m_runcBinaryPath; }
    inline bool RuncBinaryPathHasBeenSet() const { return m_runcBinaryPathHasBeenSet; }
    inline void SetRuncBinaryPath(const Aws::String& value) { m_runcBinaryPathHasBeenSet = true; m_runcBinaryPath = value; }
    inline void SetRuncBinaryPath(Aws::String&& value) { m_runcBinaryPathHasBeenSet = true; m_runcBinaryPath = std::move(value); }
    inline void SetRuncBinaryPath(const char* value) { m_runcBinaryPathHasBeenSet = true; m_runcBinaryPath.assign(value); }
    inline RuntimeContext& WithRuncBinaryPath(const Aws::String& value) { SetRuncBinaryPath(value); return *this;}
    inline RuntimeContext& WithRuncBinaryPath(Aws::String&& value) { SetRuncBinaryPath(std::move(value)); return *this;}
    inline RuntimeContext& WithRuncBinaryPath(const char* value) { SetRuncBinaryPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline const Aws::String& GetReleaseAgentPath() const{ return m_releaseAgentPath; }
    inline bool ReleaseAgentPathHasBeenSet() const { return m_releaseAgentPathHasBeenSet; }
    inline void SetReleaseAgentPath(const Aws::String& value) { m_releaseAgentPathHasBeenSet = true; m_releaseAgentPath = value; }
    inline void SetReleaseAgentPath(Aws::String&& value) { m_releaseAgentPathHasBeenSet = true; m_releaseAgentPath = std::move(value); }
    inline void SetReleaseAgentPath(const char* value) { m_releaseAgentPathHasBeenSet = true; m_releaseAgentPath.assign(value); }
    inline RuntimeContext& WithReleaseAgentPath(const Aws::String& value) { SetReleaseAgentPath(value); return *this;}
    inline RuntimeContext& WithReleaseAgentPath(Aws::String&& value) { SetReleaseAgentPath(std::move(value)); return *this;}
    inline RuntimeContext& WithReleaseAgentPath(const char* value) { SetReleaseAgentPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline const Aws::String& GetMountSource() const{ return m_mountSource; }
    inline bool MountSourceHasBeenSet() const { return m_mountSourceHasBeenSet; }
    inline void SetMountSource(const Aws::String& value) { m_mountSourceHasBeenSet = true; m_mountSource = value; }
    inline void SetMountSource(Aws::String&& value) { m_mountSourceHasBeenSet = true; m_mountSource = std::move(value); }
    inline void SetMountSource(const char* value) { m_mountSourceHasBeenSet = true; m_mountSource.assign(value); }
    inline RuntimeContext& WithMountSource(const Aws::String& value) { SetMountSource(value); return *this;}
    inline RuntimeContext& WithMountSource(Aws::String&& value) { SetMountSource(std::move(value)); return *this;}
    inline RuntimeContext& WithMountSource(const char* value) { SetMountSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline const Aws::String& GetMountTarget() const{ return m_mountTarget; }
    inline bool MountTargetHasBeenSet() const { return m_mountTargetHasBeenSet; }
    inline void SetMountTarget(const Aws::String& value) { m_mountTargetHasBeenSet = true; m_mountTarget = value; }
    inline void SetMountTarget(Aws::String&& value) { m_mountTargetHasBeenSet = true; m_mountTarget = std::move(value); }
    inline void SetMountTarget(const char* value) { m_mountTargetHasBeenSet = true; m_mountTarget.assign(value); }
    inline RuntimeContext& WithMountTarget(const Aws::String& value) { SetMountTarget(value); return *this;}
    inline RuntimeContext& WithMountTarget(Aws::String&& value) { SetMountTarget(std::move(value)); return *this;}
    inline RuntimeContext& WithMountTarget(const char* value) { SetMountTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline const Aws::String& GetFileSystemType() const{ return m_fileSystemType; }
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }
    inline void SetFileSystemType(const Aws::String& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }
    inline void SetFileSystemType(Aws::String&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::move(value); }
    inline void SetFileSystemType(const char* value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType.assign(value); }
    inline RuntimeContext& WithFileSystemType(const Aws::String& value) { SetFileSystemType(value); return *this;}
    inline RuntimeContext& WithFileSystemType(Aws::String&& value) { SetFileSystemType(std::move(value)); return *this;}
    inline RuntimeContext& WithFileSystemType(const char* value) { SetFileSystemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlags() const{ return m_flags; }
    inline bool FlagsHasBeenSet() const { return m_flagsHasBeenSet; }
    inline void SetFlags(const Aws::Vector<Aws::String>& value) { m_flagsHasBeenSet = true; m_flags = value; }
    inline void SetFlags(Aws::Vector<Aws::String>&& value) { m_flagsHasBeenSet = true; m_flags = std::move(value); }
    inline RuntimeContext& WithFlags(const Aws::Vector<Aws::String>& value) { SetFlags(value); return *this;}
    inline RuntimeContext& WithFlags(Aws::Vector<Aws::String>&& value) { SetFlags(std::move(value)); return *this;}
    inline RuntimeContext& AddFlags(const Aws::String& value) { m_flagsHasBeenSet = true; m_flags.push_back(value); return *this; }
    inline RuntimeContext& AddFlags(Aws::String&& value) { m_flagsHasBeenSet = true; m_flags.push_back(std::move(value)); return *this; }
    inline RuntimeContext& AddFlags(const char* value) { m_flagsHasBeenSet = true; m_flags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline const Aws::String& GetModuleName() const{ return m_moduleName; }
    inline bool ModuleNameHasBeenSet() const { return m_moduleNameHasBeenSet; }
    inline void SetModuleName(const Aws::String& value) { m_moduleNameHasBeenSet = true; m_moduleName = value; }
    inline void SetModuleName(Aws::String&& value) { m_moduleNameHasBeenSet = true; m_moduleName = std::move(value); }
    inline void SetModuleName(const char* value) { m_moduleNameHasBeenSet = true; m_moduleName.assign(value); }
    inline RuntimeContext& WithModuleName(const Aws::String& value) { SetModuleName(value); return *this;}
    inline RuntimeContext& WithModuleName(Aws::String&& value) { SetModuleName(std::move(value)); return *this;}
    inline RuntimeContext& WithModuleName(const char* value) { SetModuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline const Aws::String& GetModuleFilePath() const{ return m_moduleFilePath; }
    inline bool ModuleFilePathHasBeenSet() const { return m_moduleFilePathHasBeenSet; }
    inline void SetModuleFilePath(const Aws::String& value) { m_moduleFilePathHasBeenSet = true; m_moduleFilePath = value; }
    inline void SetModuleFilePath(Aws::String&& value) { m_moduleFilePathHasBeenSet = true; m_moduleFilePath = std::move(value); }
    inline void SetModuleFilePath(const char* value) { m_moduleFilePathHasBeenSet = true; m_moduleFilePath.assign(value); }
    inline RuntimeContext& WithModuleFilePath(const Aws::String& value) { SetModuleFilePath(value); return *this;}
    inline RuntimeContext& WithModuleFilePath(Aws::String&& value) { SetModuleFilePath(std::move(value)); return *this;}
    inline RuntimeContext& WithModuleFilePath(const char* value) { SetModuleFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline const Aws::String& GetModuleSha256() const{ return m_moduleSha256; }
    inline bool ModuleSha256HasBeenSet() const { return m_moduleSha256HasBeenSet; }
    inline void SetModuleSha256(const Aws::String& value) { m_moduleSha256HasBeenSet = true; m_moduleSha256 = value; }
    inline void SetModuleSha256(Aws::String&& value) { m_moduleSha256HasBeenSet = true; m_moduleSha256 = std::move(value); }
    inline void SetModuleSha256(const char* value) { m_moduleSha256HasBeenSet = true; m_moduleSha256.assign(value); }
    inline RuntimeContext& WithModuleSha256(const Aws::String& value) { SetModuleSha256(value); return *this;}
    inline RuntimeContext& WithModuleSha256(Aws::String&& value) { SetModuleSha256(std::move(value)); return *this;}
    inline RuntimeContext& WithModuleSha256(const char* value) { SetModuleSha256(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline const Aws::String& GetShellHistoryFilePath() const{ return m_shellHistoryFilePath; }
    inline bool ShellHistoryFilePathHasBeenSet() const { return m_shellHistoryFilePathHasBeenSet; }
    inline void SetShellHistoryFilePath(const Aws::String& value) { m_shellHistoryFilePathHasBeenSet = true; m_shellHistoryFilePath = value; }
    inline void SetShellHistoryFilePath(Aws::String&& value) { m_shellHistoryFilePathHasBeenSet = true; m_shellHistoryFilePath = std::move(value); }
    inline void SetShellHistoryFilePath(const char* value) { m_shellHistoryFilePathHasBeenSet = true; m_shellHistoryFilePath.assign(value); }
    inline RuntimeContext& WithShellHistoryFilePath(const Aws::String& value) { SetShellHistoryFilePath(value); return *this;}
    inline RuntimeContext& WithShellHistoryFilePath(Aws::String&& value) { SetShellHistoryFilePath(std::move(value)); return *this;}
    inline RuntimeContext& WithShellHistoryFilePath(const char* value) { SetShellHistoryFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the process that had its memory overwritten by the current
     * process.</p>
     */
    inline const ProcessDetails& GetTargetProcess() const{ return m_targetProcess; }
    inline bool TargetProcessHasBeenSet() const { return m_targetProcessHasBeenSet; }
    inline void SetTargetProcess(const ProcessDetails& value) { m_targetProcessHasBeenSet = true; m_targetProcess = value; }
    inline void SetTargetProcess(ProcessDetails&& value) { m_targetProcessHasBeenSet = true; m_targetProcess = std::move(value); }
    inline RuntimeContext& WithTargetProcess(const ProcessDetails& value) { SetTargetProcess(value); return *this;}
    inline RuntimeContext& WithTargetProcess(ProcessDetails&& value) { SetTargetProcess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline const Aws::String& GetAddressFamily() const{ return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(const Aws::String& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline void SetAddressFamily(Aws::String&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }
    inline void SetAddressFamily(const char* value) { m_addressFamilyHasBeenSet = true; m_addressFamily.assign(value); }
    inline RuntimeContext& WithAddressFamily(const Aws::String& value) { SetAddressFamily(value); return *this;}
    inline RuntimeContext& WithAddressFamily(Aws::String&& value) { SetAddressFamily(std::move(value)); return *this;}
    inline RuntimeContext& WithAddressFamily(const char* value) { SetAddressFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a particular protocol within the address family. Usually there is a
     * single protocol in address families. For example, the address family
     * <code>AF_INET</code> only has the IP protocol.</p>
     */
    inline int GetIanaProtocolNumber() const{ return m_ianaProtocolNumber; }
    inline bool IanaProtocolNumberHasBeenSet() const { return m_ianaProtocolNumberHasBeenSet; }
    inline void SetIanaProtocolNumber(int value) { m_ianaProtocolNumberHasBeenSet = true; m_ianaProtocolNumber = value; }
    inline RuntimeContext& WithIanaProtocolNumber(int value) { SetIanaProtocolNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemoryRegions() const{ return m_memoryRegions; }
    inline bool MemoryRegionsHasBeenSet() const { return m_memoryRegionsHasBeenSet; }
    inline void SetMemoryRegions(const Aws::Vector<Aws::String>& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions = value; }
    inline void SetMemoryRegions(Aws::Vector<Aws::String>&& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions = std::move(value); }
    inline RuntimeContext& WithMemoryRegions(const Aws::Vector<Aws::String>& value) { SetMemoryRegions(value); return *this;}
    inline RuntimeContext& WithMemoryRegions(Aws::Vector<Aws::String>&& value) { SetMemoryRegions(std::move(value)); return *this;}
    inline RuntimeContext& AddMemoryRegions(const Aws::String& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions.push_back(value); return *this; }
    inline RuntimeContext& AddMemoryRegions(Aws::String&& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions.push_back(std::move(value)); return *this; }
    inline RuntimeContext& AddMemoryRegions(const char* value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the potentially suspicious tool.</p>
     */
    inline const Aws::String& GetToolName() const{ return m_toolName; }
    inline bool ToolNameHasBeenSet() const { return m_toolNameHasBeenSet; }
    inline void SetToolName(const Aws::String& value) { m_toolNameHasBeenSet = true; m_toolName = value; }
    inline void SetToolName(Aws::String&& value) { m_toolNameHasBeenSet = true; m_toolName = std::move(value); }
    inline void SetToolName(const char* value) { m_toolNameHasBeenSet = true; m_toolName.assign(value); }
    inline RuntimeContext& WithToolName(const Aws::String& value) { SetToolName(value); return *this;}
    inline RuntimeContext& WithToolName(Aws::String&& value) { SetToolName(std::move(value)); return *this;}
    inline RuntimeContext& WithToolName(const char* value) { SetToolName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Category that the tool belongs to. Some of the examples are Backdoor Tool,
     * Pentest Tool, Network Scanner, and Network Sniffer.</p>
     */
    inline const Aws::String& GetToolCategory() const{ return m_toolCategory; }
    inline bool ToolCategoryHasBeenSet() const { return m_toolCategoryHasBeenSet; }
    inline void SetToolCategory(const Aws::String& value) { m_toolCategoryHasBeenSet = true; m_toolCategory = value; }
    inline void SetToolCategory(Aws::String&& value) { m_toolCategoryHasBeenSet = true; m_toolCategory = std::move(value); }
    inline void SetToolCategory(const char* value) { m_toolCategoryHasBeenSet = true; m_toolCategory.assign(value); }
    inline RuntimeContext& WithToolCategory(const Aws::String& value) { SetToolCategory(value); return *this;}
    inline RuntimeContext& WithToolCategory(Aws::String&& value) { SetToolCategory(std::move(value)); return *this;}
    inline RuntimeContext& WithToolCategory(const char* value) { SetToolCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the security service that has been potentially disabled.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline RuntimeContext& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline RuntimeContext& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline RuntimeContext& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Example of the command line involved in the suspicious activity.</p>
     */
    inline const Aws::String& GetCommandLineExample() const{ return m_commandLineExample; }
    inline bool CommandLineExampleHasBeenSet() const { return m_commandLineExampleHasBeenSet; }
    inline void SetCommandLineExample(const Aws::String& value) { m_commandLineExampleHasBeenSet = true; m_commandLineExample = value; }
    inline void SetCommandLineExample(Aws::String&& value) { m_commandLineExampleHasBeenSet = true; m_commandLineExample = std::move(value); }
    inline void SetCommandLineExample(const char* value) { m_commandLineExampleHasBeenSet = true; m_commandLineExample.assign(value); }
    inline RuntimeContext& WithCommandLineExample(const Aws::String& value) { SetCommandLineExample(value); return *this;}
    inline RuntimeContext& WithCommandLineExample(Aws::String&& value) { SetCommandLineExample(std::move(value)); return *this;}
    inline RuntimeContext& WithCommandLineExample(const char* value) { SetCommandLineExample(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The suspicious file path for which the threat intelligence details were
     * found.</p>
     */
    inline const Aws::String& GetThreatFilePath() const{ return m_threatFilePath; }
    inline bool ThreatFilePathHasBeenSet() const { return m_threatFilePathHasBeenSet; }
    inline void SetThreatFilePath(const Aws::String& value) { m_threatFilePathHasBeenSet = true; m_threatFilePath = value; }
    inline void SetThreatFilePath(Aws::String&& value) { m_threatFilePathHasBeenSet = true; m_threatFilePath = std::move(value); }
    inline void SetThreatFilePath(const char* value) { m_threatFilePathHasBeenSet = true; m_threatFilePath.assign(value); }
    inline RuntimeContext& WithThreatFilePath(const Aws::String& value) { SetThreatFilePath(value); return *this;}
    inline RuntimeContext& WithThreatFilePath(Aws::String&& value) { SetThreatFilePath(std::move(value)); return *this;}
    inline RuntimeContext& WithThreatFilePath(const char* value) { SetThreatFilePath(value); return *this;}
    ///@}
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

    Aws::String m_toolName;
    bool m_toolNameHasBeenSet = false;

    Aws::String m_toolCategory;
    bool m_toolCategoryHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_commandLineExample;
    bool m_commandLineExampleHasBeenSet = false;

    Aws::String m_threatFilePath;
    bool m_threatFilePathHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
