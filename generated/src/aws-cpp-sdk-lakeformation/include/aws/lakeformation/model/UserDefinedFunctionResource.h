/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/UserDefinedFunctionWildcard.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LakeFormation {
namespace Model {

/**
 * <p>Identifies a user-defined function, or all user-defined functions in a
 * database, as a resource that you can grant permissions on. You can grant
 * permissions only on functions whose <code>GovernanceMode</code> is
 * <code>LAKE_FORMATION</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UserDefinedFunctionResource">AWS
 * API Reference</a></p>
 */
class UserDefinedFunctionResource {
 public:
  AWS_LAKEFORMATION_API UserDefinedFunctionResource() = default;
  AWS_LAKEFORMATION_API UserDefinedFunctionResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API UserDefinedFunctionResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Data Catalog. By default, it's your account ID.</p>
   */
  inline const Aws::String& GetCatalogId() const { return m_catalogId; }
  inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
  template <typename CatalogIdT = Aws::String>
  void SetCatalogId(CatalogIdT&& value) {
    m_catalogIdHasBeenSet = true;
    m_catalogId = std::forward<CatalogIdT>(value);
  }
  template <typename CatalogIdT = Aws::String>
  UserDefinedFunctionResource& WithCatalogId(CatalogIdT&& value) {
    SetCatalogId(std::forward<CatalogIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the database that contains the function.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  UserDefinedFunctionResource& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the function.</p> <p>Exactly one of
   * <code>UserDefinedFunctionResource$Name</code> or
   * <code>UserDefinedFunctionResource$UserDefinedFunctionWildcard</code> is
   * required.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UserDefinedFunctionResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A wildcard object representing every user-defined function in the database,
   * including functions created after the grant.</p> <p>Exactly one of
   * <code>UserDefinedFunctionResource$Name</code> or
   * <code>UserDefinedFunctionResource$UserDefinedFunctionWildcard</code> is
   * required.</p>
   */
  inline const UserDefinedFunctionWildcard& GetUserDefinedFunctionWildcard() const { return m_userDefinedFunctionWildcard; }
  inline bool UserDefinedFunctionWildcardHasBeenSet() const { return m_userDefinedFunctionWildcardHasBeenSet; }
  template <typename UserDefinedFunctionWildcardT = UserDefinedFunctionWildcard>
  void SetUserDefinedFunctionWildcard(UserDefinedFunctionWildcardT&& value) {
    m_userDefinedFunctionWildcardHasBeenSet = true;
    m_userDefinedFunctionWildcard = std::forward<UserDefinedFunctionWildcardT>(value);
  }
  template <typename UserDefinedFunctionWildcardT = UserDefinedFunctionWildcard>
  UserDefinedFunctionResource& WithUserDefinedFunctionWildcard(UserDefinedFunctionWildcardT&& value) {
    SetUserDefinedFunctionWildcard(std::forward<UserDefinedFunctionWildcardT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogId;

  Aws::String m_databaseName;

  Aws::String m_name;

  UserDefinedFunctionWildcard m_userDefinedFunctionWildcard;
  bool m_catalogIdHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_userDefinedFunctionWildcardHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
