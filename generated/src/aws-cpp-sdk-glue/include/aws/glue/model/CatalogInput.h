/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/FederatedCatalog.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/TargetRedshiftCatalog.h>
#include <aws/glue/model/CatalogProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A structure that describes catalog properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CatalogInput">AWS
   * API Reference</a></p>
   */
  class CatalogInput
  {
  public:
    AWS_GLUE_API CatalogInput();
    AWS_GLUE_API CatalogInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Description string, not more than 2048 bytes long, matching the URI address
     * multi-line string pattern. A description of the catalog.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CatalogInput& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CatalogInput& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CatalogInput& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FederatedCatalog</code> object. A <code>FederatedCatalog</code>
     * structure that references an entity outside the Glue Data Catalog, for example a
     * Redshift database.</p>
     */
    inline const FederatedCatalog& GetFederatedCatalog() const{ return m_federatedCatalog; }
    inline bool FederatedCatalogHasBeenSet() const { return m_federatedCatalogHasBeenSet; }
    inline void SetFederatedCatalog(const FederatedCatalog& value) { m_federatedCatalogHasBeenSet = true; m_federatedCatalog = value; }
    inline void SetFederatedCatalog(FederatedCatalog&& value) { m_federatedCatalogHasBeenSet = true; m_federatedCatalog = std::move(value); }
    inline CatalogInput& WithFederatedCatalog(const FederatedCatalog& value) { SetFederatedCatalog(value); return *this;}
    inline CatalogInput& WithFederatedCatalog(FederatedCatalog&& value) { SetFederatedCatalog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map array of key-value pairs that define the parameters and properties of
     * the catalog.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline CatalogInput& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline CatalogInput& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline CatalogInput& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline CatalogInput& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CatalogInput& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CatalogInput& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CatalogInput& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CatalogInput& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CatalogInput& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>TargetRedshiftCatalog</code> object that describes a target catalog
     * for resource linking.</p>
     */
    inline const TargetRedshiftCatalog& GetTargetRedshiftCatalog() const{ return m_targetRedshiftCatalog; }
    inline bool TargetRedshiftCatalogHasBeenSet() const { return m_targetRedshiftCatalogHasBeenSet; }
    inline void SetTargetRedshiftCatalog(const TargetRedshiftCatalog& value) { m_targetRedshiftCatalogHasBeenSet = true; m_targetRedshiftCatalog = value; }
    inline void SetTargetRedshiftCatalog(TargetRedshiftCatalog&& value) { m_targetRedshiftCatalogHasBeenSet = true; m_targetRedshiftCatalog = std::move(value); }
    inline CatalogInput& WithTargetRedshiftCatalog(const TargetRedshiftCatalog& value) { SetTargetRedshiftCatalog(value); return *this;}
    inline CatalogInput& WithTargetRedshiftCatalog(TargetRedshiftCatalog&& value) { SetTargetRedshiftCatalog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CatalogProperties</code> object that specifies data lake access
     * properties and other custom properties.</p>
     */
    inline const CatalogProperties& GetCatalogProperties() const{ return m_catalogProperties; }
    inline bool CatalogPropertiesHasBeenSet() const { return m_catalogPropertiesHasBeenSet; }
    inline void SetCatalogProperties(const CatalogProperties& value) { m_catalogPropertiesHasBeenSet = true; m_catalogProperties = value; }
    inline void SetCatalogProperties(CatalogProperties&& value) { m_catalogPropertiesHasBeenSet = true; m_catalogProperties = std::move(value); }
    inline CatalogInput& WithCatalogProperties(const CatalogProperties& value) { SetCatalogProperties(value); return *this;}
    inline CatalogInput& WithCatalogProperties(CatalogProperties&& value) { SetCatalogProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>PrincipalPermissions</code> objects. Creates a set of
     * default permissions on the table(s) for principals. Used by Amazon Web Services
     * Lake Formation. Typically should be explicitly set as an empty list.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const{ return m_createTableDefaultPermissions; }
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }
    inline void SetCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = value; }
    inline void SetCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::move(value); }
    inline CatalogInput& WithCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateTableDefaultPermissions(value); return *this;}
    inline CatalogInput& WithCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateTableDefaultPermissions(std::move(value)); return *this;}
    inline CatalogInput& AddCreateTableDefaultPermissions(const PrincipalPermissions& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(value); return *this; }
    inline CatalogInput& AddCreateTableDefaultPermissions(PrincipalPermissions&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>PrincipalPermissions</code> objects. Creates a set of
     * default permissions on the database(s) for principals. Used by Amazon Web
     * Services Lake Formation. Typically should be explicitly set as an empty
     * list.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateDatabaseDefaultPermissions() const{ return m_createDatabaseDefaultPermissions; }
    inline bool CreateDatabaseDefaultPermissionsHasBeenSet() const { return m_createDatabaseDefaultPermissionsHasBeenSet; }
    inline void SetCreateDatabaseDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = value; }
    inline void SetCreateDatabaseDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = std::move(value); }
    inline CatalogInput& WithCreateDatabaseDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateDatabaseDefaultPermissions(value); return *this;}
    inline CatalogInput& WithCreateDatabaseDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateDatabaseDefaultPermissions(std::move(value)); return *this;}
    inline CatalogInput& AddCreateDatabaseDefaultPermissions(const PrincipalPermissions& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.push_back(value); return *this; }
    inline CatalogInput& AddCreateDatabaseDefaultPermissions(PrincipalPermissions&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FederatedCatalog m_federatedCatalog;
    bool m_federatedCatalogHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    TargetRedshiftCatalog m_targetRedshiftCatalog;
    bool m_targetRedshiftCatalogHasBeenSet = false;

    CatalogProperties m_catalogProperties;
    bool m_catalogPropertiesHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createTableDefaultPermissions;
    bool m_createTableDefaultPermissionsHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createDatabaseDefaultPermissions;
    bool m_createDatabaseDefaultPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
