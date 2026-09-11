/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/FeatureConfigurations.h>
#include <aws/invoicing/model/ProcurementPortalName.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {

/**
 * <p>Contains metadata for a procurement portal, including the portal identifier,
 * name, and default feature configurations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/ProcurementPortal">AWS
 * API Reference</a></p>
 */
class ProcurementPortal {
 public:
  AWS_INVOICING_API ProcurementPortal() = default;
  AWS_INVOICING_API ProcurementPortal(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API ProcurementPortal& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the procurement portal.</p>
   */
  inline const Aws::String& GetPortalIdentifier() const { return m_portalIdentifier; }
  inline bool PortalIdentifierHasBeenSet() const { return m_portalIdentifierHasBeenSet; }
  template <typename PortalIdentifierT = Aws::String>
  void SetPortalIdentifier(PortalIdentifierT&& value) {
    m_portalIdentifierHasBeenSet = true;
    m_portalIdentifier = std::forward<PortalIdentifierT>(value);
  }
  template <typename PortalIdentifierT = Aws::String>
  ProcurementPortal& WithPortalIdentifier(PortalIdentifierT&& value) {
    SetPortalIdentifier(std::forward<PortalIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the procurement portal.</p>
   */
  inline ProcurementPortalName GetPortalName() const { return m_portalName; }
  inline bool PortalNameHasBeenSet() const { return m_portalNameHasBeenSet; }
  inline void SetPortalName(ProcurementPortalName value) {
    m_portalNameHasBeenSet = true;
    m_portalName = value;
  }
  inline ProcurementPortal& WithPortalName(ProcurementPortalName value) {
    SetPortalName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the procurement portal.</p>
   */
  inline const Aws::String& GetPortalDisplayName() const { return m_portalDisplayName; }
  inline bool PortalDisplayNameHasBeenSet() const { return m_portalDisplayNameHasBeenSet; }
  template <typename PortalDisplayNameT = Aws::String>
  void SetPortalDisplayName(PortalDisplayNameT&& value) {
    m_portalDisplayNameHasBeenSet = true;
    m_portalDisplayName = std::forward<PortalDisplayNameT>(value);
  }
  template <typename PortalDisplayNameT = Aws::String>
  ProcurementPortal& WithPortalDisplayName(PortalDisplayNameT&& value) {
    SetPortalDisplayName(std::forward<PortalDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default feature configurations for the procurement portal.</p>
   */
  inline const FeatureConfigurations& GetDefaultFeatureConfigurations() const { return m_defaultFeatureConfigurations; }
  inline bool DefaultFeatureConfigurationsHasBeenSet() const { return m_defaultFeatureConfigurationsHasBeenSet; }
  template <typename DefaultFeatureConfigurationsT = FeatureConfigurations>
  void SetDefaultFeatureConfigurations(DefaultFeatureConfigurationsT&& value) {
    m_defaultFeatureConfigurationsHasBeenSet = true;
    m_defaultFeatureConfigurations = std::forward<DefaultFeatureConfigurationsT>(value);
  }
  template <typename DefaultFeatureConfigurationsT = FeatureConfigurations>
  ProcurementPortal& WithDefaultFeatureConfigurations(DefaultFeatureConfigurationsT&& value) {
    SetDefaultFeatureConfigurations(std::forward<DefaultFeatureConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_portalIdentifier;

  ProcurementPortalName m_portalName{ProcurementPortalName::NOT_SET};

  Aws::String m_portalDisplayName;

  FeatureConfigurations m_defaultFeatureConfigurations;
  bool m_portalIdentifierHasBeenSet = false;
  bool m_portalNameHasBeenSet = false;
  bool m_portalDisplayNameHasBeenSet = false;
  bool m_defaultFeatureConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
