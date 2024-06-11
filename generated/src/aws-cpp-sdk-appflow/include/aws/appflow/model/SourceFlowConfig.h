/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/SourceConnectorProperties.h>
#include <aws/appflow/model/IncrementalPullConfig.h>
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
   * <p> Contains information about the configuration of the source connector used in
   * the flow. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SourceFlowConfig">AWS
   * API Reference</a></p>
   */
  class SourceFlowConfig
  {
  public:
    AWS_APPFLOW_API SourceFlowConfig();
    AWS_APPFLOW_API SourceFlowConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SourceFlowConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline SourceFlowConfig& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}
    inline SourceFlowConfig& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API version of the connector when it's used as a source in the flow.</p>
     */
    inline const Aws::String& GetApiVersion() const{ return m_apiVersion; }
    inline bool ApiVersionHasBeenSet() const { return m_apiVersionHasBeenSet; }
    inline void SetApiVersion(const Aws::String& value) { m_apiVersionHasBeenSet = true; m_apiVersion = value; }
    inline void SetApiVersion(Aws::String&& value) { m_apiVersionHasBeenSet = true; m_apiVersion = std::move(value); }
    inline void SetApiVersion(const char* value) { m_apiVersionHasBeenSet = true; m_apiVersion.assign(value); }
    inline SourceFlowConfig& WithApiVersion(const Aws::String& value) { SetApiVersion(value); return *this;}
    inline SourceFlowConfig& WithApiVersion(Aws::String&& value) { SetApiVersion(std::move(value)); return *this;}
    inline SourceFlowConfig& WithApiVersion(const char* value) { SetApiVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the connector profile. This name must be unique for each
     * connector profile in the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }
    inline SourceFlowConfig& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}
    inline SourceFlowConfig& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}
    inline SourceFlowConfig& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the information that is required to query a particular source
     * connector. </p>
     */
    inline const SourceConnectorProperties& GetSourceConnectorProperties() const{ return m_sourceConnectorProperties; }
    inline bool SourceConnectorPropertiesHasBeenSet() const { return m_sourceConnectorPropertiesHasBeenSet; }
    inline void SetSourceConnectorProperties(const SourceConnectorProperties& value) { m_sourceConnectorPropertiesHasBeenSet = true; m_sourceConnectorProperties = value; }
    inline void SetSourceConnectorProperties(SourceConnectorProperties&& value) { m_sourceConnectorPropertiesHasBeenSet = true; m_sourceConnectorProperties = std::move(value); }
    inline SourceFlowConfig& WithSourceConnectorProperties(const SourceConnectorProperties& value) { SetSourceConnectorProperties(value); return *this;}
    inline SourceFlowConfig& WithSourceConnectorProperties(SourceConnectorProperties&& value) { SetSourceConnectorProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines the configuration for a scheduled incremental data pull. If a valid
     * configuration is provided, the fields specified in the configuration are used
     * when querying for the incremental data pull. </p>
     */
    inline const IncrementalPullConfig& GetIncrementalPullConfig() const{ return m_incrementalPullConfig; }
    inline bool IncrementalPullConfigHasBeenSet() const { return m_incrementalPullConfigHasBeenSet; }
    inline void SetIncrementalPullConfig(const IncrementalPullConfig& value) { m_incrementalPullConfigHasBeenSet = true; m_incrementalPullConfig = value; }
    inline void SetIncrementalPullConfig(IncrementalPullConfig&& value) { m_incrementalPullConfigHasBeenSet = true; m_incrementalPullConfig = std::move(value); }
    inline SourceFlowConfig& WithIncrementalPullConfig(const IncrementalPullConfig& value) { SetIncrementalPullConfig(value); return *this;}
    inline SourceFlowConfig& WithIncrementalPullConfig(IncrementalPullConfig&& value) { SetIncrementalPullConfig(std::move(value)); return *this;}
    ///@}
  private:

    ConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_apiVersion;
    bool m_apiVersionHasBeenSet = false;

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    SourceConnectorProperties m_sourceConnectorProperties;
    bool m_sourceConnectorPropertiesHasBeenSet = false;

    IncrementalPullConfig m_incrementalPullConfig;
    bool m_incrementalPullConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
