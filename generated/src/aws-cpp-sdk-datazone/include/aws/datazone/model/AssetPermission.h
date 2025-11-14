/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/Permissions.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The asset permissions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetPermission">AWS
 * API Reference</a></p>
 */
class AssetPermission {
 public:
  AWS_DATAZONE_API AssetPermission() = default;
  AWS_DATAZONE_API AssetPermission(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API AssetPermission& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The asset ID as part of the asset permissions.</p>
   */
  inline const Aws::String& GetAssetId() const { return m_assetId; }
  inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
  template <typename AssetIdT = Aws::String>
  void SetAssetId(AssetIdT&& value) {
    m_assetIdHasBeenSet = true;
    m_assetId = std::forward<AssetIdT>(value);
  }
  template <typename AssetIdT = Aws::String>
  AssetPermission& WithAssetId(AssetIdT&& value) {
    SetAssetId(std::forward<AssetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details as part of the asset permissions.</p>
   */
  inline const Permissions& GetPermissions() const { return m_permissions; }
  inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
  template <typename PermissionsT = Permissions>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = Permissions>
  AssetPermission& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assetId;
  bool m_assetIdHasBeenSet = false;

  Permissions m_permissions;
  bool m_permissionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
