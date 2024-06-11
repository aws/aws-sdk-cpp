/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
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
namespace DocDB
{
namespace Model
{

  /**
   * <p>The version of the database engine that an instance can be upgraded
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/UpgradeTarget">AWS
   * API Reference</a></p>
   */
  class UpgradeTarget
  {
  public:
    AWS_DOCDB_API UpgradeTarget();
    AWS_DOCDB_API UpgradeTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API UpgradeTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the upgrade target database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline UpgradeTarget& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline UpgradeTarget& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline UpgradeTarget& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the upgrade target database engine.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline UpgradeTarget& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline UpgradeTarget& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline UpgradeTarget& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the database engine that an instance can be upgraded to.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpgradeTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpgradeTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpgradeTarget& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the target version is applied to any source DB
     * instances that have <code>AutoMinorVersionUpgrade</code> set to
     * <code>true</code>.</p>
     */
    inline bool GetAutoUpgrade() const{ return m_autoUpgrade; }
    inline bool AutoUpgradeHasBeenSet() const { return m_autoUpgradeHasBeenSet; }
    inline void SetAutoUpgrade(bool value) { m_autoUpgradeHasBeenSet = true; m_autoUpgrade = value; }
    inline UpgradeTarget& WithAutoUpgrade(bool value) { SetAutoUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether a database engine is upgraded to a major
     * version.</p>
     */
    inline bool GetIsMajorVersionUpgrade() const{ return m_isMajorVersionUpgrade; }
    inline bool IsMajorVersionUpgradeHasBeenSet() const { return m_isMajorVersionUpgradeHasBeenSet; }
    inline void SetIsMajorVersionUpgrade(bool value) { m_isMajorVersionUpgradeHasBeenSet = true; m_isMajorVersionUpgrade = value; }
    inline UpgradeTarget& WithIsMajorVersionUpgrade(bool value) { SetIsMajorVersionUpgrade(value); return *this;}
    ///@}
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
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
