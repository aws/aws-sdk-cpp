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
#include <aws/glue/model/AllowFullTableExternalDataAccessEnum.h>
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
    AWS_GLUE_API Catalog() = default;
    AWS_GLUE_API Catalog(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Catalog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the catalog. To grant access to the default catalog, this field
     * should not be provided.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    Catalog& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog. Cannot be the same as the account ID.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Catalog& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the catalog resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    Catalog& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description string, not more than 2048 bytes long, matching the URI address
     * multi-line string pattern. A description of the catalog.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Catalog& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A map array of key-value pairs that define parameters and properties of the
     * catalog.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    Catalog& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    Catalog& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time at which the catalog was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Catalog& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the catalog was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    Catalog& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>TargetRedshiftCatalog</code> object that describes a target catalog
     * for database resource linking.</p>
     */
    inline const TargetRedshiftCatalog& GetTargetRedshiftCatalog() const { return m_targetRedshiftCatalog; }
    inline bool TargetRedshiftCatalogHasBeenSet() const { return m_targetRedshiftCatalogHasBeenSet; }
    template<typename TargetRedshiftCatalogT = TargetRedshiftCatalog>
    void SetTargetRedshiftCatalog(TargetRedshiftCatalogT&& value) { m_targetRedshiftCatalogHasBeenSet = true; m_targetRedshiftCatalog = std::forward<TargetRedshiftCatalogT>(value); }
    template<typename TargetRedshiftCatalogT = TargetRedshiftCatalog>
    Catalog& WithTargetRedshiftCatalog(TargetRedshiftCatalogT&& value) { SetTargetRedshiftCatalog(std::forward<TargetRedshiftCatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FederatedCatalog</code> object that points to an entity outside the
     * Glue Data Catalog.</p>
     */
    inline const FederatedCatalog& GetFederatedCatalog() const { return m_federatedCatalog; }
    inline bool FederatedCatalogHasBeenSet() const { return m_federatedCatalogHasBeenSet; }
    template<typename FederatedCatalogT = FederatedCatalog>
    void SetFederatedCatalog(FederatedCatalogT&& value) { m_federatedCatalogHasBeenSet = true; m_federatedCatalog = std::forward<FederatedCatalogT>(value); }
    template<typename FederatedCatalogT = FederatedCatalog>
    Catalog& WithFederatedCatalog(FederatedCatalogT&& value) { SetFederatedCatalog(std::forward<FederatedCatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CatalogProperties</code> object that specifies data lake access
     * properties and other custom properties.</p>
     */
    inline const CatalogPropertiesOutput& GetCatalogProperties() const { return m_catalogProperties; }
    inline bool CatalogPropertiesHasBeenSet() const { return m_catalogPropertiesHasBeenSet; }
    template<typename CatalogPropertiesT = CatalogPropertiesOutput>
    void SetCatalogProperties(CatalogPropertiesT&& value) { m_catalogPropertiesHasBeenSet = true; m_catalogProperties = std::forward<CatalogPropertiesT>(value); }
    template<typename CatalogPropertiesT = CatalogPropertiesOutput>
    Catalog& WithCatalogProperties(CatalogPropertiesT&& value) { SetCatalogProperties(std::forward<CatalogPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>PrincipalPermissions</code> objects. Creates a set of
     * default permissions on the table(s) for principals. Used by Amazon Web Services
     * Lake Formation. Not used in the normal course of Glue operations.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const { return m_createTableDefaultPermissions; }
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }
    template<typename CreateTableDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    void SetCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::forward<CreateTableDefaultPermissionsT>(value); }
    template<typename CreateTableDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    Catalog& WithCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { SetCreateTableDefaultPermissions(std::forward<CreateTableDefaultPermissionsT>(value)); return *this;}
    template<typename CreateTableDefaultPermissionsT = PrincipalPermissions>
    Catalog& AddCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.emplace_back(std::forward<CreateTableDefaultPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>PrincipalPermissions</code> objects. Creates a set of
     * default permissions on the database(s) for principals. Used by Amazon Web
     * Services Lake Formation. Not used in the normal course of Glue operations.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateDatabaseDefaultPermissions() const { return m_createDatabaseDefaultPermissions; }
    inline bool CreateDatabaseDefaultPermissionsHasBeenSet() const { return m_createDatabaseDefaultPermissionsHasBeenSet; }
    template<typename CreateDatabaseDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    void SetCreateDatabaseDefaultPermissions(CreateDatabaseDefaultPermissionsT&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = std::forward<CreateDatabaseDefaultPermissionsT>(value); }
    template<typename CreateDatabaseDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    Catalog& WithCreateDatabaseDefaultPermissions(CreateDatabaseDefaultPermissionsT&& value) { SetCreateDatabaseDefaultPermissions(std::forward<CreateDatabaseDefaultPermissionsT>(value)); return *this;}
    template<typename CreateDatabaseDefaultPermissionsT = PrincipalPermissions>
    Catalog& AddCreateDatabaseDefaultPermissions(CreateDatabaseDefaultPermissionsT&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.emplace_back(std::forward<CreateDatabaseDefaultPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Allows third-party engines to access data in Amazon S3 locations that are
     * registered with Lake Formation. </p>
     */
    inline AllowFullTableExternalDataAccessEnum GetAllowFullTableExternalDataAccess() const { return m_allowFullTableExternalDataAccess; }
    inline bool AllowFullTableExternalDataAccessHasBeenSet() const { return m_allowFullTableExternalDataAccessHasBeenSet; }
    inline void SetAllowFullTableExternalDataAccess(AllowFullTableExternalDataAccessEnum value) { m_allowFullTableExternalDataAccessHasBeenSet = true; m_allowFullTableExternalDataAccess = value; }
    inline Catalog& WithAllowFullTableExternalDataAccess(AllowFullTableExternalDataAccessEnum value) { SetAllowFullTableExternalDataAccess(value); return *this;}
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

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
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

    AllowFullTableExternalDataAccessEnum m_allowFullTableExternalDataAccess{AllowFullTableExternalDataAccessEnum::NOT_SET};
    bool m_allowFullTableExternalDataAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
