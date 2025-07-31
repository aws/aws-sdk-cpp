/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/PackageManager.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Information on the vulnerable package identified by a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/VulnerablePackage">AWS
   * API Reference</a></p>
   */
  class VulnerablePackage
  {
  public:
    AWS_INSPECTOR2_API VulnerablePackage() = default;
    AWS_INSPECTOR2_API VulnerablePackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API VulnerablePackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VulnerablePackage& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    VulnerablePackage& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline const Aws::String& GetSourceLayerHash() const { return m_sourceLayerHash; }
    inline bool SourceLayerHashHasBeenSet() const { return m_sourceLayerHashHasBeenSet; }
    template<typename SourceLayerHashT = Aws::String>
    void SetSourceLayerHash(SourceLayerHashT&& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = std::forward<SourceLayerHashT>(value); }
    template<typename SourceLayerHashT = Aws::String>
    VulnerablePackage& WithSourceLayerHash(SourceLayerHashT&& value) { SetSourceLayerHash(std::forward<SourceLayerHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch of the vulnerable package.</p>
     */
    inline int GetEpoch() const { return m_epoch; }
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }
    inline void SetEpoch(int value) { m_epochHasBeenSet = true; m_epoch = value; }
    inline VulnerablePackage& WithEpoch(int value) { SetEpoch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline const Aws::String& GetRelease() const { return m_release; }
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }
    template<typename ReleaseT = Aws::String>
    void SetRelease(ReleaseT&& value) { m_releaseHasBeenSet = true; m_release = std::forward<ReleaseT>(value); }
    template<typename ReleaseT = Aws::String>
    VulnerablePackage& WithRelease(ReleaseT&& value) { SetRelease(std::forward<ReleaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline const Aws::String& GetArch() const { return m_arch; }
    inline bool ArchHasBeenSet() const { return m_archHasBeenSet; }
    template<typename ArchT = Aws::String>
    void SetArch(ArchT&& value) { m_archHasBeenSet = true; m_arch = std::forward<ArchT>(value); }
    template<typename ArchT = Aws::String>
    VulnerablePackage& WithArch(ArchT&& value) { SetArch(std::forward<ArchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline PackageManager GetPackageManager() const { return m_packageManager; }
    inline bool PackageManagerHasBeenSet() const { return m_packageManagerHasBeenSet; }
    inline void SetPackageManager(PackageManager value) { m_packageManagerHasBeenSet = true; m_packageManager = value; }
    inline VulnerablePackage& WithPackageManager(PackageManager value) { SetPackageManager(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    VulnerablePackage& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline const Aws::String& GetFixedInVersion() const { return m_fixedInVersion; }
    inline bool FixedInVersionHasBeenSet() const { return m_fixedInVersionHasBeenSet; }
    template<typename FixedInVersionT = Aws::String>
    void SetFixedInVersion(FixedInVersionT&& value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion = std::forward<FixedInVersionT>(value); }
    template<typename FixedInVersionT = Aws::String>
    VulnerablePackage& WithFixedInVersion(FixedInVersionT&& value) { SetFixedInVersion(std::forward<FixedInVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline const Aws::String& GetRemediation() const { return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    template<typename RemediationT = Aws::String>
    void SetRemediation(RemediationT&& value) { m_remediationHasBeenSet = true; m_remediation = std::forward<RemediationT>(value); }
    template<typename RemediationT = Aws::String>
    VulnerablePackage& WithRemediation(RemediationT&& value) { SetRemediation(std::forward<RemediationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the Amazon Web Services Lambda function
     * affected by a finding.</p>
     */
    inline const Aws::String& GetSourceLambdaLayerArn() const { return m_sourceLambdaLayerArn; }
    inline bool SourceLambdaLayerArnHasBeenSet() const { return m_sourceLambdaLayerArnHasBeenSet; }
    template<typename SourceLambdaLayerArnT = Aws::String>
    void SetSourceLambdaLayerArn(SourceLambdaLayerArnT&& value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn = std::forward<SourceLambdaLayerArnT>(value); }
    template<typename SourceLambdaLayerArnT = Aws::String>
    VulnerablePackage& WithSourceLambdaLayerArn(SourceLambdaLayerArnT&& value) { SetSourceLambdaLayerArn(std::forward<SourceLambdaLayerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_sourceLayerHash;
    bool m_sourceLayerHashHasBeenSet = false;

    int m_epoch{0};
    bool m_epochHasBeenSet = false;

    Aws::String m_release;
    bool m_releaseHasBeenSet = false;

    Aws::String m_arch;
    bool m_archHasBeenSet = false;

    PackageManager m_packageManager{PackageManager::NOT_SET};
    bool m_packageManagerHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    Aws::String m_fixedInVersion;
    bool m_fixedInVersionHasBeenSet = false;

    Aws::String m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::String m_sourceLambdaLayerArn;
    bool m_sourceLambdaLayerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
