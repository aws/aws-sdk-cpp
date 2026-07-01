/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains the schema type properties for a configured table
 * association.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredTableAssociationSchemaTypeProperties">AWS
 * API Reference</a></p>
 */
class ConfiguredTableAssociationSchemaTypeProperties {
 public:
  AWS_CLEANROOMS_API ConfiguredTableAssociationSchemaTypeProperties() = default;
  AWS_CLEANROOMS_API ConfiguredTableAssociationSchemaTypeProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API ConfiguredTableAssociationSchemaTypeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the configured table association.</p>
   */
  inline const Aws::String& GetConfiguredTableAssociationId() const { return m_configuredTableAssociationId; }
  inline bool ConfiguredTableAssociationIdHasBeenSet() const { return m_configuredTableAssociationIdHasBeenSet; }
  template <typename ConfiguredTableAssociationIdT = Aws::String>
  void SetConfiguredTableAssociationId(ConfiguredTableAssociationIdT&& value) {
    m_configuredTableAssociationIdHasBeenSet = true;
    m_configuredTableAssociationId = std::forward<ConfiguredTableAssociationIdT>(value);
  }
  template <typename ConfiguredTableAssociationIdT = Aws::String>
  ConfiguredTableAssociationSchemaTypeProperties& WithConfiguredTableAssociationId(ConfiguredTableAssociationIdT&& value) {
    SetConfiguredTableAssociationId(std::forward<ConfiguredTableAssociationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_configuredTableAssociationId;
  bool m_configuredTableAssociationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
