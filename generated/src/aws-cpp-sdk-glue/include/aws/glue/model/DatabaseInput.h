﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DatabaseIdentifier.h>
#include <aws/glue/model/FederatedDatabase.h>
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
   * <p>The structure used to create or update a database.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DatabaseInput">AWS
   * API Reference</a></p>
   */
  class DatabaseInput
  {
  public:
    AWS_GLUE_API DatabaseInput();
    AWS_GLUE_API DatabaseInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DatabaseInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the database. For Hive compatibility, this is folded to lowercase
     * when it is stored.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DatabaseInput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DatabaseInput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DatabaseInput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the database.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DatabaseInput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DatabaseInput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DatabaseInput& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the database (for example, an HDFS path). </p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }
    inline void SetLocationUri(const Aws::String& value) { m_locationUriHasBeenSet = true; m_locationUri = value; }
    inline void SetLocationUri(Aws::String&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::move(value); }
    inline void SetLocationUri(const char* value) { m_locationUriHasBeenSet = true; m_locationUri.assign(value); }
    inline DatabaseInput& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}
    inline DatabaseInput& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}
    inline DatabaseInput& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These key-value pairs define parameters and properties of the database.</p>
     * <p>These key-value pairs define parameters and properties of the database.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline DatabaseInput& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline DatabaseInput& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline DatabaseInput& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline DatabaseInput& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline DatabaseInput& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline DatabaseInput& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline DatabaseInput& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline DatabaseInput& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline DatabaseInput& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Creates a set of default permissions on the table for principals. Used by
     * Lake Formation. Not used in the normal course of Glue operations.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const{ return m_createTableDefaultPermissions; }
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }
    inline void SetCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = value; }
    inline void SetCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::move(value); }
    inline DatabaseInput& WithCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateTableDefaultPermissions(value); return *this;}
    inline DatabaseInput& WithCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateTableDefaultPermissions(std::move(value)); return *this;}
    inline DatabaseInput& AddCreateTableDefaultPermissions(const PrincipalPermissions& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(value); return *this; }
    inline DatabaseInput& AddCreateTableDefaultPermissions(PrincipalPermissions&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>DatabaseIdentifier</code> structure that describes a target database
     * for resource linking.</p>
     */
    inline const DatabaseIdentifier& GetTargetDatabase() const{ return m_targetDatabase; }
    inline bool TargetDatabaseHasBeenSet() const { return m_targetDatabaseHasBeenSet; }
    inline void SetTargetDatabase(const DatabaseIdentifier& value) { m_targetDatabaseHasBeenSet = true; m_targetDatabase = value; }
    inline void SetTargetDatabase(DatabaseIdentifier&& value) { m_targetDatabaseHasBeenSet = true; m_targetDatabase = std::move(value); }
    inline DatabaseInput& WithTargetDatabase(const DatabaseIdentifier& value) { SetTargetDatabase(value); return *this;}
    inline DatabaseInput& WithTargetDatabase(DatabaseIdentifier&& value) { SetTargetDatabase(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FederatedDatabase</code> structure that references an entity outside
     * the Glue Data Catalog.</p>
     */
    inline const FederatedDatabase& GetFederatedDatabase() const{ return m_federatedDatabase; }
    inline bool FederatedDatabaseHasBeenSet() const { return m_federatedDatabaseHasBeenSet; }
    inline void SetFederatedDatabase(const FederatedDatabase& value) { m_federatedDatabaseHasBeenSet = true; m_federatedDatabase = value; }
    inline void SetFederatedDatabase(FederatedDatabase&& value) { m_federatedDatabaseHasBeenSet = true; m_federatedDatabase = std::move(value); }
    inline DatabaseInput& WithFederatedDatabase(const FederatedDatabase& value) { SetFederatedDatabase(value); return *this;}
    inline DatabaseInput& WithFederatedDatabase(FederatedDatabase&& value) { SetFederatedDatabase(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createTableDefaultPermissions;
    bool m_createTableDefaultPermissionsHasBeenSet = false;

    DatabaseIdentifier m_targetDatabase;
    bool m_targetDatabaseHasBeenSet = false;

    FederatedDatabase m_federatedDatabase;
    bool m_federatedDatabaseHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
