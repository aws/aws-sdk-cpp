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


    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline const Aws::String& GetArch() const{ return m_arch; }

    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline bool ArchHasBeenSet() const { return m_archHasBeenSet; }

    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline void SetArch(const Aws::String& value) { m_archHasBeenSet = true; m_arch = value; }

    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline void SetArch(Aws::String&& value) { m_archHasBeenSet = true; m_arch = std::move(value); }

    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline void SetArch(const char* value) { m_archHasBeenSet = true; m_arch.assign(value); }

    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithArch(const Aws::String& value) { SetArch(value); return *this;}

    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithArch(Aws::String&& value) { SetArch(std::move(value)); return *this;}

    /**
     * <p>The architecture of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithArch(const char* value) { SetArch(value); return *this;}


    /**
     * <p>The epoch of the vulnerable package.</p>
     */
    inline int GetEpoch() const{ return m_epoch; }

    /**
     * <p>The epoch of the vulnerable package.</p>
     */
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }

    /**
     * <p>The epoch of the vulnerable package.</p>
     */
    inline void SetEpoch(int value) { m_epochHasBeenSet = true; m_epoch = value; }

    /**
     * <p>The epoch of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithEpoch(int value) { SetEpoch(value); return *this;}


    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The file path of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline const Aws::String& GetFixedInVersion() const{ return m_fixedInVersion; }

    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline bool FixedInVersionHasBeenSet() const { return m_fixedInVersionHasBeenSet; }

    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline void SetFixedInVersion(const Aws::String& value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion = value; }

    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline void SetFixedInVersion(Aws::String&& value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion = std::move(value); }

    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline void SetFixedInVersion(const char* value) { m_fixedInVersionHasBeenSet = true; m_fixedInVersion.assign(value); }

    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline VulnerablePackage& WithFixedInVersion(const Aws::String& value) { SetFixedInVersion(value); return *this;}

    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline VulnerablePackage& WithFixedInVersion(Aws::String&& value) { SetFixedInVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the package that contains the vulnerability fix.</p>
     */
    inline VulnerablePackage& WithFixedInVersion(const char* value) { SetFixedInVersion(value); return *this;}


    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline const PackageManager& GetPackageManager() const{ return m_packageManager; }

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline bool PackageManagerHasBeenSet() const { return m_packageManagerHasBeenSet; }

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline void SetPackageManager(const PackageManager& value) { m_packageManagerHasBeenSet = true; m_packageManager = value; }

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline void SetPackageManager(PackageManager&& value) { m_packageManagerHasBeenSet = true; m_packageManager = std::move(value); }

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithPackageManager(const PackageManager& value) { SetPackageManager(value); return *this;}

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithPackageManager(PackageManager&& value) { SetPackageManager(std::move(value)); return *this;}


    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline const Aws::String& GetRelease() const{ return m_release; }

    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }

    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline void SetRelease(const Aws::String& value) { m_releaseHasBeenSet = true; m_release = value; }

    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline void SetRelease(Aws::String&& value) { m_releaseHasBeenSet = true; m_release = std::move(value); }

    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline void SetRelease(const char* value) { m_releaseHasBeenSet = true; m_release.assign(value); }

    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithRelease(const Aws::String& value) { SetRelease(value); return *this;}

    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithRelease(Aws::String&& value) { SetRelease(std::move(value)); return *this;}

    /**
     * <p>The release of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithRelease(const char* value) { SetRelease(value); return *this;}


    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline const Aws::String& GetRemediation() const{ return m_remediation; }

    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }

    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline void SetRemediation(const Aws::String& value) { m_remediationHasBeenSet = true; m_remediation = value; }

    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline void SetRemediation(Aws::String&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }

    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline void SetRemediation(const char* value) { m_remediationHasBeenSet = true; m_remediation.assign(value); }

    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline VulnerablePackage& WithRemediation(const Aws::String& value) { SetRemediation(value); return *this;}

    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline VulnerablePackage& WithRemediation(Aws::String&& value) { SetRemediation(std::move(value)); return *this;}

    /**
     * <p>The code to run in your environment to update packages with a fix
     * available.</p>
     */
    inline VulnerablePackage& WithRemediation(const char* value) { SetRemediation(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the AWS Lambda function affected by a
     * finding.</p>
     */
    inline const Aws::String& GetSourceLambdaLayerArn() const{ return m_sourceLambdaLayerArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the AWS Lambda function affected by a
     * finding.</p>
     */
    inline bool SourceLambdaLayerArnHasBeenSet() const { return m_sourceLambdaLayerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the AWS Lambda function affected by a
     * finding.</p>
     */
    inline void SetSourceLambdaLayerArn(const Aws::String& value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the AWS Lambda function affected by a
     * finding.</p>
     */
    inline void SetSourceLambdaLayerArn(Aws::String&& value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the AWS Lambda function affected by a
     * finding.</p>
     */
    inline void SetSourceLambdaLayerArn(const char* value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the AWS Lambda function affected by a
     * finding.</p>
     */
    inline VulnerablePackage& WithSourceLambdaLayerArn(const Aws::String& value) { SetSourceLambdaLayerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the AWS Lambda function affected by a
     * finding.</p>
     */
    inline VulnerablePackage& WithSourceLambdaLayerArn(Aws::String&& value) { SetSourceLambdaLayerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the AWS Lambda function affected by a
     * finding.</p>
     */
    inline VulnerablePackage& WithSourceLambdaLayerArn(const char* value) { SetSourceLambdaLayerArn(value); return *this;}


    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline const Aws::String& GetSourceLayerHash() const{ return m_sourceLayerHash; }

    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline bool SourceLayerHashHasBeenSet() const { return m_sourceLayerHashHasBeenSet; }

    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline void SetSourceLayerHash(const Aws::String& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = value; }

    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline void SetSourceLayerHash(Aws::String&& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = std::move(value); }

    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline void SetSourceLayerHash(const char* value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash.assign(value); }

    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithSourceLayerHash(const Aws::String& value) { SetSourceLayerHash(value); return *this;}

    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithSourceLayerHash(Aws::String&& value) { SetSourceLayerHash(std::move(value)); return *this;}

    /**
     * <p>The source layer hash of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithSourceLayerHash(const char* value) { SetSourceLayerHash(value); return *this;}


    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithVersion(const char* value) { SetVersion(value); return *this;}

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
