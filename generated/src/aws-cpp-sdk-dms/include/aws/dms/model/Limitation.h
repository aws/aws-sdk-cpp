/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information about the limitations of target Amazon Web Services
   * engines.</p> <p>Your source database might include features that the target
   * Amazon Web Services engine doesn't support. Fleet Advisor lists these features
   * as limitations. You should consider these limitations during database migration.
   * For each limitation, Fleet Advisor recommends an action that you can take to
   * address or avoid this limitation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Limitation">AWS API
   * Reference</a></p>
   */
  class Limitation
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API Limitation();
    AWS_DATABASEMIGRATIONSERVICE_API Limitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Limitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the source database.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline Limitation& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}

    /**
     * <p>The identifier of the source database.</p>
     */
    inline Limitation& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source database.</p>
     */
    inline Limitation& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}


    /**
     * <p>The name of the target engine that Fleet Advisor should use in the target
     * engine recommendation. Valid values include <code>"rds-aurora-mysql"</code>,
     * <code>"rds-aurora-postgresql"</code>, <code>"rds-mysql"</code>,
     * <code>"rds-oracle"</code>, <code>"rds-sql-server"</code>, and
     * <code>"rds-postgresql"</code>.</p>
     */
    inline const Aws::String& GetEngineName() const{ return m_engineName; }

    /**
     * <p>The name of the target engine that Fleet Advisor should use in the target
     * engine recommendation. Valid values include <code>"rds-aurora-mysql"</code>,
     * <code>"rds-aurora-postgresql"</code>, <code>"rds-mysql"</code>,
     * <code>"rds-oracle"</code>, <code>"rds-sql-server"</code>, and
     * <code>"rds-postgresql"</code>.</p>
     */
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }

    /**
     * <p>The name of the target engine that Fleet Advisor should use in the target
     * engine recommendation. Valid values include <code>"rds-aurora-mysql"</code>,
     * <code>"rds-aurora-postgresql"</code>, <code>"rds-mysql"</code>,
     * <code>"rds-oracle"</code>, <code>"rds-sql-server"</code>, and
     * <code>"rds-postgresql"</code>.</p>
     */
    inline void SetEngineName(const Aws::String& value) { m_engineNameHasBeenSet = true; m_engineName = value; }

    /**
     * <p>The name of the target engine that Fleet Advisor should use in the target
     * engine recommendation. Valid values include <code>"rds-aurora-mysql"</code>,
     * <code>"rds-aurora-postgresql"</code>, <code>"rds-mysql"</code>,
     * <code>"rds-oracle"</code>, <code>"rds-sql-server"</code>, and
     * <code>"rds-postgresql"</code>.</p>
     */
    inline void SetEngineName(Aws::String&& value) { m_engineNameHasBeenSet = true; m_engineName = std::move(value); }

    /**
     * <p>The name of the target engine that Fleet Advisor should use in the target
     * engine recommendation. Valid values include <code>"rds-aurora-mysql"</code>,
     * <code>"rds-aurora-postgresql"</code>, <code>"rds-mysql"</code>,
     * <code>"rds-oracle"</code>, <code>"rds-sql-server"</code>, and
     * <code>"rds-postgresql"</code>.</p>
     */
    inline void SetEngineName(const char* value) { m_engineNameHasBeenSet = true; m_engineName.assign(value); }

    /**
     * <p>The name of the target engine that Fleet Advisor should use in the target
     * engine recommendation. Valid values include <code>"rds-aurora-mysql"</code>,
     * <code>"rds-aurora-postgresql"</code>, <code>"rds-mysql"</code>,
     * <code>"rds-oracle"</code>, <code>"rds-sql-server"</code>, and
     * <code>"rds-postgresql"</code>.</p>
     */
    inline Limitation& WithEngineName(const Aws::String& value) { SetEngineName(value); return *this;}

    /**
     * <p>The name of the target engine that Fleet Advisor should use in the target
     * engine recommendation. Valid values include <code>"rds-aurora-mysql"</code>,
     * <code>"rds-aurora-postgresql"</code>, <code>"rds-mysql"</code>,
     * <code>"rds-oracle"</code>, <code>"rds-sql-server"</code>, and
     * <code>"rds-postgresql"</code>.</p>
     */
    inline Limitation& WithEngineName(Aws::String&& value) { SetEngineName(std::move(value)); return *this;}

    /**
     * <p>The name of the target engine that Fleet Advisor should use in the target
     * engine recommendation. Valid values include <code>"rds-aurora-mysql"</code>,
     * <code>"rds-aurora-postgresql"</code>, <code>"rds-mysql"</code>,
     * <code>"rds-oracle"</code>, <code>"rds-sql-server"</code>, and
     * <code>"rds-postgresql"</code>.</p>
     */
    inline Limitation& WithEngineName(const char* value) { SetEngineName(value); return *this;}


    /**
     * <p>The name of the limitation. Describes unsupported database features,
     * migration action items, and other limitations.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the limitation. Describes unsupported database features,
     * migration action items, and other limitations.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the limitation. Describes unsupported database features,
     * migration action items, and other limitations.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the limitation. Describes unsupported database features,
     * migration action items, and other limitations.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the limitation. Describes unsupported database features,
     * migration action items, and other limitations.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the limitation. Describes unsupported database features,
     * migration action items, and other limitations.</p>
     */
    inline Limitation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the limitation. Describes unsupported database features,
     * migration action items, and other limitations.</p>
     */
    inline Limitation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the limitation. Describes unsupported database features,
     * migration action items, and other limitations.</p>
     */
    inline Limitation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the limitation. Provides additional information about the
     * limitation, and includes recommended actions that you can take to address or
     * avoid this limitation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the limitation. Provides additional information about the
     * limitation, and includes recommended actions that you can take to address or
     * avoid this limitation.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the limitation. Provides additional information about the
     * limitation, and includes recommended actions that you can take to address or
     * avoid this limitation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the limitation. Provides additional information about the
     * limitation, and includes recommended actions that you can take to address or
     * avoid this limitation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the limitation. Provides additional information about the
     * limitation, and includes recommended actions that you can take to address or
     * avoid this limitation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the limitation. Provides additional information about the
     * limitation, and includes recommended actions that you can take to address or
     * avoid this limitation.</p>
     */
    inline Limitation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the limitation. Provides additional information about the
     * limitation, and includes recommended actions that you can take to address or
     * avoid this limitation.</p>
     */
    inline Limitation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the limitation. Provides additional information about the
     * limitation, and includes recommended actions that you can take to address or
     * avoid this limitation.</p>
     */
    inline Limitation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The impact of the limitation. You can use this parameter to prioritize
     * limitations that you want to address. Valid values include
     * <code>"Blocker"</code>, <code>"High"</code>, <code>"Medium"</code>, and
     * <code>"Low"</code>.</p>
     */
    inline const Aws::String& GetImpact() const{ return m_impact; }

    /**
     * <p>The impact of the limitation. You can use this parameter to prioritize
     * limitations that you want to address. Valid values include
     * <code>"Blocker"</code>, <code>"High"</code>, <code>"Medium"</code>, and
     * <code>"Low"</code>.</p>
     */
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }

    /**
     * <p>The impact of the limitation. You can use this parameter to prioritize
     * limitations that you want to address. Valid values include
     * <code>"Blocker"</code>, <code>"High"</code>, <code>"Medium"</code>, and
     * <code>"Low"</code>.</p>
     */
    inline void SetImpact(const Aws::String& value) { m_impactHasBeenSet = true; m_impact = value; }

    /**
     * <p>The impact of the limitation. You can use this parameter to prioritize
     * limitations that you want to address. Valid values include
     * <code>"Blocker"</code>, <code>"High"</code>, <code>"Medium"</code>, and
     * <code>"Low"</code>.</p>
     */
    inline void SetImpact(Aws::String&& value) { m_impactHasBeenSet = true; m_impact = std::move(value); }

    /**
     * <p>The impact of the limitation. You can use this parameter to prioritize
     * limitations that you want to address. Valid values include
     * <code>"Blocker"</code>, <code>"High"</code>, <code>"Medium"</code>, and
     * <code>"Low"</code>.</p>
     */
    inline void SetImpact(const char* value) { m_impactHasBeenSet = true; m_impact.assign(value); }

    /**
     * <p>The impact of the limitation. You can use this parameter to prioritize
     * limitations that you want to address. Valid values include
     * <code>"Blocker"</code>, <code>"High"</code>, <code>"Medium"</code>, and
     * <code>"Low"</code>.</p>
     */
    inline Limitation& WithImpact(const Aws::String& value) { SetImpact(value); return *this;}

    /**
     * <p>The impact of the limitation. You can use this parameter to prioritize
     * limitations that you want to address. Valid values include
     * <code>"Blocker"</code>, <code>"High"</code>, <code>"Medium"</code>, and
     * <code>"Low"</code>.</p>
     */
    inline Limitation& WithImpact(Aws::String&& value) { SetImpact(std::move(value)); return *this;}

    /**
     * <p>The impact of the limitation. You can use this parameter to prioritize
     * limitations that you want to address. Valid values include
     * <code>"Blocker"</code>, <code>"High"</code>, <code>"Medium"</code>, and
     * <code>"Low"</code>.</p>
     */
    inline Limitation& WithImpact(const char* value) { SetImpact(value); return *this;}


    /**
     * <p>The type of the limitation, such as action required, upgrade required, and
     * limited feature.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the limitation, such as action required, upgrade required, and
     * limited feature.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the limitation, such as action required, upgrade required, and
     * limited feature.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the limitation, such as action required, upgrade required, and
     * limited feature.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the limitation, such as action required, upgrade required, and
     * limited feature.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the limitation, such as action required, upgrade required, and
     * limited feature.</p>
     */
    inline Limitation& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the limitation, such as action required, upgrade required, and
     * limited feature.</p>
     */
    inline Limitation& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the limitation, such as action required, upgrade required, and
     * limited feature.</p>
     */
    inline Limitation& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_impact;
    bool m_impactHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
