/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/TargetRedshiftCatalog.h>
#include <aws/glue/model/FederatedCatalog.h>
#include <aws/glue/model/CatalogPropertiesOutput.h>
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
   * <p>The catalog object represents a logical grouping of databases in the Glue
   * Data Catalog or a federated source. You can now create a Redshift-federated
   * catalog or a catalog containing resource links to Redshift databases in another
   * account or region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Catalog">AWS API
   * Reference</a></p>
   */
  class Catalog
  {
  public:
    AWS_GLUE_API Catalog();
    AWS_GLUE_API Catalog(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Catalog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the catalog. To grant access to the default catalog, this field
     * should not be provided.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline Catalog& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline Catalog& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline Catalog& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog. Cannot be the same as the account ID.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Catalog& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Catalog& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Catalog& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the catalog resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline Catalog& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline Catalog& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline Catalog& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

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
    inline Catalog& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Catalog& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Catalog& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A map array of key-value pairs that define parameters and properties of the
     * catalog.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline Catalog& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline Catalog& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline Catalog& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline Catalog& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline Catalog& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline Catalog& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline Catalog& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline Catalog& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline Catalog& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the catalog was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline Catalog& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline Catalog& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the catalog was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline Catalog& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline Catalog& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TargetRedshiftCatalog</code> object that describes a target catalog
     * for database resource linking.</p>
     */
    inline const TargetRedshiftCatalog& GetTargetRedshiftCatalog() const{ return m_targetRedshiftCatalog; }
    inline bool TargetRedshiftCatalogHasBeenSet() const { return m_targetRedshiftCatalogHasBeenSet; }
    inline void SetTargetRedshiftCatalog(const TargetRedshiftCatalog& value) { m_targetRedshiftCatalogHasBeenSet = true; m_targetRedshiftCatalog = value; }
    inline void SetTargetRedshiftCatalog(TargetRedshiftCatalog&& value) { m_targetRedshiftCatalogHasBeenSet = true; m_targetRedshiftCatalog = std::move(value); }
    inline Catalog& WithTargetRedshiftCatalog(const TargetRedshiftCatalog& value) { SetTargetRedshiftCatalog(value); return *this;}
    inline Catalog& WithTargetRedshiftCatalog(TargetRedshiftCatalog&& value) { SetTargetRedshiftCatalog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FederatedCatalog</code> object that points to an entity outside the
     * Glue Data Catalog.</p>
     */
    inline const FederatedCatalog& GetFederatedCatalog() const{ return m_federatedCatalog; }
    inline bool FederatedCatalogHasBeenSet() const { return m_federatedCatalogHasBeenSet; }
    inline void SetFederatedCatalog(const FederatedCatalog& value) { m_federatedCatalogHasBeenSet = true; m_federatedCatalog = value; }
    inline void SetFederatedCatalog(FederatedCatalog&& value) { m_federatedCatalogHasBeenSet = true; m_federatedCatalog = std::move(value); }
    inline Catalog& WithFederatedCatalog(const FederatedCatalog& value) { SetFederatedCatalog(value); return *this;}
    inline Catalog& WithFederatedCatalog(FederatedCatalog&& value) { SetFederatedCatalog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CatalogProperties</code> object that specifies data lake access
     * properties and other custom properties.</p>
     */
    inline const CatalogPropertiesOutput& GetCatalogProperties() const{ return m_catalogProperties; }
    inline bool CatalogPropertiesHasBeenSet() const { return m_catalogPropertiesHasBeenSet; }
    inline void SetCatalogProperties(const CatalogPropertiesOutput& value) { m_catalogPropertiesHasBeenSet = true; m_catalogProperties = value; }
    inline void SetCatalogProperties(CatalogPropertiesOutput&& value) { m_catalogPropertiesHasBeenSet = true; m_catalogProperties = std::move(value); }
    inline Catalog& WithCatalogProperties(const CatalogPropertiesOutput& value) { SetCatalogProperties(value); return *this;}
    inline Catalog& WithCatalogProperties(CatalogPropertiesOutput&& value) { SetCatalogProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>PrincipalPermissions</code> objects. Creates a set of
     * default permissions on the table(s) for principals. Used by Amazon Web Services
     * Lake Formation. Not used in the normal course of Glue operations.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const{ return m_createTableDefaultPermissions; }
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }
    inline void SetCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = value; }
    inline void SetCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::move(value); }
    inline Catalog& WithCreateTableDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateTableDefaultPermissions(value); return *this;}
    inline Catalog& WithCreateTableDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateTableDefaultPermissions(std::move(value)); return *this;}
    inline Catalog& AddCreateTableDefaultPermissions(const PrincipalPermissions& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(value); return *this; }
    inline Catalog& AddCreateTableDefaultPermissions(PrincipalPermissions&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>PrincipalPermissions</code> objects. Creates a set of
     * default permissions on the database(s) for principals. Used by Amazon Web
     * Services Lake Formation. Not used in the normal course of Glue operations.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateDatabaseDefaultPermissions() const{ return m_createDatabaseDefaultPermissions; }
    inline bool CreateDatabaseDefaultPermissionsHasBeenSet() const { return m_createDatabaseDefaultPermissionsHasBeenSet; }
    inline void SetCreateDatabaseDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = value; }
    inline void SetCreateDatabaseDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = std::move(value); }
    inline Catalog& WithCreateDatabaseDefaultPermissions(const Aws::Vector<PrincipalPermissions>& value) { SetCreateDatabaseDefaultPermissions(value); return *this;}
    inline Catalog& WithCreateDatabaseDefaultPermissions(Aws::Vector<PrincipalPermissions>&& value) { SetCreateDatabaseDefaultPermissions(std::move(value)); return *this;}
    inline Catalog& AddCreateDatabaseDefaultPermissions(const PrincipalPermissions& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.push_back(value); return *this; }
    inline Catalog& AddCreateDatabaseDefaultPermissions(PrincipalPermissions&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    TargetRedshiftCatalog m_targetRedshiftCatalog;
    bool m_targetRedshiftCatalogHasBeenSet = false;

    FederatedCatalog m_federatedCatalog;
    bool m_federatedCatalogHasBeenSet = false;

    CatalogPropertiesOutput m_catalogProperties;
    bool m_catalogPropertiesHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createTableDefaultPermissions;
    bool m_createTableDefaultPermissionsHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createDatabaseDefaultPermissions;
    bool m_createDatabaseDefaultPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
