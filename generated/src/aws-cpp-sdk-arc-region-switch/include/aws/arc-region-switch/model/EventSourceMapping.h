/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>The Amazon Web Services Lambda event source mapping configuration, containing
 * the resource ARN and optional cross-account configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/EventSourceMapping">AWS
 * API Reference</a></p>
 */
class EventSourceMapping {
 public:
  AWS_ARCREGIONSWITCH_API EventSourceMapping() = default;
  AWS_ARCREGIONSWITCH_API EventSourceMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API EventSourceMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The cross account role for the configuration.</p>
   */
  inline const Aws::String& GetCrossAccountRole() const { return m_crossAccountRole; }
  inline bool CrossAccountRoleHasBeenSet() const { return m_crossAccountRoleHasBeenSet; }
  template <typename CrossAccountRoleT = Aws::String>
  void SetCrossAccountRole(CrossAccountRoleT&& value) {
    m_crossAccountRoleHasBeenSet = true;
    m_crossAccountRole = std::forward<CrossAccountRoleT>(value);
  }
  template <typename CrossAccountRoleT = Aws::String>
  EventSourceMapping& WithCrossAccountRole(CrossAccountRoleT&& value) {
    SetCrossAccountRole(std::forward<CrossAccountRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The external ID (secret key) for the configuration.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  EventSourceMapping& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Lambda event source mapping.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  EventSourceMapping& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_crossAccountRole;

  Aws::String m_externalId;

  Aws::String m_arn;
  bool m_crossAccountRoleHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
