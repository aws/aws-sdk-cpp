/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

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
 * <p>The lakehouse properties of a connection properties patch.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LakehousePropertiesPatch">AWS
 * API Reference</a></p>
 */
class LakehousePropertiesPatch {
 public:
  AWS_DATAZONE_API LakehousePropertiesPatch() = default;
  AWS_DATAZONE_API LakehousePropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API LakehousePropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether to enable Glue lineage sync for tables managed by Glue
   * crawlers.</p>
   */
  inline bool GetGlueLineageSyncEnabled() const { return m_glueLineageSyncEnabled; }
  inline bool GlueLineageSyncEnabledHasBeenSet() const { return m_glueLineageSyncEnabledHasBeenSet; }
  inline void SetGlueLineageSyncEnabled(bool value) {
    m_glueLineageSyncEnabledHasBeenSet = true;
    m_glueLineageSyncEnabled = value;
  }
  inline LakehousePropertiesPatch& WithGlueLineageSyncEnabled(bool value) {
    SetGlueLineageSyncEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_glueLineageSyncEnabled{false};
  bool m_glueLineageSyncEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
