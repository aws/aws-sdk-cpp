/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/PrincipalPermissions.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure representing a list of Lake Formation principals designated as
   * data lake administrators and lists of principal permission entries for default
   * create database and default create table permissions.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DataLakeSettings">AWS
   * API Reference</a></p>
   */
  class DataLakeSettings
  {
  public:
    AWS_LAKEFORMATION_API DataLakeSettings() = default;
    AWS_LAKEFORMATION_API DataLakeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API DataLakeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Lake Formation principals. Supported principals are IAM users or
     * IAM roles.</p>
     */
    inline const Aws::Vector<DataLakePrincipal>& GetDataLakeAdmins() const { return m_dataLakeAdmins; }
    inline bool DataLakeAdminsHasBeenSet() const { return m_dataLakeAdminsHasBeenSet; }
    template<typename DataLakeAdminsT = Aws::Vector<DataLakePrincipal>>
    void SetDataLakeAdmins(DataLakeAdminsT&& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins = std::forward<DataLakeAdminsT>(value); }
    template<typename DataLakeAdminsT = Aws::Vector<DataLakePrincipal>>
    DataLakeSettings& WithDataLakeAdmins(DataLakeAdminsT&& value) { SetDataLakeAdmins(std::forward<DataLakeAdminsT>(value)); return *this;}
    template<typename DataLakeAdminsT = DataLakePrincipal>
    DataLakeSettings& AddDataLakeAdmins(DataLakeAdminsT&& value) { m_dataLakeAdminsHasBeenSet = true; m_dataLakeAdmins.emplace_back(std::forward<DataLakeAdminsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Lake Formation principals with only view access to the resources,
     * without the ability to make changes. Supported principals are IAM users or IAM
     * roles.</p>
     */
    inline const Aws::Vector<DataLakePrincipal>& GetReadOnlyAdmins() const { return m_readOnlyAdmins; }
    inline bool ReadOnlyAdminsHasBeenSet() const { return m_readOnlyAdminsHasBeenSet; }
    template<typename ReadOnlyAdminsT = Aws::Vector<DataLakePrincipal>>
    void SetReadOnlyAdmins(ReadOnlyAdminsT&& value) { m_readOnlyAdminsHasBeenSet = true; m_readOnlyAdmins = std::forward<ReadOnlyAdminsT>(value); }
    template<typename ReadOnlyAdminsT = Aws::Vector<DataLakePrincipal>>
    DataLakeSettings& WithReadOnlyAdmins(ReadOnlyAdminsT&& value) { SetReadOnlyAdmins(std::forward<ReadOnlyAdminsT>(value)); return *this;}
    template<typename ReadOnlyAdminsT = DataLakePrincipal>
    DataLakeSettings& AddReadOnlyAdmins(ReadOnlyAdminsT&& value) { m_readOnlyAdminsHasBeenSet = true; m_readOnlyAdmins.emplace_back(std::forward<ReadOnlyAdminsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether access control on newly created database is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateDatabaseDefaultPermissions() const { return m_createDatabaseDefaultPermissions; }
    inline bool CreateDatabaseDefaultPermissionsHasBeenSet() const { return m_createDatabaseDefaultPermissionsHasBeenSet; }
    template<typename CreateDatabaseDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    void SetCreateDatabaseDefaultPermissions(CreateDatabaseDefaultPermissionsT&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions = std::forward<CreateDatabaseDefaultPermissionsT>(value); }
    template<typename CreateDatabaseDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    DataLakeSettings& WithCreateDatabaseDefaultPermissions(CreateDatabaseDefaultPermissionsT&& value) { SetCreateDatabaseDefaultPermissions(std::forward<CreateDatabaseDefaultPermissionsT>(value)); return *this;}
    template<typename CreateDatabaseDefaultPermissionsT = PrincipalPermissions>
    DataLakeSettings& AddCreateDatabaseDefaultPermissions(CreateDatabaseDefaultPermissionsT&& value) { m_createDatabaseDefaultPermissionsHasBeenSet = true; m_createDatabaseDefaultPermissions.emplace_back(std::forward<CreateDatabaseDefaultPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether access control on newly created table is managed by Lake
     * Formation permissions or exclusively by IAM permissions.</p> <p>A null value
     * indicates access control by Lake Formation permissions. A value that assigns ALL
     * to IAM_ALLOWED_PRINCIPALS indicates access control by IAM permissions. This is
     * referred to as the setting "Use only IAM access control," and is for backward
     * compatibility with the Glue permission model implemented by IAM permissions.</p>
     * <p>The only permitted values are an empty array or an array that contains a
     * single JSON object that grants ALL to IAM_ALLOWED_PRINCIPALS.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/change-settings.html">Changing
     * the Default Security Settings for Your Data Lake</a>.</p>
     */
    inline const Aws::Vector<PrincipalPermissions>& GetCreateTableDefaultPermissions() const { return m_createTableDefaultPermissions; }
    inline bool CreateTableDefaultPermissionsHasBeenSet() const { return m_createTableDefaultPermissionsHasBeenSet; }
    template<typename CreateTableDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    void SetCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions = std::forward<CreateTableDefaultPermissionsT>(value); }
    template<typename CreateTableDefaultPermissionsT = Aws::Vector<PrincipalPermissions>>
    DataLakeSettings& WithCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { SetCreateTableDefaultPermissions(std::forward<CreateTableDefaultPermissionsT>(value)); return *this;}
    template<typename CreateTableDefaultPermissionsT = PrincipalPermissions>
    DataLakeSettings& AddCreateTableDefaultPermissions(CreateTableDefaultPermissionsT&& value) { m_createTableDefaultPermissionsHasBeenSet = true; m_createTableDefaultPermissions.emplace_back(std::forward<CreateTableDefaultPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A key-value map that provides an additional configuration on your data lake.
     * CROSS_ACCOUNT_VERSION is the key you can configure in the Parameters field.
     * Accepted values for the CrossAccountVersion key are 1, 2, 3, and 4.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    DataLakeSettings& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    DataLakeSettings& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of the resource-owning account IDs that the caller's account can use
     * to share their user access details (user ARNs). The user ARNs can be logged in
     * the resource owner's CloudTrail log.</p> <p>You may want to specify this
     * property when you are in a high-trust boundary, such as the same team or
     * company. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTrustedResourceOwners() const { return m_trustedResourceOwners; }
    inline bool TrustedResourceOwnersHasBeenSet() const { return m_trustedResourceOwnersHasBeenSet; }
    template<typename TrustedResourceOwnersT = Aws::Vector<Aws::String>>
    void SetTrustedResourceOwners(TrustedResourceOwnersT&& value) { m_trustedResourceOwnersHasBeenSet = true; m_trustedResourceOwners = std::forward<TrustedResourceOwnersT>(value); }
    template<typename TrustedResourceOwnersT = Aws::Vector<Aws::String>>
    DataLakeSettings& WithTrustedResourceOwners(TrustedResourceOwnersT&& value) { SetTrustedResourceOwners(std::forward<TrustedResourceOwnersT>(value)); return *this;}
    template<typename TrustedResourceOwnersT = Aws::String>
    DataLakeSettings& AddTrustedResourceOwners(TrustedResourceOwnersT&& value) { m_trustedResourceOwnersHasBeenSet = true; m_trustedResourceOwners.emplace_back(std::forward<TrustedResourceOwnersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to allow Amazon EMR clusters to access data managed by Lake
     * Formation. </p> <p>If true, you allow Amazon EMR clusters to access data in
     * Amazon S3 locations that are registered with Lake Formation.</p> <p>If false or
     * null, no Amazon EMR clusters will be able to access data in Amazon S3 locations
     * that are registered with Lake Formation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/initial-LF-setup.html#external-data-filter">(Optional)
     * Allow external data filtering</a>.</p>
     */
    inline bool GetAllowExternalDataFiltering() const { return m_allowExternalDataFiltering; }
    inline bool AllowExternalDataFilteringHasBeenSet() const { return m_allowExternalDataFilteringHasBeenSet; }
    inline void SetAllowExternalDataFiltering(bool value) { m_allowExternalDataFilteringHasBeenSet = true; m_allowExternalDataFiltering = value; }
    inline DataLakeSettings& WithAllowExternalDataFiltering(bool value) { SetAllowExternalDataFiltering(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to allow a third-party query engine to get data access credentials
     * without session tags when a caller has full data access permissions.</p>
     */
    inline bool GetAllowFullTableExternalDataAccess() const { return m_allowFullTableExternalDataAccess; }
    inline bool AllowFullTableExternalDataAccessHasBeenSet() const { return m_allowFullTableExternalDataAccessHasBeenSet; }
    inline void SetAllowFullTableExternalDataAccess(bool value) { m_allowFullTableExternalDataAccessHasBeenSet = true; m_allowFullTableExternalDataAccess = value; }
    inline DataLakeSettings& WithAllowFullTableExternalDataAccess(bool value) { SetAllowFullTableExternalDataAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the account IDs of Amazon Web Services accounts with Amazon EMR
     * clusters that are to perform data filtering.&gt;</p>
     */
    inline const Aws::Vector<DataLakePrincipal>& GetExternalDataFilteringAllowList() const { return m_externalDataFilteringAllowList; }
    inline bool ExternalDataFilteringAllowListHasBeenSet() const { return m_externalDataFilteringAllowListHasBeenSet; }
    template<typename ExternalDataFilteringAllowListT = Aws::Vector<DataLakePrincipal>>
    void SetExternalDataFilteringAllowList(ExternalDataFilteringAllowListT&& value) { m_externalDataFilteringAllowListHasBeenSet = true; m_externalDataFilteringAllowList = std::forward<ExternalDataFilteringAllowListT>(value); }
    template<typename ExternalDataFilteringAllowListT = Aws::Vector<DataLakePrincipal>>
    DataLakeSettings& WithExternalDataFilteringAllowList(ExternalDataFilteringAllowListT&& value) { SetExternalDataFilteringAllowList(std::forward<ExternalDataFilteringAllowListT>(value)); return *this;}
    template<typename ExternalDataFilteringAllowListT = DataLakePrincipal>
    DataLakeSettings& AddExternalDataFilteringAllowList(ExternalDataFilteringAllowListT&& value) { m_externalDataFilteringAllowListHasBeenSet = true; m_externalDataFilteringAllowList.emplace_back(std::forward<ExternalDataFilteringAllowListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lake Formation relies on a privileged process secured by Amazon EMR or the
     * third party integrator to tag the user's role while assuming it. Lake Formation
     * will publish the acceptable key-value pair, for example key =
     * "LakeFormationTrustedCaller" and value = "TRUE" and the third party integrator
     * must properly tag the temporary security credentials that will be used to call
     * Lake Formation's administrative APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedSessionTagValueList() const { return m_authorizedSessionTagValueList; }
    inline bool AuthorizedSessionTagValueListHasBeenSet() const { return m_authorizedSessionTagValueListHasBeenSet; }
    template<typename AuthorizedSessionTagValueListT = Aws::Vector<Aws::String>>
    void SetAuthorizedSessionTagValueList(AuthorizedSessionTagValueListT&& value) { m_authorizedSessionTagValueListHasBeenSet = true; m_authorizedSessionTagValueList = std::forward<AuthorizedSessionTagValueListT>(value); }
    template<typename AuthorizedSessionTagValueListT = Aws::Vector<Aws::String>>
    DataLakeSettings& WithAuthorizedSessionTagValueList(AuthorizedSessionTagValueListT&& value) { SetAuthorizedSessionTagValueList(std::forward<AuthorizedSessionTagValueListT>(value)); return *this;}
    template<typename AuthorizedSessionTagValueListT = Aws::String>
    DataLakeSettings& AddAuthorizedSessionTagValueList(AuthorizedSessionTagValueListT&& value) { m_authorizedSessionTagValueListHasBeenSet = true; m_authorizedSessionTagValueList.emplace_back(std::forward<AuthorizedSessionTagValueListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DataLakePrincipal> m_dataLakeAdmins;
    bool m_dataLakeAdminsHasBeenSet = false;

    Aws::Vector<DataLakePrincipal> m_readOnlyAdmins;
    bool m_readOnlyAdminsHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createDatabaseDefaultPermissions;
    bool m_createDatabaseDefaultPermissionsHasBeenSet = false;

    Aws::Vector<PrincipalPermissions> m_createTableDefaultPermissions;
    bool m_createTableDefaultPermissionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_trustedResourceOwners;
    bool m_trustedResourceOwnersHasBeenSet = false;

    bool m_allowExternalDataFiltering{false};
    bool m_allowExternalDataFilteringHasBeenSet = false;

    bool m_allowFullTableExternalDataAccess{false};
    bool m_allowFullTableExternalDataAccessHasBeenSet = false;

    Aws::Vector<DataLakePrincipal> m_externalDataFilteringAllowList;
    bool m_externalDataFilteringAllowListHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedSessionTagValueList;
    bool m_authorizedSessionTagValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
