/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/PackageVersionOutputConfig.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>An output configuration for a package import job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/PackageImportJobOutputConfig">AWS
   * API Reference</a></p>
   */
  class AWS_PANORAMA_API PackageImportJobOutputConfig
  {
  public:
    PackageImportJobOutputConfig();
    PackageImportJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    PackageImportJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The package version's output configuration.</p>
     */
    inline const PackageVersionOutputConfig& GetPackageVersionOutputConfig() const{ return m_packageVersionOutputConfig; }

    /**
     * <p>The package version's output configuration.</p>
     */
    inline bool PackageVersionOutputConfigHasBeenSet() const { return m_packageVersionOutputConfigHasBeenSet; }

    /**
     * <p>The package version's output configuration.</p>
     */
    inline void SetPackageVersionOutputConfig(const PackageVersionOutputConfig& value) { m_packageVersionOutputConfigHasBeenSet = true; m_packageVersionOutputConfig = value; }

    /**
     * <p>The package version's output configuration.</p>
     */
    inline void SetPackageVersionOutputConfig(PackageVersionOutputConfig&& value) { m_packageVersionOutputConfigHasBeenSet = true; m_packageVersionOutputConfig = std::move(value); }

    /**
     * <p>The package version's output configuration.</p>
     */
    inline PackageImportJobOutputConfig& WithPackageVersionOutputConfig(const PackageVersionOutputConfig& value) { SetPackageVersionOutputConfig(value); return *this;}

    /**
     * <p>The package version's output configuration.</p>
     */
    inline PackageImportJobOutputConfig& WithPackageVersionOutputConfig(PackageVersionOutputConfig&& value) { SetPackageVersionOutputConfig(std::move(value)); return *this;}

  private:

    PackageVersionOutputConfig m_packageVersionOutputConfig;
    bool m_packageVersionOutputConfigHasBeenSet;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
