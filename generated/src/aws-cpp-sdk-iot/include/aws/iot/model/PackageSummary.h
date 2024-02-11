/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A summary of information about a software package.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PackageSummary">AWS
   * API Reference</a></p>
   */
  class PackageSummary
  {
  public:
    AWS_IOT_API PackageSummary();
    AWS_IOT_API PackageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PackageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the target software package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The name for the target software package.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>The name for the target software package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>The name for the target software package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>The name for the target software package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>The name for the target software package.</p>
     */
    inline PackageSummary& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The name for the target software package.</p>
     */
    inline PackageSummary& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The name for the target software package.</p>
     */
    inline PackageSummary& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The name of the default package version.</p>
     */
    inline const Aws::String& GetDefaultVersionName() const{ return m_defaultVersionName; }

    /**
     * <p>The name of the default package version.</p>
     */
    inline bool DefaultVersionNameHasBeenSet() const { return m_defaultVersionNameHasBeenSet; }

    /**
     * <p>The name of the default package version.</p>
     */
    inline void SetDefaultVersionName(const Aws::String& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = value; }

    /**
     * <p>The name of the default package version.</p>
     */
    inline void SetDefaultVersionName(Aws::String&& value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName = std::move(value); }

    /**
     * <p>The name of the default package version.</p>
     */
    inline void SetDefaultVersionName(const char* value) { m_defaultVersionNameHasBeenSet = true; m_defaultVersionName.assign(value); }

    /**
     * <p>The name of the default package version.</p>
     */
    inline PackageSummary& WithDefaultVersionName(const Aws::String& value) { SetDefaultVersionName(value); return *this;}

    /**
     * <p>The name of the default package version.</p>
     */
    inline PackageSummary& WithDefaultVersionName(Aws::String&& value) { SetDefaultVersionName(std::move(value)); return *this;}

    /**
     * <p>The name of the default package version.</p>
     */
    inline PackageSummary& WithDefaultVersionName(const char* value) { SetDefaultVersionName(value); return *this;}


    /**
     * <p>The date that the package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date that the package was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date that the package was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date that the package was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date that the package was created.</p>
     */
    inline PackageSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date that the package was created.</p>
     */
    inline PackageSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date that the package was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date that the package was last updated.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date that the package was last updated.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date that the package was last updated.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date that the package was last updated.</p>
     */
    inline PackageSummary& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date that the package was last updated.</p>
     */
    inline PackageSummary& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_defaultVersionName;
    bool m_defaultVersionNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
