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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>The version of the database engine that a DB instance can be upgraded
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/UpgradeTarget">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API UpgradeTarget
  {
  public:
    UpgradeTarget();
    UpgradeTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    UpgradeTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline UpgradeTarget& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline UpgradeTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline UpgradeTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The version of the database engine that a DB instance can be upgraded to.</p>
     */
    inline UpgradeTarget& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have <code>AutoMinorVersionUpgrade</code> set to true.</p>
     */
    inline bool GetAutoUpgrade() const{ return m_autoUpgrade; }

    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have <code>AutoMinorVersionUpgrade</code> set to true.</p>
     */
    inline bool AutoUpgradeHasBeenSet() const { return m_autoUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have <code>AutoMinorVersionUpgrade</code> set to true.</p>
     */
    inline void SetAutoUpgrade(bool value) { m_autoUpgradeHasBeenSet = true; m_autoUpgrade = value; }

    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have <code>AutoMinorVersionUpgrade</code> set to true.</p>
     */
    inline UpgradeTarget& WithAutoUpgrade(bool value) { SetAutoUpgrade(value); return *this;}


    /**
     * <p>A value that indicates whether a database engine is upgraded to a major
     * version.</p>
     */
    inline bool GetIsMajorVersionUpgrade() const{ return m_isMajorVersionUpgrade; }

    /**
     * <p>A value that indicates whether a database engine is upgraded to a major
     * version.</p>
     */
    inline bool IsMajorVersionUpgradeHasBeenSet() const { return m_isMajorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether a database engine is upgraded to a major
     * version.</p>
     */
    inline void SetIsMajorVersionUpgrade(bool value) { m_isMajorVersionUpgradeHasBeenSet = true; m_isMajorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether a database engine is upgraded to a major
     * version.</p>
     */
    inline UpgradeTarget& WithIsMajorVersionUpgrade(bool value) { SetIsMajorVersionUpgrade(value); return *this;}

  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_autoUpgrade;
    bool m_autoUpgradeHasBeenSet;

    bool m_isMajorVersionUpgrade;
    bool m_isMajorVersionUpgradeHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
