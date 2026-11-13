/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/AnyResourceSupportedTypes.h>

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
 * <p>Represents all resources of the specified type in a Data Catalog, including
 * resources that are created after the grant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/AnyResource">AWS
 * API Reference</a></p>
 */
class AnyResource {
 public:
  AWS_LAKEFORMATION_API AnyResource() = default;
  AWS_LAKEFORMATION_API AnyResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAKEFORMATION_API AnyResource& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  AnyResource& WithCatalogId(CatalogIdT&& value) {
    SetCatalogId(std::forward<CatalogIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource that the grant covers. The only supported value is
   * <code>TABLE</code>.</p>
   */
  inline AnyResourceSupportedTypes GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(AnyResourceSupportedTypes value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline AnyResource& WithResourceType(AnyResourceSupportedTypes value) {
    SetResourceType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogId;

  AnyResourceSupportedTypes m_resourceType{AnyResourceSupportedTypes::NOT_SET};
  bool m_catalogIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
