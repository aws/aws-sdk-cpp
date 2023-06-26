/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PackageVersionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A summary of information about a package version.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PackageVersionSummary">AWS
   * API Reference</a></p>
   */
  class PackageVersionSummary
  {
  public:
    AWS_IOT_API PackageVersionSummary();
    AWS_IOT_API PackageVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PackageVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the associated software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>The name of the associated software package.</p>
     */
    inline PackageVersionSummary& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The name of the associated software package.</p>
     */
    inline PackageVersionSummary& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the associated software package.</p>
     */
    inline PackageVersionSummary& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The name of the target package version.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The name of the target package version.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>The name of the target package version.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>The name of the target package version.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>The name of the target package version.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>The name of the target package version.</p>
     */
    inline PackageVersionSummary& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The name of the target package version.</p>
     */
    inline PackageVersionSummary& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The name of the target package version.</p>
     */
    inline PackageVersionSummary& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline const PackageVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline void SetStatus(const PackageVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline void SetStatus(PackageVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline PackageVersionSummary& WithStatus(const PackageVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the package version. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/preparing-to-use-software-package-catalog.html#package-version-lifecycle">Package
     * version lifecycle</a>.</p>
     */
    inline PackageVersionSummary& WithStatus(PackageVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date that the package version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date that the package version was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date that the package version was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date that the package version was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date that the package version was created.</p>
     */
    inline PackageVersionSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date that the package version was created.</p>
     */
    inline PackageVersionSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date that the package version was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date that the package version was last updated.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date that the package version was last updated.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date that the package version was last updated.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date that the package version was last updated.</p>
     */
    inline PackageVersionSummary& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date that the package version was last updated.</p>
     */
    inline PackageVersionSummary& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    PackageVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
