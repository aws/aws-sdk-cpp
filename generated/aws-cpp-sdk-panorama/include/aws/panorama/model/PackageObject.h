﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A package object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/PackageObject">AWS
   * API Reference</a></p>
   */
  class AWS_PANORAMA_API PackageObject
  {
  public:
    PackageObject();
    PackageObject(Aws::Utils::Json::JsonView jsonValue);
    PackageObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The object's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The object's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The object's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The object's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The object's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The object's name.</p>
     */
    inline PackageObject& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The object's name.</p>
     */
    inline PackageObject& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The object's name.</p>
     */
    inline PackageObject& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The object's package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p>The object's package version.</p>
     */
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }

    /**
     * <p>The object's package version.</p>
     */
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }

    /**
     * <p>The object's package version.</p>
     */
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }

    /**
     * <p>The object's package version.</p>
     */
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }

    /**
     * <p>The object's package version.</p>
     */
    inline PackageObject& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    /**
     * <p>The object's package version.</p>
     */
    inline PackageObject& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    /**
     * <p>The object's package version.</p>
     */
    inline PackageObject& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}


    /**
     * <p>The object's patch version.</p>
     */
    inline const Aws::String& GetPatchVersion() const{ return m_patchVersion; }

    /**
     * <p>The object's patch version.</p>
     */
    inline bool PatchVersionHasBeenSet() const { return m_patchVersionHasBeenSet; }

    /**
     * <p>The object's patch version.</p>
     */
    inline void SetPatchVersion(const Aws::String& value) { m_patchVersionHasBeenSet = true; m_patchVersion = value; }

    /**
     * <p>The object's patch version.</p>
     */
    inline void SetPatchVersion(Aws::String&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::move(value); }

    /**
     * <p>The object's patch version.</p>
     */
    inline void SetPatchVersion(const char* value) { m_patchVersionHasBeenSet = true; m_patchVersion.assign(value); }

    /**
     * <p>The object's patch version.</p>
     */
    inline PackageObject& WithPatchVersion(const Aws::String& value) { SetPatchVersion(value); return *this;}

    /**
     * <p>The object's patch version.</p>
     */
    inline PackageObject& WithPatchVersion(Aws::String&& value) { SetPatchVersion(std::move(value)); return *this;}

    /**
     * <p>The object's patch version.</p>
     */
    inline PackageObject& WithPatchVersion(const char* value) { SetPatchVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet;

    Aws::String m_patchVersion;
    bool m_patchVersionHasBeenSet;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
