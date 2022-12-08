/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>Information on the vulnerable package identified by a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/VulnerablePackage">AWS
   * API Reference</a></p>
   */
  class VulnerablePackage
  {
  public:
    AWS_ECR_API VulnerablePackage();
    AWS_ECR_API VulnerablePackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API VulnerablePackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::String& GetPackageManager() const{ return m_packageManager; }

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline bool PackageManagerHasBeenSet() const { return m_packageManagerHasBeenSet; }

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline void SetPackageManager(const Aws::String& value) { m_packageManagerHasBeenSet = true; m_packageManager = value; }

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline void SetPackageManager(Aws::String&& value) { m_packageManagerHasBeenSet = true; m_packageManager = std::move(value); }

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline void SetPackageManager(const char* value) { m_packageManagerHasBeenSet = true; m_packageManager.assign(value); }

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithPackageManager(const Aws::String& value) { SetPackageManager(value); return *this;}

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithPackageManager(Aws::String&& value) { SetPackageManager(std::move(value)); return *this;}

    /**
     * <p>The package manager of the vulnerable package.</p>
     */
    inline VulnerablePackage& WithPackageManager(const char* value) { SetPackageManager(value); return *this;}


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

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_packageManager;
    bool m_packageManagerHasBeenSet = false;

    Aws::String m_release;
    bool m_releaseHasBeenSet = false;

    Aws::String m_sourceLayerHash;
    bool m_sourceLayerHashHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
