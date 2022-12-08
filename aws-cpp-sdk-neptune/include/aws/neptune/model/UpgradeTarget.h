/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>The version of the database engine that a DB instance can be upgraded
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/UpgradeTarget">AWS
   * API Reference</a></p>
   */
  class UpgradeTarget
  {
  public:
    AWS_NEPTUNE_API UpgradeTarget();
    AWS_NEPTUNE_API UpgradeTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API UpgradeTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * instances that have AutoMinorVersionUpgrade set to true.</p>
     */
    inline bool GetAutoUpgrade() const{ return m_autoUpgrade; }

    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have AutoMinorVersionUpgrade set to true.</p>
     */
    inline bool AutoUpgradeHasBeenSet() const { return m_autoUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have AutoMinorVersionUpgrade set to true.</p>
     */
    inline void SetAutoUpgrade(bool value) { m_autoUpgradeHasBeenSet = true; m_autoUpgrade = value; }

    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have AutoMinorVersionUpgrade set to true.</p>
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


    /**
     * <p>A value that indicates whether you can use Neptune global databases with the
     * target engine version.</p>
     */
    inline bool GetSupportsGlobalDatabases() const{ return m_supportsGlobalDatabases; }

    /**
     * <p>A value that indicates whether you can use Neptune global databases with the
     * target engine version.</p>
     */
    inline bool SupportsGlobalDatabasesHasBeenSet() const { return m_supportsGlobalDatabasesHasBeenSet; }

    /**
     * <p>A value that indicates whether you can use Neptune global databases with the
     * target engine version.</p>
     */
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabasesHasBeenSet = true; m_supportsGlobalDatabases = value; }

    /**
     * <p>A value that indicates whether you can use Neptune global databases with the
     * target engine version.</p>
     */
    inline UpgradeTarget& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}

  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_autoUpgrade;
    bool m_autoUpgradeHasBeenSet = false;

    bool m_isMajorVersionUpgrade;
    bool m_isMajorVersionUpgradeHasBeenSet = false;

    bool m_supportsGlobalDatabases;
    bool m_supportsGlobalDatabasesHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
