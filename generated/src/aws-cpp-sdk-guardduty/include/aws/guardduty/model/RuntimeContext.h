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
    AWS_GUARDDUTY_API RuntimeContext() = default;
    AWS_GUARDDUTY_API RuntimeContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RuntimeContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the process that modified the current process. This is
     * available for multiple finding types.</p>
     */
    inline const ProcessDetails& GetModifyingProcess() const { return m_modifyingProcess; }
    inline bool ModifyingProcessHasBeenSet() const { return m_modifyingProcessHasBeenSet; }
    template<typename ModifyingProcessT = ProcessDetails>
    void SetModifyingProcess(ModifyingProcessT&& value) { m_modifyingProcessHasBeenSet = true; m_modifyingProcess = std::forward<ModifyingProcessT>(value); }
    template<typename ModifyingProcessT = ProcessDetails>
    RuntimeContext& WithModifyingProcess(ModifyingProcessT&& value) { SetModifyingProcess(std::forward<ModifyingProcessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the process modified the current process. The
     * timestamp is in UTC date string format.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    RuntimeContext& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the script that was executed.</p>
     */
    inline const Aws::String& GetScriptPath() const { return m_scriptPath; }
    inline bool ScriptPathHasBeenSet() const { return m_scriptPathHasBeenSet; }
    template<typename ScriptPathT = Aws::String>
    void SetScriptPath(ScriptPathT&& value) { m_scriptPathHasBeenSet = true; m_scriptPath = std::forward<ScriptPathT>(value); }
    template<typename ScriptPathT = Aws::String>
    RuntimeContext& WithScriptPath(ScriptPathT&& value) { SetScriptPath(std::forward<ScriptPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the new library that was loaded.</p>
     */
    inline const Aws::String& GetLibraryPath() const { return m_libraryPath; }
    inline bool LibraryPathHasBeenSet() const { return m_libraryPathHasBeenSet; }
    template<typename LibraryPathT = Aws::String>
    void SetLibraryPath(LibraryPathT&& value) { m_libraryPathHasBeenSet = true; m_libraryPath = std::forward<LibraryPathT>(value); }
    template<typename LibraryPathT = Aws::String>
    RuntimeContext& WithLibraryPath(LibraryPathT&& value) { SetLibraryPath(std::forward<LibraryPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the LD_PRELOAD environment variable.</p>
     */
    inline const Aws::String& GetLdPreloadValue() const { return m_ldPreloadValue; }
    inline bool LdPreloadValueHasBeenSet() const { return m_ldPreloadValueHasBeenSet; }
    template<typename LdPreloadValueT = Aws::String>
    void SetLdPreloadValue(LdPreloadValueT&& value) { m_ldPreloadValueHasBeenSet = true; m_ldPreloadValue = std::forward<LdPreloadValueT>(value); }
    template<typename LdPreloadValueT = Aws::String>
    RuntimeContext& WithLdPreloadValue(LdPreloadValueT&& value) { SetLdPreloadValue(std::forward<LdPreloadValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the docket socket that was accessed.</p>
     */
    inline const Aws::String& GetSocketPath() const { return m_socketPath; }
    inline bool SocketPathHasBeenSet() const { return m_socketPathHasBeenSet; }
    template<typename SocketPathT = Aws::String>
    void SetSocketPath(SocketPathT&& value) { m_socketPathHasBeenSet = true; m_socketPath = std::forward<SocketPathT>(value); }
    template<typename SocketPathT = Aws::String>
    RuntimeContext& WithSocketPath(SocketPathT&& value) { SetSocketPath(std::forward<SocketPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the leveraged <code>runc</code> implementation.</p>
     */
    inline const Aws::String& GetRuncBinaryPath() const { return m_runcBinaryPath; }
    inline bool RuncBinaryPathHasBeenSet() const { return m_runcBinaryPathHasBeenSet; }
    template<typename RuncBinaryPathT = Aws::String>
    void SetRuncBinaryPath(RuncBinaryPathT&& value) { m_runcBinaryPathHasBeenSet = true; m_runcBinaryPath = std::forward<RuncBinaryPathT>(value); }
    template<typename RuncBinaryPathT = Aws::String>
    RuntimeContext& WithRuncBinaryPath(RuncBinaryPathT&& value) { SetRuncBinaryPath(std::forward<RuncBinaryPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path in the container that modified the release agent file.</p>
     */
    inline const Aws::String& GetReleaseAgentPath() const { return m_releaseAgentPath; }
    inline bool ReleaseAgentPathHasBeenSet() const { return m_releaseAgentPathHasBeenSet; }
    template<typename ReleaseAgentPathT = Aws::String>
    void SetReleaseAgentPath(ReleaseAgentPathT&& value) { m_releaseAgentPathHasBeenSet = true; m_releaseAgentPath = std::forward<ReleaseAgentPathT>(value); }
    template<typename ReleaseAgentPathT = Aws::String>
    RuntimeContext& WithReleaseAgentPath(ReleaseAgentPathT&& value) { SetReleaseAgentPath(std::forward<ReleaseAgentPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path on the host that is mounted by the container.</p>
     */
    inline const Aws::String& GetMountSource() const { return m_mountSource; }
    inline bool MountSourceHasBeenSet() const { return m_mountSourceHasBeenSet; }
    template<typename MountSourceT = Aws::String>
    void SetMountSource(MountSourceT&& value) { m_mountSourceHasBeenSet = true; m_mountSource = std::forward<MountSourceT>(value); }
    template<typename MountSourceT = Aws::String>
    RuntimeContext& WithMountSource(MountSourceT&& value) { SetMountSource(std::forward<MountSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path in the container that is mapped to the host directory.</p>
     */
    inline const Aws::String& GetMountTarget() const { return m_mountTarget; }
    inline bool MountTargetHasBeenSet() const { return m_mountTargetHasBeenSet; }
    template<typename MountTargetT = Aws::String>
    void SetMountTarget(MountTargetT&& value) { m_mountTargetHasBeenSet = true; m_mountTarget = std::forward<MountTargetT>(value); }
    template<typename MountTargetT = Aws::String>
    RuntimeContext& WithMountTarget(MountTargetT&& value) { SetMountTarget(std::forward<MountTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the type of mounted fileSystem.</p>
     */
    inline const Aws::String& GetFileSystemType() const { return m_fileSystemType; }
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }
    template<typename FileSystemTypeT = Aws::String>
    void SetFileSystemType(FileSystemTypeT&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::forward<FileSystemTypeT>(value); }
    template<typename FileSystemTypeT = Aws::String>
    RuntimeContext& WithFileSystemType(FileSystemTypeT&& value) { SetFileSystemType(std::forward<FileSystemTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents options that control the behavior of a runtime operation or
     * action. For example, a filesystem mount operation may contain a read-only
     * flag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlags() const { return m_flags; }
    inline bool FlagsHasBeenSet() const { return m_flagsHasBeenSet; }
    template<typename FlagsT = Aws::Vector<Aws::String>>
    void SetFlags(FlagsT&& value) { m_flagsHasBeenSet = true; m_flags = std::forward<FlagsT>(value); }
    template<typename FlagsT = Aws::Vector<Aws::String>>
    RuntimeContext& WithFlags(FlagsT&& value) { SetFlags(std::forward<FlagsT>(value)); return *this;}
    template<typename FlagsT = Aws::String>
    RuntimeContext& AddFlags(FlagsT&& value) { m_flagsHasBeenSet = true; m_flags.emplace_back(std::forward<FlagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the module loaded into the kernel.</p>
     */
    inline const Aws::String& GetModuleName() const { return m_moduleName; }
    inline bool ModuleNameHasBeenSet() const { return m_moduleNameHasBeenSet; }
    template<typename ModuleNameT = Aws::String>
    void SetModuleName(ModuleNameT&& value) { m_moduleNameHasBeenSet = true; m_moduleName = std::forward<ModuleNameT>(value); }
    template<typename ModuleNameT = Aws::String>
    RuntimeContext& WithModuleName(ModuleNameT&& value) { SetModuleName(std::forward<ModuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the module loaded into the kernel.</p>
     */
    inline const Aws::String& GetModuleFilePath() const { return m_moduleFilePath; }
    inline bool ModuleFilePathHasBeenSet() const { return m_moduleFilePathHasBeenSet; }
    template<typename ModuleFilePathT = Aws::String>
    void SetModuleFilePath(ModuleFilePathT&& value) { m_moduleFilePathHasBeenSet = true; m_moduleFilePath = std::forward<ModuleFilePathT>(value); }
    template<typename ModuleFilePathT = Aws::String>
    RuntimeContext& WithModuleFilePath(ModuleFilePathT&& value) { SetModuleFilePath(std::forward<ModuleFilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>SHA256</code> hash of the module.</p>
     */
    inline const Aws::String& GetModuleSha256() const { return m_moduleSha256; }
    inline bool ModuleSha256HasBeenSet() const { return m_moduleSha256HasBeenSet; }
    template<typename ModuleSha256T = Aws::String>
    void SetModuleSha256(ModuleSha256T&& value) { m_moduleSha256HasBeenSet = true; m_moduleSha256 = std::forward<ModuleSha256T>(value); }
    template<typename ModuleSha256T = Aws::String>
    RuntimeContext& WithModuleSha256(ModuleSha256T&& value) { SetModuleSha256(std::forward<ModuleSha256T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the modified shell history file.</p>
     */
    inline const Aws::String& GetShellHistoryFilePath() const { return m_shellHistoryFilePath; }
    inline bool ShellHistoryFilePathHasBeenSet() const { return m_shellHistoryFilePathHasBeenSet; }
    template<typename ShellHistoryFilePathT = Aws::String>
    void SetShellHistoryFilePath(ShellHistoryFilePathT&& value) { m_shellHistoryFilePathHasBeenSet = true; m_shellHistoryFilePath = std::forward<ShellHistoryFilePathT>(value); }
    template<typename ShellHistoryFilePathT = Aws::String>
    RuntimeContext& WithShellHistoryFilePath(ShellHistoryFilePathT&& value) { SetShellHistoryFilePath(std::forward<ShellHistoryFilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the process that had its memory overwritten by the current
     * process.</p>
     */
    inline const ProcessDetails& GetTargetProcess() const { return m_targetProcess; }
    inline bool TargetProcessHasBeenSet() const { return m_targetProcessHasBeenSet; }
    template<typename TargetProcessT = ProcessDetails>
    void SetTargetProcess(TargetProcessT&& value) { m_targetProcessHasBeenSet = true; m_targetProcess = std::forward<TargetProcessT>(value); }
    template<typename TargetProcessT = ProcessDetails>
    RuntimeContext& WithTargetProcess(TargetProcessT&& value) { SetTargetProcess(std::forward<TargetProcessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the communication protocol associated with the address. For
     * example, the address family <code>AF_INET</code> is used for IP version of 4
     * protocol.</p>
     */
    inline const Aws::String& GetAddressFamily() const { return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    template<typename AddressFamilyT = Aws::String>
    void SetAddressFamily(AddressFamilyT&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::forward<AddressFamilyT>(value); }
    template<typename AddressFamilyT = Aws::String>
    RuntimeContext& WithAddressFamily(AddressFamilyT&& value) { SetAddressFamily(std::forward<AddressFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a particular protocol within the address family. Usually there is a
     * single protocol in address families. For example, the address family
     * <code>AF_INET</code> only has the IP protocol.</p>
     */
    inline int GetIanaProtocolNumber() const { return m_ianaProtocolNumber; }
    inline bool IanaProtocolNumberHasBeenSet() const { return m_ianaProtocolNumberHasBeenSet; }
    inline void SetIanaProtocolNumber(int value) { m_ianaProtocolNumberHasBeenSet = true; m_ianaProtocolNumber = value; }
    inline RuntimeContext& WithIanaProtocolNumber(int value) { SetIanaProtocolNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Region of a process's address space such as stack and heap.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMemoryRegions() const { return m_memoryRegions; }
    inline bool MemoryRegionsHasBeenSet() const { return m_memoryRegionsHasBeenSet; }
    template<typename MemoryRegionsT = Aws::Vector<Aws::String>>
    void SetMemoryRegions(MemoryRegionsT&& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions = std::forward<MemoryRegionsT>(value); }
    template<typename MemoryRegionsT = Aws::Vector<Aws::String>>
    RuntimeContext& WithMemoryRegions(MemoryRegionsT&& value) { SetMemoryRegions(std::forward<MemoryRegionsT>(value)); return *this;}
    template<typename MemoryRegionsT = Aws::String>
    RuntimeContext& AddMemoryRegions(MemoryRegionsT&& value) { m_memoryRegionsHasBeenSet = true; m_memoryRegions.emplace_back(std::forward<MemoryRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Name of the potentially suspicious tool.</p>
     */
    inline const Aws::String& GetToolName() const { return m_toolName; }
    inline bool ToolNameHasBeenSet() const { return m_toolNameHasBeenSet; }
    template<typename ToolNameT = Aws::String>
    void SetToolName(ToolNameT&& value) { m_toolNameHasBeenSet = true; m_toolName = std::forward<ToolNameT>(value); }
    template<typename ToolNameT = Aws::String>
    RuntimeContext& WithToolName(ToolNameT&& value) { SetToolName(std::forward<ToolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Category that the tool belongs to. Some of the examples are Backdoor Tool,
     * Pentest Tool, Network Scanner, and Network Sniffer.</p>
     */
    inline const Aws::String& GetToolCategory() const { return m_toolCategory; }
    inline bool ToolCategoryHasBeenSet() const { return m_toolCategoryHasBeenSet; }
    template<typename ToolCategoryT = Aws::String>
    void SetToolCategory(ToolCategoryT&& value) { m_toolCategoryHasBeenSet = true; m_toolCategory = std::forward<ToolCategoryT>(value); }
    template<typename ToolCategoryT = Aws::String>
    RuntimeContext& WithToolCategory(ToolCategoryT&& value) { SetToolCategory(std::forward<ToolCategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the security service that has been potentially disabled.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    RuntimeContext& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Example of the command line involved in the suspicious activity.</p>
     */
    inline const Aws::String& GetCommandLineExample() const { return m_commandLineExample; }
    inline bool CommandLineExampleHasBeenSet() const { return m_commandLineExampleHasBeenSet; }
    template<typename CommandLineExampleT = Aws::String>
    void SetCommandLineExample(CommandLineExampleT&& value) { m_commandLineExampleHasBeenSet = true; m_commandLineExample = std::forward<CommandLineExampleT>(value); }
    template<typename CommandLineExampleT = Aws::String>
    RuntimeContext& WithCommandLineExample(CommandLineExampleT&& value) { SetCommandLineExample(std::forward<CommandLineExampleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The suspicious file path for which the threat intelligence details were
     * found.</p>
     */
    inline const Aws::String& GetThreatFilePath() const { return m_threatFilePath; }
    inline bool ThreatFilePathHasBeenSet() const { return m_threatFilePathHasBeenSet; }
    template<typename ThreatFilePathT = Aws::String>
    void SetThreatFilePath(ThreatFilePathT&& value) { m_threatFilePathHasBeenSet = true; m_threatFilePath = std::forward<ThreatFilePathT>(value); }
    template<typename ThreatFilePathT = Aws::String>
    RuntimeContext& WithThreatFilePath(ThreatFilePathT&& value) { SetThreatFilePath(std::forward<ThreatFilePathT>(value)); return *this;}
    ///@}
  private:

    ProcessDetails m_modifyingProcess;
    bool m_modifyingProcessHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
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

    int m_ianaProtocolNumber{0};
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
