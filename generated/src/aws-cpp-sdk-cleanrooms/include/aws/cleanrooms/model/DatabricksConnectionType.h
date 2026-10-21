/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DatabricksDeltaSharingConnection.h>

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
 * <p>Type of the connector to be used for connecting to Databricks. Supported
 * connector: Delta Sharing</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DatabricksConnectionType">AWS
 * API Reference</a></p>
 */
class DatabricksConnectionType {
 public:
  AWS_CLEANROOMS_API DatabricksConnectionType() = default;
  AWS_CLEANROOMS_API DatabricksConnectionType(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API DatabricksConnectionType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about Connector for Databricks</p>
   */
  inline const DatabricksDeltaSharingConnection& GetDeltaSharing() const { return m_deltaSharing; }
  inline bool DeltaSharingHasBeenSet() const { return m_deltaSharingHasBeenSet; }
  template <typename DeltaSharingT = DatabricksDeltaSharingConnection>
  void SetDeltaSharing(DeltaSharingT&& value) {
    m_deltaSharingHasBeenSet = true;
    m_deltaSharing = std::forward<DeltaSharingT>(value);
  }
  template <typename DeltaSharingT = DatabricksDeltaSharingConnection>
  DatabricksConnectionType& WithDeltaSharing(DeltaSharingT&& value) {
    SetDeltaSharing(std::forward<DeltaSharingT>(value));
    return *this;
  }
  ///@}
 private:
  DatabricksDeltaSharingConnection m_deltaSharing;
  bool m_deltaSharingHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
