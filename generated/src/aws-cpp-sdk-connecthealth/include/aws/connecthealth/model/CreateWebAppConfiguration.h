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
 * <p>Input configuration for creating a Pulse web application. Used only in
 * CreateDomain operation input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/CreateWebAppConfiguration">AWS
 * API Reference</a></p>
 */
class CreateWebAppConfiguration {
 public:
  AWS_CONNECTHEALTH_API CreateWebAppConfiguration() = default;
  AWS_CONNECTHEALTH_API CreateWebAppConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API CreateWebAppConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CreateWebAppConfiguration& WithEhrRole(EhrRoleT&& value) {
    SetEhrRole(std::forward<EhrRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Identity Center instance ID to use for creating the application.</p>
   */
  inline const Aws::String& GetIdcInstanceId() const { return m_idcInstanceId; }
  inline bool IdcInstanceIdHasBeenSet() const { return m_idcInstanceIdHasBeenSet; }
  template <typename IdcInstanceIdT = Aws::String>
  void SetIdcInstanceId(IdcInstanceIdT&& value) {
    m_idcInstanceIdHasBeenSet = true;
    m_idcInstanceId = std::forward<IdcInstanceIdT>(value);
  }
  template <typename IdcInstanceIdT = Aws::String>
  CreateWebAppConfiguration& WithIdcInstanceId(IdcInstanceIdT&& value) {
    SetIdcInstanceId(std::forward<IdcInstanceIdT>(value));
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
  CreateWebAppConfiguration& WithIdcRegion(IdcRegionT&& value) {
    SetIdcRegion(std::forward<IdcRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ehrRole;

  Aws::String m_idcInstanceId;

  Aws::String m_idcRegion;
  bool m_ehrRoleHasBeenSet = false;
  bool m_idcInstanceIdHasBeenSet = false;
  bool m_idcRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
