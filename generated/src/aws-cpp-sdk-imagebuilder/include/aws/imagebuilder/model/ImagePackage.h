/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>A software package that's installed on top of the base image to create a
   * customized image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImagePackage">AWS
   * API Reference</a></p>
   */
  class ImagePackage
  {
  public:
    AWS_IMAGEBUILDER_API ImagePackage();
    AWS_IMAGEBUILDER_API ImagePackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImagePackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the package that's reported to the operating system package
     * manager.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline ImagePackage& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline ImagePackage& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline ImagePackage& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the package that's reported to the operating system package
     * manager.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }
    inline ImagePackage& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline ImagePackage& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline ImagePackage& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
