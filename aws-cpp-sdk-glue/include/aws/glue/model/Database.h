/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DatabaseIdentifier.h>
#include <aws/glue/model/PrincipalPermissions.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The <code>Database</code> object represents a logical grouping of tables that
   * might reside in a Hive metastore or an RDBMS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Database">AWS API
   * Reference</a></p>
   */
  class Database
  {
  public:
    AWS_GLUE_API Database();
    AWS_GLUE_API Database(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Database& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline Database& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline Database& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline Database& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the database.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the database.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the database.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the database.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the database.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the database.</p>
     */
    inline Database& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the database.</p>
     */
    inline Database& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the database.</p>
     */
    inline Database& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUriHasBeenSet = true; m_locationUri = value; }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::move(value); }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUriHasBeenSet = true; m_locationUri.assign(value); }

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline Database& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline Database& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The location of the database (for example, an HDFS path).</p>
     */
    inline Database& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline Database& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline Database& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline Database& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline Database& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline Database& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline Database& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline Database& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline Database& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline Database& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The time at which the metadata database was created in the catalog.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the metadata database was created in the catalog.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the metadata database was created in the catalog.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the metadata database was created in the catalog.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the metadata database was created in the catalog.</p>
     */
    inline Database& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the metadata database was created in the catalog.</p>
     */
    inline Database& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>Creates a set of default permissions on the table for principals. </p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const{ return m_createTableDefaultPermissions; }

    /**
     * <p>Creates a set of default permissions on the table for principals. </p>
     */
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }

    /**
     * <p>Creates a set of default permissions on the table for principals. </p>
     */
    inline void SetCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = value; }

    /**
     * <p>Creates a set of default permissions on the table for principals. </p>
     */
    inline void SetCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::move(value); }

    /**
     * <p>Creates a set of default permissions on the table for principals. </p>
     */
    inline Database& WithCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateTableDefaultPermissions(value); return *this;}

    /**
     * <p>Creates a set of default permissions on the table for principals. </p>
     */
    inline Database& WithCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateTableDefaultPermissions(std::move(value)); return *this;}

    /**
     * <p>Creates a set of default permissions on the table for principals. </p>
     */
    inline Database& AddCreateTableDefaultPermissions(const PrincipalPermissions& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(value); return *this; }

    /**
     * <p>Creates a set of default permissions on the table for principals. </p>
     */
    inline Database& AddCreateTableDefaultPermissions(PrincipalPermissions&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A <code>DatabaseIdentifier</code> structure that describes a target database
     * for resource linking.</p>
     */
    inline const DatabaseIdentifier& GetTargetDatabase() const{ return m_targetDatabase; }

    /**
     * <p>A <code>DatabaseIdentifier</code> structure that describes a target database
     * for resource linking.</p>
     */
    inline bool TargetDatabaseHasBeenSet() const { return m_targetDatabaseHasBeenSet; }

    /**
     * <p>A <code>DatabaseIdentifier</code> structure that describes a target database
     * for resource linking.</p>
     */
    inline void SetTargetDatabase(const DatabaseIdentifier& value) { m_targetDatabaseHasBeenSet = true; m_targetDatabase = value; }

    /**
     * <p>A <code>DatabaseIdentifier</code> structure that describes a target database
     * for resource linking.</p>
     */
    inline void SetTargetDatabase(DatabaseIdentifier&& value) { m_targetDatabaseHasBeenSet = true; m_targetDatabase = std::move(value); }

    /**
     * <p>A <code>DatabaseIdentifier</code> structure that describes a target database
     * for resource linking.</p>
     */
    inline Database& WithTargetDatabase(const DatabaseIdentifier& value) { SetTargetDatabase(value); return *this;}

    /**
     * <p>A <code>DatabaseIdentifier</code> structure that describes a target database
     * for resource linking.</p>
     */
    inline Database& WithTargetDatabase(DatabaseIdentifier&& value) { SetTargetDatabase(std::move(value)); return *this;}


    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline Database& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline Database& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which the database resides.</p>
     */
    inline Database& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createTableDefaultPermissions;
    bool m_createTableDefaultPermissionsHasBeenSet = false;

    DatabaseIdentifier m_targetDatabase;
    bool m_targetDatabaseHasBeenSet = false;

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
