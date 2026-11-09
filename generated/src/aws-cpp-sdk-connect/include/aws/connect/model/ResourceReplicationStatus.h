/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Indicates whether a resource type is being replicated and kept in sync in a
 * specific Amazon Web Services Region of a Global Resiliency
 * deployment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ResourceReplicationStatus">AWS
 * API Reference</a></p>
 */
class ResourceReplicationStatus {
 public:
  AWS_CONNECT_API ResourceReplicationStatus() = default;
  AWS_CONNECT_API ResourceReplicationStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ResourceReplicationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region that the replication status applies to.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ResourceReplicationStatus& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replication status of the resource type in the Region, such as
   * <code>ENABLED</code>, <code>BLOCKED</code>, or <code>DISABLED</code>.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  ResourceReplicationStatus& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  Aws::String m_status;
  bool m_regionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
