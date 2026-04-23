/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>A registered instance's reported operating system.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ReportedOs">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API ReportedOs
  {
  public:
    ReportedOs();
    ReportedOs(Aws::Utils::Json::JsonView jsonValue);
    ReportedOs& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operating system family.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The operating system family.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>The operating system family.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The operating system family.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The operating system family.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The operating system family.</p>
     */
    inline ReportedOs& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The operating system family.</p>
     */
    inline ReportedOs& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The operating system family.</p>
     */
    inline ReportedOs& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The operating system name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The operating system name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The operating system name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The operating system name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The operating system name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The operating system name.</p>
     */
    inline ReportedOs& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The operating system name.</p>
     */
    inline ReportedOs& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The operating system name.</p>
     */
    inline ReportedOs& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The operating system version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The operating system version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The operating system version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The operating system version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The operating system version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The operating system version.</p>
     */
    inline ReportedOs& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The operating system version.</p>
     */
    inline ReportedOs& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The operating system version.</p>
     */
    inline ReportedOs& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_family;
    bool m_familyHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
