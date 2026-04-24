/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConnectorProperty.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Configuration that defines the base URL and additional request parameters
 * needed during connection creation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectionPropertiesConfiguration">AWS
 * API Reference</a></p>
 */
class ConnectionPropertiesConfiguration {
 public:
  AWS_GLUE_API ConnectionPropertiesConfiguration() = default;
  AWS_GLUE_API ConnectionPropertiesConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ConnectionPropertiesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The base instance URL for the endpoint that this connection type will connect
   * to.</p>
   */
  inline const ConnectorProperty& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = ConnectorProperty>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = ConnectorProperty>
  ConnectionPropertiesConfiguration& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value pairs of additional request parameters that may be needed during
   * connection creation, such as API versions or service-specific configuration
   * options.</p>
   */
  inline const Aws::Vector<ConnectorProperty>& GetAdditionalRequestParameters() const { return m_additionalRequestParameters; }
  inline bool AdditionalRequestParametersHasBeenSet() const { return m_additionalRequestParametersHasBeenSet; }
  template <typename AdditionalRequestParametersT = Aws::Vector<ConnectorProperty>>
  void SetAdditionalRequestParameters(AdditionalRequestParametersT&& value) {
    m_additionalRequestParametersHasBeenSet = true;
    m_additionalRequestParameters = std::forward<AdditionalRequestParametersT>(value);
  }
  template <typename AdditionalRequestParametersT = Aws::Vector<ConnectorProperty>>
  ConnectionPropertiesConfiguration& WithAdditionalRequestParameters(AdditionalRequestParametersT&& value) {
    SetAdditionalRequestParameters(std::forward<AdditionalRequestParametersT>(value));
    return *this;
  }
  template <typename AdditionalRequestParametersT = ConnectorProperty>
  ConnectionPropertiesConfiguration& AddAdditionalRequestParameters(AdditionalRequestParametersT&& value) {
    m_additionalRequestParametersHasBeenSet = true;
    m_additionalRequestParameters.emplace_back(std::forward<AdditionalRequestParametersT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorProperty m_url;

  Aws::Vector<ConnectorProperty> m_additionalRequestParameters;
  bool m_urlHasBeenSet = false;
  bool m_additionalRequestParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
