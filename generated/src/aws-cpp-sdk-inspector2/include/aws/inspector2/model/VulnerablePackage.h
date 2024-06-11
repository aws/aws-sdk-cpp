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
    AWS_INSPECTOR2_API VulnerablePackage();
    AWS_INSPECTOR2_API VulnerablePackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API VulnerablePackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline const Aws::String& GetArch() const{ return m_arch; }
    inline bool ArchHasBeenSet() const { return m_archHasBeenSet; }
    inline void SetArch(const Aws::String& value) { m_archHasBeenSet = true; m_arch = value; }
    inline void SetArch(Aws::String&& value) { m_archHasBeenSet = true; m_arch = std::move(value); }
    inline void SetArch(const char* value) { m_archHasBeenSet = true; m_arch.assign(value); }
    inline VulnerablePackage& WithArch(const Aws::String& value) { SetArch(value); return *this;}
    inline VulnerablePackage& WithArch(Aws::String&& value) { SetArch(std::move(value)); return *this;}
    inline VulnerablePackage& WithArch(const char* value) { SetArch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch of the vulnerable package.</p>
     */
    inline int GetEpoch() const{ return m_epoch; }
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }
    inline void SetEpoch(int value) { m_epochHasBeenSet = true; m_epoch = value; }
    inline VulnerablePackage& WithEpoch(int value) { SetEpoch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline VulnerablePackage& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline VulnerablePackage& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline VulnerablePackage& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline const Aws::String& GetFixedInVersion() const{ return m_fixedInVersion; }
    inline bool FixedInVersionHasBeenSet() const { return m_fixedInVersionHasBeenSet; }
    inline void SetFixedInVersion(const Aws::String& value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion = value; }
    inline void SetFixedInVersion(Aws::String&& value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion = std::move(value); }
    inline void SetFixedInVersion(const char* value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion.assign(value); }
    inline VulnerablePackage& WithFixedInVersion(const Aws::String& value) { SetFixedInVersion(value); return *this;}
    inline VulnerablePackage& WithFixedInVersion(Aws::String&& value) { SetFixedInVersion(std::move(value)); return *this;}
    inline VulnerablePackage& WithFixedInVersion(const char* value) { SetFixedInVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VulnerablePackage& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VulnerablePackage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VulnerablePackage& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline const PackageManager& GetPackageManager() const{ return m_packageManager; }
    inline bool PackageManagerHasBeenSet() const { return m_packageManagerHasBeenSet; }
    inline void SetPackageManager(const PackageManager& value) { m_packageManagerHasBeenSet = true; m_packageManager = value; }
    inline void SetPackageManager(PackageManager&& value) { m_packageManagerHasBeenSet = true; m_packageManager = std::move(value); }
    inline VulnerablePackage& WithPackageManager(const PackageManager& value) { SetPackageManager(value); return *this;}
    inline VulnerablePackage& WithPackageManager(PackageManager&& value) { SetPackageManager(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline const Aws::String& GetRelease() const{ return m_release; }
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }
    inline void SetRelease(const Aws::String& value) { m_releaseHasBeenSet = true; m_release = value; }
    inline void SetRelease(Aws::String&& value) { m_releaseHasBeenSet = true; m_release = std::move(value); }
    inline void SetRelease(const char* value) { m_releaseHasBeenSet = true; m_release.assign(value); }
    inline VulnerablePackage& WithRelease(const Aws::String& value) { SetRelease(value); return *this;}
    inline VulnerablePackage& WithRelease(Aws::String&& value) { SetRelease(std::move(value)); return *this;}
    inline VulnerablePackage& WithRelease(const char* value) { SetRelease(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline const Aws::String& GetRemediation() const{ return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    inline void SetRemediation(const Aws::String& value) { m_remediationHasBeenSet = true; m_remediation = value; }
    inline void SetRemediation(Aws::String&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }
    inline void SetRemediation(const char* value) { m_remediationHasBeenSet = true; m_remediation.assign(value); }
    inline VulnerablePackage& WithRemediation(const Aws::String& value) { SetRemediation(value); return *this;}
    inline VulnerablePackage& WithRemediation(Aws::String&& value) { SetRemediation(std::move(value)); return *this;}
    inline VulnerablePackage& WithRemediation(const char* value) { SetRemediation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the Amazon Web Services Lambda function
     * affected by a finding.</p>
     */
    inline const Aws::String& GetSourceLambdaLayerArn() const{ return m_sourceLambdaLayerArn; }
    inline bool SourceLambdaLayerArnHasBeenSet() const { return m_sourceLambdaLayerArnHasBeenSet; }
    inline void SetSourceLambdaLayerArn(const Aws::String& value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn = value; }
    inline void SetSourceLambdaLayerArn(Aws::String&& value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn = std::move(value); }
    inline void SetSourceLambdaLayerArn(const char* value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn.assign(value); }
    inline VulnerablePackage& WithSourceLambdaLayerArn(const Aws::String& value) { SetSourceLambdaLayerArn(value); return *this;}
    inline VulnerablePackage& WithSourceLambdaLayerArn(Aws::String&& value) { SetSourceLambdaLayerArn(std::move(value)); return *this;}
    inline VulnerablePackage& WithSourceLambdaLayerArn(const char* value) { SetSourceLambdaLayerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline const Aws::String& GetSourceLayerHash() const{ return m_sourceLayerHash; }
    inline bool SourceLayerHashHasBeenSet() const { return m_sourceLayerHashHasBeenSet; }
    inline void SetSourceLayerHash(const Aws::String& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = value; }
    inline void SetSourceLayerHash(Aws::String&& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = std::move(value); }
    inline void SetSourceLayerHash(const char* value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash.assign(value); }
    inline VulnerablePackage& WithSourceLayerHash(const Aws::String& value) { SetSourceLayerHash(value); return *this;}
    inline VulnerablePackage& WithSourceLayerHash(Aws::String&& value) { SetSourceLayerHash(std::move(value)); return *this;}
    inline VulnerablePackage& WithSourceLayerHash(const char* value) { SetSourceLayerHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline VulnerablePackage& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline VulnerablePackage& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline VulnerablePackage& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_arch;
    bool m_archHasBeenSet = false;

    int m_epoch;
    bool m_epochHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    Aws::String m_fixedInVersion;
    bool m_fixedInVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PackageManager m_packageManager;
    bool m_packageManagerHasBeenSet = false;

    Aws::String m_release;
    bool m_releaseHasBeenSet = false;

    Aws::String m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::String m_sourceLambdaLayerArn;
    bool m_sourceLambdaLayerArnHasBeenSet = false;

    Aws::String m_sourceLayerHash;
    bool m_sourceLayerHashHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
