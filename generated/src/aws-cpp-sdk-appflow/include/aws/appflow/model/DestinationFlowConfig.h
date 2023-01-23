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
    AWS_APPFLOW_API DestinationFlowConfig();
    AWS_APPFLOW_API DestinationFlowConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API DestinationFlowConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline DestinationFlowConfig& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline DestinationFlowConfig& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}


    /**
     * <p>The API version that the destination connector uses.</p>
     */
    inline const Aws::String& GetApiVersion() const{ return m_apiVersion; }

    /**
     * <p>The API version that the destination connector uses.</p>
     */
    inline bool ApiVersionHasBeenSet() const { return m_apiVersionHasBeenSet; }

    /**
     * <p>The API version that the destination connector uses.</p>
     */
    inline void SetApiVersion(const Aws::String& value) { m_apiVersionHasBeenSet = true; m_apiVersion = value; }

    /**
     * <p>The API version that the destination connector uses.</p>
     */
    inline void SetApiVersion(Aws::String&& value) { m_apiVersionHasBeenSet = true; m_apiVersion = std::move(value); }

    /**
     * <p>The API version that the destination connector uses.</p>
     */
    inline void SetApiVersion(const char* value) { m_apiVersionHasBeenSet = true; m_apiVersion.assign(value); }

    /**
     * <p>The API version that the destination connector uses.</p>
     */
    inline DestinationFlowConfig& WithApiVersion(const Aws::String& value) { SetApiVersion(value); return *this;}

    /**
     * <p>The API version that the destination connector uses.</p>
     */
    inline DestinationFlowConfig& WithApiVersion(Aws::String&& value) { SetApiVersion(std::move(value)); return *this;}

    /**
     * <p>The API version that the destination connector uses.</p>
     */
    inline DestinationFlowConfig& WithApiVersion(const char* value) { SetApiVersion(value); return *this;}


    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }

    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }

    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }

    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }

    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }

    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline DestinationFlowConfig& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}

    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline DestinationFlowConfig& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}

    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline DestinationFlowConfig& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}


    /**
     * <p> This stores the information that is required to query a particular
     * connector. </p>
     */
    inline const DestinationConnectorProperties& GetDestinationConnectorProperties() const{ return m_destinationConnectorProperties; }

    /**
     * <p> This stores the information that is required to query a particular
     * connector. </p>
     */
    inline bool DestinationConnectorPropertiesHasBeenSet() const { return m_destinationConnectorPropertiesHasBeenSet; }

    /**
     * <p> This stores the information that is required to query a particular
     * connector. </p>
     */
    inline void SetDestinationConnectorProperties(const DestinationConnectorProperties& value) { m_destinationConnectorPropertiesHasBeenSet = true; m_destinationConnectorProperties = value; }

    /**
     * <p> This stores the information that is required to query a particular
     * connector. </p>
     */
    inline void SetDestinationConnectorProperties(DestinationConnectorProperties&& value) { m_destinationConnectorPropertiesHasBeenSet = true; m_destinationConnectorProperties = std::move(value); }

    /**
     * <p> This stores the information that is required to query a particular
     * connector. </p>
     */
    inline DestinationFlowConfig& WithDestinationConnectorProperties(const DestinationConnectorProperties& value) { SetDestinationConnectorProperties(value); return *this;}

    /**
     * <p> This stores the information that is required to query a particular
     * connector. </p>
     */
    inline DestinationFlowConfig& WithDestinationConnectorProperties(DestinationConnectorProperties&& value) { SetDestinationConnectorProperties(std::move(value)); return *this;}

  private:

    ConnectorType m_connectorType;
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
