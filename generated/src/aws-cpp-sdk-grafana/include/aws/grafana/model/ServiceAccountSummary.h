/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/Role.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {

/**
 * <p>A structure that contains the information about one service
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ServiceAccountSummary">AWS
 * API Reference</a></p>
 */
class ServiceAccountSummary {
 public:
  AWS_MANAGEDGRAFANA_API ServiceAccountSummary() = default;
  AWS_MANAGEDGRAFANA_API ServiceAccountSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API ServiceAccountSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of the service account.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ServiceAccountSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the service account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ServiceAccountSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns true if the service account is disabled. Service accounts can be
   * disabled and enabled in the Amazon Managed Grafana console.</p>
   */
  inline const Aws::String& GetIsDisabled() const { return m_isDisabled; }
  inline bool IsDisabledHasBeenSet() const { return m_isDisabledHasBeenSet; }
  template <typename IsDisabledT = Aws::String>
  void SetIsDisabled(IsDisabledT&& value) {
    m_isDisabledHasBeenSet = true;
    m_isDisabled = std::forward<IsDisabledT>(value);
  }
  template <typename IsDisabledT = Aws::String>
  ServiceAccountSummary& WithIsDisabled(IsDisabledT&& value) {
    SetIsDisabled(std::forward<IsDisabledT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role of the service account, which sets the permission level used when
   * calling Grafana APIs.</p>
   */
  inline Role GetGrafanaRole() const { return m_grafanaRole; }
  inline bool GrafanaRoleHasBeenSet() const { return m_grafanaRoleHasBeenSet; }
  inline void SetGrafanaRole(Role value) {
    m_grafanaRoleHasBeenSet = true;
    m_grafanaRole = value;
  }
  inline ServiceAccountSummary& WithGrafanaRole(Role value) {
    SetGrafanaRole(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_isDisabled;

  Role m_grafanaRole{Role::NOT_SET};
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_isDisabledHasBeenSet = false;
  bool m_grafanaRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
