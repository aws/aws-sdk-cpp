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
    AWS_INSPECTOR2_API PackageFilter();
    AWS_INSPECTOR2_API PackageFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API PackageFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains details on the package architecture type to filter
     * on.</p>
     */
    inline const StringFilter& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>An object that contains details on the package architecture type to filter
     * on.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>An object that contains details on the package architecture type to filter
     * on.</p>
     */
    inline void SetArchitecture(const StringFilter& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>An object that contains details on the package architecture type to filter
     * on.</p>
     */
    inline void SetArchitecture(StringFilter&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>An object that contains details on the package architecture type to filter
     * on.</p>
     */
    inline PackageFilter& WithArchitecture(const StringFilter& value) { SetArchitecture(value); return *this;}

    /**
     * <p>An object that contains details on the package architecture type to filter
     * on.</p>
     */
    inline PackageFilter& WithArchitecture(StringFilter&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>An object that contains details on the package epoch to filter on.</p>
     */
    inline const NumberFilter& GetEpoch() const{ return m_epoch; }

    /**
     * <p>An object that contains details on the package epoch to filter on.</p>
     */
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }

    /**
     * <p>An object that contains details on the package epoch to filter on.</p>
     */
    inline void SetEpoch(const NumberFilter& value) { m_epochHasBeenSet = true; m_epoch = value; }

    /**
     * <p>An object that contains details on the package epoch to filter on.</p>
     */
    inline void SetEpoch(NumberFilter&& value) { m_epochHasBeenSet = true; m_epoch = std::move(value); }

    /**
     * <p>An object that contains details on the package epoch to filter on.</p>
     */
    inline PackageFilter& WithEpoch(const NumberFilter& value) { SetEpoch(value); return *this;}

    /**
     * <p>An object that contains details on the package epoch to filter on.</p>
     */
    inline PackageFilter& WithEpoch(NumberFilter&& value) { SetEpoch(std::move(value)); return *this;}


    /**
     * <p>An object that contains details on the name of the package to filter on.</p>
     */
    inline const StringFilter& GetName() const{ return m_name; }

    /**
     * <p>An object that contains details on the name of the package to filter on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>An object that contains details on the name of the package to filter on.</p>
     */
    inline void SetName(const StringFilter& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>An object that contains details on the name of the package to filter on.</p>
     */
    inline void SetName(StringFilter&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>An object that contains details on the name of the package to filter on.</p>
     */
    inline PackageFilter& WithName(const StringFilter& value) { SetName(value); return *this;}

    /**
     * <p>An object that contains details on the name of the package to filter on.</p>
     */
    inline PackageFilter& WithName(StringFilter&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>An object that contains details on the package release to filter on.</p>
     */
    inline const StringFilter& GetRelease() const{ return m_release; }

    /**
     * <p>An object that contains details on the package release to filter on.</p>
     */
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }

    /**
     * <p>An object that contains details on the package release to filter on.</p>
     */
    inline void SetRelease(const StringFilter& value) { m_releaseHasBeenSet = true; m_release = value; }

    /**
     * <p>An object that contains details on the package release to filter on.</p>
     */
    inline void SetRelease(StringFilter&& value) { m_releaseHasBeenSet = true; m_release = std::move(value); }

    /**
     * <p>An object that contains details on the package release to filter on.</p>
     */
    inline PackageFilter& WithRelease(const StringFilter& value) { SetRelease(value); return *this;}

    /**
     * <p>An object that contains details on the package release to filter on.</p>
     */
    inline PackageFilter& WithRelease(StringFilter&& value) { SetRelease(std::move(value)); return *this;}


    
    inline const StringFilter& GetSourceLambdaLayerArn() const{ return m_sourceLambdaLayerArn; }

    
    inline bool SourceLambdaLayerArnHasBeenSet() const { return m_sourceLambdaLayerArnHasBeenSet; }

    
    inline void SetSourceLambdaLayerArn(const StringFilter& value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn = value; }

    
    inline void SetSourceLambdaLayerArn(StringFilter&& value) { m_sourceLambdaLayerArnHasBeenSet = true; m_sourceLambdaLayerArn = std::move(value); }

    
    inline PackageFilter& WithSourceLambdaLayerArn(const StringFilter& value) { SetSourceLambdaLayerArn(value); return *this;}

    
    inline PackageFilter& WithSourceLambdaLayerArn(StringFilter&& value) { SetSourceLambdaLayerArn(std::move(value)); return *this;}


    /**
     * <p>An object that contains details on the source layer hash to filter on.</p>
     */
    inline const StringFilter& GetSourceLayerHash() const{ return m_sourceLayerHash; }

    /**
     * <p>An object that contains details on the source layer hash to filter on.</p>
     */
    inline bool SourceLayerHashHasBeenSet() const { return m_sourceLayerHashHasBeenSet; }

    /**
     * <p>An object that contains details on the source layer hash to filter on.</p>
     */
    inline void SetSourceLayerHash(const StringFilter& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = value; }

    /**
     * <p>An object that contains details on the source layer hash to filter on.</p>
     */
    inline void SetSourceLayerHash(StringFilter&& value) { m_sourceLayerHashHasBeenSet = true; m_sourceLayerHash = std::move(value); }

    /**
     * <p>An object that contains details on the source layer hash to filter on.</p>
     */
    inline PackageFilter& WithSourceLayerHash(const StringFilter& value) { SetSourceLayerHash(value); return *this;}

    /**
     * <p>An object that contains details on the source layer hash to filter on.</p>
     */
    inline PackageFilter& WithSourceLayerHash(StringFilter&& value) { SetSourceLayerHash(std::move(value)); return *this;}


    /**
     * <p>The package version to filter on.</p>
     */
    inline const StringFilter& GetVersion() const{ return m_version; }

    /**
     * <p>The package version to filter on.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The package version to filter on.</p>
     */
    inline void SetVersion(const StringFilter& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The package version to filter on.</p>
     */
    inline void SetVersion(StringFilter&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The package version to filter on.</p>
     */
    inline PackageFilter& WithVersion(const StringFilter& value) { SetVersion(value); return *this;}

    /**
     * <p>The package version to filter on.</p>
     */
    inline PackageFilter& WithVersion(StringFilter&& value) { SetVersion(std::move(value)); return *this;}

  private:

    StringFilter m_architecture;
    bool m_architectureHasBeenSet = false;

    NumberFilter m_epoch;
    bool m_epochHasBeenSet = false;

    StringFilter m_name;
    bool m_nameHasBeenSet = false;

    StringFilter m_release;
    bool m_releaseHasBeenSet = false;

    StringFilter m_sourceLambdaLayerArn;
    bool m_sourceLambdaLayerArnHasBeenSet = false;

    StringFilter m_sourceLayerHash;
    bool m_sourceLayerHashHasBeenSet = false;

    StringFilter m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
