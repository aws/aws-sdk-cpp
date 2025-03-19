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
   * <p>A structure that describes catalog properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CatalogInput">AWS
   * API Reference</a></p>
   */
  class CatalogInput
  {
  public:
    AWS_GLUE_API CatalogInput() = default;
    AWS_GLUE_API CatalogInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    CatalogInput& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FederatedCatalog</code> object. A <code>FederatedCatalog</code>
     * structure that references an entity outside the Glue Data Catalog, for example a
     * Redshift database.</p>
     */
    inline const FederatedCatalog& GetFederatedCatalog() const { return m_federatedCatalog; }
    inline bool FederatedCatalogHasBeenSet() const { return m_federatedCatalogHasBeenSet; }
    template<typename FederatedCatalogT = FederatedCatalog>
    void SetFederatedCatalog(FederatedCatalogT&& value) { m_federatedCatalogHasBeenSet = true; m_federatedCatalog = std::forward<FederatedCatalogT>(value); }
    template<typename FederatedCatalogT = FederatedCatalog>
    CatalogInput& WithFederatedCatalog(FederatedCatalogT&& value) { SetFederatedCatalog(std::forward<FederatedCatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map array of key-value pairs that define the parameters and properties of
     * the catalog.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    CatalogInput& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    CatalogInput& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A <code>TargetRedshiftCatalog</code> object that describes a target catalog
     * for resource linking.</p>
     */
    inline const TargetRedshiftCatalog& GetTargetRedshiftCatalog() const { return m_targetRedshiftCatalog; }
    inline bool TargetRedshiftCatalogHasBeenSet() const { return m_targetRedshiftCatalogHasBeenSet; }
    template<typename TargetRedshiftCatalogT = TargetRedshiftCatalog>
    void SetTargetRedshiftCatalog(TargetRedshiftCatalogT&& value) { m_targetRedshiftCatalogHasBeenSet = true; m_targetRedshiftCatalog = std::forward<TargetRedshiftCatalogT>(value); }
    template<typename TargetRedshiftCatalogT = TargetRedshiftCatalog>
    CatalogInput& WithTargetRedshiftCatalog(TargetRedshiftCatalogT&& value) { SetTargetRedshiftCatalog(std::forward<TargetRedshiftCatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CatalogProperties</code> object that specifies data lake access
     * properties and other custom properties.</p>
     */
    inline const CatalogProperties& GetCatalogProperties() const { return m_catalogProperties; }
    inline bool CatalogPropertiesHasBeenSet() const { return m_catalogPropertiesHasBeenSet; }
    template<typename CatalogPropertiesT = CatalogProperties>
    void SetCatalogProperties(CatalogPropertiesT&& value) { m_catalogPropertiesHasBeenSet = true; m_catalogProperties = std::forward<CatalogPropertiesT>(value); }
    template<typename CatalogPropertiesT = CatalogProperties>
    CatalogInput& WithCatalogProperties(CatalogPropertiesT&& value) { SetCatalogProperties(std::forward<CatalogPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>PrincipalPermissions</code> objects. Creates a set of
     * default permissions on the table(s) for principals. Used by Amazon Web Services
     * Lake Formation. Typically should be explicitly set as an empty list.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const { return m_createTableDefaultPermissions; }
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }
    template<typename CreateTableDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    void SetCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::forward<CreateTableDefaultPermissionsT>(value); }
    template<typename CreateTableDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    CatalogInput& WithCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { SetCreateTableDefaultPermissions(std::forward<CreateTableDefaultPermissionsT>(value)); return *this;}
    template<typename CreateTableDefaultPermissionsT = PrincipalPermissions>
    CatalogInput& AddCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.emplace_back(std::forward<CreateTableDefaultPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>PrincipalPermissions</code> objects. Creates a set of
     * default permissions on the database(s) for principals. Used by Amazon Web
     * Services Lake Formation. Typically should be explicitly set as an empty
     * list.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateDatabaseDefaultPermissions() const { return m_createDatabaseDefaultPermissions; }
    inline bool CreateDatabaseDefaultPermissionsHasBeenSet() const { return m_createDatabaseDefaultPermissionsHasBeenSet; }
    template<typename CreateDatabaseDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    void SetCreateDatabaseDefaultPermissions(CreateDatabaseDefaultPermissionsT&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = std::forward<CreateDatabaseDefaultPermissionsT>(value); }
    template<typename CreateDatabaseDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    CatalogInput& WithCreateDatabaseDefaultPermissions(CreateDatabaseDefaultPermissionsT&& value) { SetCreateDatabaseDefaultPermissions(std::forward<CreateDatabaseDefaultPermissionsT>(value)); return *this;}
    template<typename CreateDatabaseDefaultPermissionsT = PrincipalPermissions>
    CatalogInput& AddCreateDatabaseDefaultPermissions(CreateDatabaseDefaultPermissionsT&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.emplace_back(std::forward<CreateDatabaseDefaultPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Allows third-party engines to access data in Amazon S3 locations that are
     * registered with Lake Formation. </p>
     */
    inline AllowFullTableExternalDataAccessEnum GetAllowFullTableExternalDataAccess() const { return m_allowFullTableExternalDataAccess; }
    inline bool AllowFullTableExternalDataAccessHasBeenSet() const { return m_allowFullTableExternalDataAccessHasBeenSet; }
    inline void SetAllowFullTableExternalDataAccess(AllowFullTableExternalDataAccessEnum value) { m_allowFullTableExternalDataAccessHasBeenSet = true; m_allowFullTableExternalDataAccess = value; }
    inline CatalogInput& WithAllowFullTableExternalDataAccess(AllowFullTableExternalDataAccessEnum value) { SetAllowFullTableExternalDataAccess(value); return *this;}
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

    AllowFullTableExternalDataAccessEnum m_allowFullTableExternalDataAccess{AllowFullTableExternalDataAccessEnum::NOT_SET};
    bool m_allowFullTableExternalDataAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
