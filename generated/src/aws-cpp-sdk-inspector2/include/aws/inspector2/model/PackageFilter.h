/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/StringFilter.h>
#include <aws/inspector2/model/NumberFilter.h>
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
   * <p>Contains information on the details of a package filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/PackageFilter">AWS
   * API Reference</a></p>
   */
  class PackageFilter
  {
  public:
    AWS_INSPECTOR2_API PackageFilter() = default;
    AWS_INSPECTOR2_API PackageFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API PackageFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains details on the name of the package to filter on.</p>
     */
    inline const StringFilter& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = StringFilter>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = StringFilter>
    PackageFilter& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package version to filter on.</p>
     */
    inline const StringFilter& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = StringFilter>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = StringFilter>
    PackageFilter& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details on the package epoch to filter on.</p>
     */
    inline const NumberFilter& GetEpoch() const { return m_epoch; }
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }
    template<typename EpochT = NumberFilter>
    void SetEpoch(EpochT&& value) { m_epochHasBeenSet = true; m_epoch = std::forward<EpochT>(value); }
    template<typename EpochT = NumberFilter>
    PackageFilter& WithEpoch(EpochT&& value) { SetEpoch(std::forward<EpochT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details on the package release to filter on.</p>
     */
    inline const StringFilter& GetRelease() const { return m_release; }
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }
    template<typename ReleaseT = StringFilter>
    void SetRelease(ReleaseT&& value) { m_releaseHasBeenSet = true; m_release = std::forward<ReleaseT>(value); }
    template<typename ReleaseT = StringFilter>
    PackageFilter& WithRelease(ReleaseT&& value) { SetRelease(std::forward<ReleaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details on the package architecture type to filter
     * on.</p>
     */
    inline const StringFilter& GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    template<typename ArchitectureT = StringFilter>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = StringFilter>
    PackageFilter& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details on the source layer hash to filter on.</p>
     */
    inline const StringFilter& GetSourceLayerHash() const { return m_sourceLayerHash; }
    inline bool SourceLayerHashHasBeenSet() const { return m_sourceLayerHashHasBeenSet; }
    template<typename SourceLayerHashT = StringFilter>
    void SetSourceLayerHash(SourceLayerHashT&& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = std::forward<SourceLayerHashT>(value); }
    template<typename SourceLayerHashT = StringFilter>
    PackageFilter& WithSourceLayerHash(SourceLayerHashT&& value) { SetSourceLayerHash(std::forward<SourceLayerHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the details of a string filter.</p>
     */
    inline const StringFilter& GetSourceLambdaLayerArn() const { return m_sourceLambdaLayerArn; }
    inline bool SourceLambdaLayerArnHasBeenSet() const { return m_sourceLambdaLayerArnHasBeenSet; }
    template<typename SourceLambdaLayerArnT = StringFilter>
    void SetSourceLambdaLayerArn(SourceLambdaLayerArnT&& value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn = std::forward<SourceLambdaLayerArnT>(value); }
    template<typename SourceLambdaLayerArnT = StringFilter>
    PackageFilter& WithSourceLambdaLayerArn(SourceLambdaLayerArnT&& value) { SetSourceLambdaLayerArn(std::forward<SourceLambdaLayerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details on the package file path to filter on.</p>
     */
    inline const StringFilter& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = StringFilter>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = StringFilter>
    PackageFilter& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}
  private:

    StringFilter m_name;
    bool m_nameHasBeenSet = false;

    StringFilter m_version;
    bool m_versionHasBeenSet = false;

    NumberFilter m_epoch;
    bool m_epochHasBeenSet = false;

    StringFilter m_release;
    bool m_releaseHasBeenSet = false;

    StringFilter m_architecture;
    bool m_architectureHasBeenSet = false;

    StringFilter m_sourceLayerHash;
    bool m_sourceLayerHashHasBeenSet = false;

    StringFilter m_sourceLambdaLayerArn;
    bool m_sourceLambdaLayerArnHasBeenSet = false;

    StringFilter m_filePath;
    bool m_filePathHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
