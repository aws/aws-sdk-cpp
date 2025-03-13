/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/SourceConnectorType.h>
#include <aws/customer-profiles/model/IncrementalPullConfig.h>
#include <aws/customer-profiles/model/SourceConnectorProperties.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Contains information about the configuration of the source connector used in
   * the flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SourceFlowConfig">AWS
   * API Reference</a></p>
   */
  class SourceFlowConfig
  {
  public:
    AWS_CUSTOMERPROFILES_API SourceFlowConfig() = default;
    AWS_CUSTOMERPROFILES_API SourceFlowConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API SourceFlowConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the AppFlow connector profile. This name must be unique for each
     * connector profile in the AWS account.</p>
     */
    inline const Aws::String& GetConnectorProfileName() const { return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    template<typename ConnectorProfileNameT = Aws::String>
    void SetConnectorProfileName(ConnectorProfileNameT&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::forward<ConnectorProfileNameT>(value); }
    template<typename ConnectorProfileNameT = Aws::String>
    SourceFlowConfig& WithConnectorProfileName(ConnectorProfileNameT&& value) { SetConnectorProfileName(std::forward<ConnectorProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connector, such as Salesforce, Marketo, and so on.</p>
     */
    inline SourceConnectorType GetConnectorType() const { return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(SourceConnectorType value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline SourceFlowConfig& WithConnectorType(SourceConnectorType value) { SetConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the configuration for a scheduled incremental data pull. If a valid
     * configuration is provided, the fields specified in the configuration are used
     * when querying for the incremental data pull.</p>
     */
    inline const IncrementalPullConfig& GetIncrementalPullConfig() const { return m_incrementalPullConfig; }
    inline bool IncrementalPullConfigHasBeenSet() const { return m_incrementalPullConfigHasBeenSet; }
    template<typename IncrementalPullConfigT = IncrementalPullConfig>
    void SetIncrementalPullConfig(IncrementalPullConfigT&& value) { m_incrementalPullConfigHasBeenSet = true; m_incrementalPullConfig = std::forward<IncrementalPullConfigT>(value); }
    template<typename IncrementalPullConfigT = IncrementalPullConfig>
    SourceFlowConfig& WithIncrementalPullConfig(IncrementalPullConfigT&& value) { SetIncrementalPullConfig(std::forward<IncrementalPullConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the information that is required to query a particular source
     * connector.</p>
     */
    inline const SourceConnectorProperties& GetSourceConnectorProperties() const { return m_sourceConnectorProperties; }
    inline bool SourceConnectorPropertiesHasBeenSet() const { return m_sourceConnectorPropertiesHasBeenSet; }
    template<typename SourceConnectorPropertiesT = SourceConnectorProperties>
    void SetSourceConnectorProperties(SourceConnectorPropertiesT&& value) { m_sourceConnectorPropertiesHasBeenSet = true; m_sourceConnectorProperties = std::forward<SourceConnectorPropertiesT>(value); }
    template<typename SourceConnectorPropertiesT = SourceConnectorProperties>
    SourceFlowConfig& WithSourceConnectorProperties(SourceConnectorPropertiesT&& value) { SetSourceConnectorProperties(std::forward<SourceConnectorPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    SourceConnectorType m_connectorType{SourceConnectorType::NOT_SET};
    bool m_connectorTypeHasBeenSet = false;

    IncrementalPullConfig m_incrementalPullConfig;
    bool m_incrementalPullConfigHasBeenSet = false;

    SourceConnectorProperties m_sourceConnectorProperties;
    bool m_sourceConnectorPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
