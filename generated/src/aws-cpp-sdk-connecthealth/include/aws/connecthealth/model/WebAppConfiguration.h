/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Configuration for the Domain web application, including Identity Center
 * settings. If provided, all fields are required.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/WebAppConfiguration">AWS
 * API Reference</a></p>
 */
class WebAppConfiguration {
 public:
  AWS_CONNECTHEALTH_API WebAppConfiguration() = default;
  AWS_CONNECTHEALTH_API WebAppConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API WebAppConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the IAM role used for EHR operations.</p>
   */
  inline const Aws::String& GetEhrRole() const { return m_ehrRole; }
  inline bool EhrRoleHasBeenSet() const { return m_ehrRoleHasBeenSet; }
  template <typename EhrRoleT = Aws::String>
  void SetEhrRole(EhrRoleT&& value) {
    m_ehrRoleHasBeenSet = true;
    m_ehrRole = std::forward<EhrRoleT>(value);
  }
  template <typename EhrRoleT = Aws::String>
  WebAppConfiguration& WithEhrRole(EhrRoleT&& value) {
    SetEhrRole(std::forward<EhrRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Identity Center application ID associated with this Domain.</p>
   */
  inline const Aws::String& GetIdcApplicationId() const { return m_idcApplicationId; }
  inline bool IdcApplicationIdHasBeenSet() const { return m_idcApplicationIdHasBeenSet; }
  template <typename IdcApplicationIdT = Aws::String>
  void SetIdcApplicationId(IdcApplicationIdT&& value) {
    m_idcApplicationIdHasBeenSet = true;
    m_idcApplicationId = std::forward<IdcApplicationIdT>(value);
  }
  template <typename IdcApplicationIdT = Aws::String>
  WebAppConfiguration& WithIdcApplicationId(IdcApplicationIdT&& value) {
    SetIdcApplicationId(std::forward<IdcApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS region where Identity Center is configured.</p>
   */
  inline const Aws::String& GetIdcRegion() const { return m_idcRegion; }
  inline bool IdcRegionHasBeenSet() const { return m_idcRegionHasBeenSet; }
  template <typename IdcRegionT = Aws::String>
  void SetIdcRegion(IdcRegionT&& value) {
    m_idcRegionHasBeenSet = true;
    m_idcRegion = std::forward<IdcRegionT>(value);
  }
  template <typename IdcRegionT = Aws::String>
  WebAppConfiguration& WithIdcRegion(IdcRegionT&& value) {
    SetIdcRegion(std::forward<IdcRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ehrRole;

  Aws::String m_idcApplicationId;

  Aws::String m_idcRegion;
  bool m_ehrRoleHasBeenSet = false;
  bool m_idcApplicationIdHasBeenSet = false;
  bool m_idcRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
