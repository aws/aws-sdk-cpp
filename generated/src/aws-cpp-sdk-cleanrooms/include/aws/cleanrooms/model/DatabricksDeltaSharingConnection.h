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
 * <p>Details about Delta Sharing Connector for Databricks</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DatabricksDeltaSharingConnection">AWS
 * API Reference</a></p>
 */
class DatabricksDeltaSharingConnection {
 public:
  AWS_CLEANROOMS_API DatabricksDeltaSharingConnection() = default;
  AWS_CLEANROOMS_API DatabricksDeltaSharingConnection(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API DatabricksDeltaSharingConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The base URL of a Delta Sharing server that hosts shared datasets.</p>
   */
  inline const Aws::String& GetDeltaShareEndpoint() const { return m_deltaShareEndpoint; }
  inline bool DeltaShareEndpointHasBeenSet() const { return m_deltaShareEndpointHasBeenSet; }
  template <typename DeltaShareEndpointT = Aws::String>
  void SetDeltaShareEndpoint(DeltaShareEndpointT&& value) {
    m_deltaShareEndpointHasBeenSet = true;
    m_deltaShareEndpoint = std::forward<DeltaShareEndpointT>(value);
  }
  template <typename DeltaShareEndpointT = Aws::String>
  DatabricksDeltaSharingConnection& WithDeltaShareEndpoint(DeltaShareEndpointT&& value) {
    SetDeltaShareEndpoint(std::forward<DeltaShareEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the Share used for OpenSharing (Delta Sharing) the Databricks
   * Table.</p>
   */
  inline const Aws::String& GetShareName() const { return m_shareName; }
  inline bool ShareNameHasBeenSet() const { return m_shareNameHasBeenSet; }
  template <typename ShareNameT = Aws::String>
  void SetShareName(ShareNameT&& value) {
    m_shareNameHasBeenSet = true;
    m_shareName = std::forward<ShareNameT>(value);
  }
  template <typename ShareNameT = Aws::String>
  DatabricksDeltaSharingConnection& WithShareName(ShareNameT&& value) {
    SetShareName(std::forward<ShareNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deltaShareEndpoint;

  Aws::String m_shareName;
  bool m_deltaShareEndpointHasBeenSet = false;
  bool m_shareNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
