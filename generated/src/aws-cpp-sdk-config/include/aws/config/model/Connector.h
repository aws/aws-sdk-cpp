/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConnectorConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConfigService {
namespace Model {

/**
 * <p>The details of the connector, including the connector configuration and
 * connector ARN.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/Connector">AWS
 * API Reference</a></p>
 */
class Connector {
 public:
  AWS_CONFIGSERVICE_API Connector() = default;
  AWS_CONFIGSERVICE_API Connector(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the connector.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Connector& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connector.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Connector& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific configuration for connecting to the third-party cloud
   * service provider.</p>
   */
  inline const ConnectorConfiguration& GetConnectorConfiguration() const { return m_connectorConfiguration; }
  inline bool ConnectorConfigurationHasBeenSet() const { return m_connectorConfigurationHasBeenSet; }
  template <typename ConnectorConfigurationT = ConnectorConfiguration>
  void SetConnectorConfiguration(ConnectorConfigurationT&& value) {
    m_connectorConfigurationHasBeenSet = true;
    m_connectorConfiguration = std::forward<ConnectorConfigurationT>(value);
  }
  template <typename ConnectorConfigurationT = ConnectorConfiguration>
  Connector& WithConnectorConfiguration(ConnectorConfigurationT&& value) {
    SetConnectorConfiguration(std::forward<ConnectorConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the connector was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  Connector& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  ConnectorConfiguration m_connectorConfiguration;

  Aws::Utils::DateTime m_createdTime{};
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_connectorConfigurationHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
