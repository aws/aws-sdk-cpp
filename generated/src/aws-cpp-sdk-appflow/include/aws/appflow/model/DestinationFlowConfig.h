/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/DestinationConnectorProperties.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> Contains information about the configuration of destination connectors
   * present in the flow. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/DestinationFlowConfig">AWS
   * API Reference</a></p>
   */
  class DestinationFlowConfig
  {
  public:
    AWS_APPFLOW_API DestinationFlowConfig() = default;
    AWS_APPFLOW_API DestinationFlowConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API DestinationFlowConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline ConnectorType GetConnectorType() const { return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(ConnectorType value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline DestinationFlowConfig& WithConnectorType(ConnectorType value) { SetConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API version that the destination connector uses.</p>
     */
    inline const Aws::String& GetApiVersion() const { return m_apiVersion; }
    inline bool ApiVersionHasBeenSet() const { return m_apiVersionHasBeenSet; }
    template<typename ApiVersionT = Aws::String>
    void SetApiVersion(ApiVersionT&& value) { m_apiVersionHasBeenSet = true; m_apiVersion = std::forward<ApiVersionT>(value); }
    template<typename ApiVersionT = Aws::String>
    DestinationFlowConfig& WithApiVersion(ApiVersionT&& value) { SetApiVersion(std::forward<ApiVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const { return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    template<typename ConnectorProfileNameT = Aws::String>
    void SetConnectorProfileName(ConnectorProfileNameT&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::forward<ConnectorProfileNameT>(value); }
    template<typename ConnectorProfileNameT = Aws::String>
    DestinationFlowConfig& WithConnectorProfileName(ConnectorProfileNameT&& value) { SetConnectorProfileName(std::forward<ConnectorProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This stores the information that is required to query a particular
     * connector. </p>
     */
    inline const DestinationConnectorProperties& GetDestinationConnectorProperties() const { return m_destinationConnectorProperties; }
    inline bool DestinationConnectorPropertiesHasBeenSet() const { return m_destinationConnectorPropertiesHasBeenSet; }
    template<typename DestinationConnectorPropertiesT = DestinationConnectorProperties>
    void SetDestinationConnectorProperties(DestinationConnectorPropertiesT&& value) { m_destinationConnectorPropertiesHasBeenSet = true; m_destinationConnectorProperties = std::forward<DestinationConnectorPropertiesT>(value); }
    template<typename DestinationConnectorPropertiesT = DestinationConnectorProperties>
    DestinationFlowConfig& WithDestinationConnectorProperties(DestinationConnectorPropertiesT&& value) { SetDestinationConnectorProperties(std::forward<DestinationConnectorPropertiesT>(value)); return *this;}
    ///@}
  private:

    ConnectorType m_connectorType{ConnectorType::NOT_SET};
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_apiVersion;
    bool m_apiVersionHasBeenSet = false;

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    DestinationConnectorProperties m_destinationConnectorProperties;
    bool m_destinationConnectorPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
