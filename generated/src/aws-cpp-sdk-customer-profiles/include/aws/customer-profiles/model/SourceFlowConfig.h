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
    AWS_CUSTOMERPROFILES_API SourceFlowConfig();
    AWS_CUSTOMERPROFILES_API SourceFlowConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API SourceFlowConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the AppFlow connector profile. This name must be unique for each
     * connector profile in the AWS account.</p>
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
     * <p>The type of connector, such as Salesforce, Marketo, and so on.</p>
     */
    inline const SourceConnectorType& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const SourceConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(SourceConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline SourceFlowConfig& WithConnectorType(const SourceConnectorType& value) { SetConnectorType(value); return *this;}
    inline SourceFlowConfig& WithConnectorType(SourceConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the configuration for a scheduled incremental data pull. If a valid
     * configuration is provided, the fields specified in the configuration are used
     * when querying for the incremental data pull.</p>
     */
    inline const IncrementalPullConfig& GetIncrementalPullConfig() const{ return m_incrementalPullConfig; }
    inline bool IncrementalPullConfigHasBeenSet() const { return m_incrementalPullConfigHasBeenSet; }
    inline void SetIncrementalPullConfig(const IncrementalPullConfig& value) { m_incrementalPullConfigHasBeenSet = true; m_incrementalPullConfig = value; }
    inline void SetIncrementalPullConfig(IncrementalPullConfig&& value) { m_incrementalPullConfigHasBeenSet = true; m_incrementalPullConfig = std::move(value); }
    inline SourceFlowConfig& WithIncrementalPullConfig(const IncrementalPullConfig& value) { SetIncrementalPullConfig(value); return *this;}
    inline SourceFlowConfig& WithIncrementalPullConfig(IncrementalPullConfig&& value) { SetIncrementalPullConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the information that is required to query a particular source
     * connector.</p>
     */
    inline const SourceConnectorProperties& GetSourceConnectorProperties() const{ return m_sourceConnectorProperties; }
    inline bool SourceConnectorPropertiesHasBeenSet() const { return m_sourceConnectorPropertiesHasBeenSet; }
    inline void SetSourceConnectorProperties(const SourceConnectorProperties& value) { m_sourceConnectorPropertiesHasBeenSet = true; m_sourceConnectorProperties = value; }
    inline void SetSourceConnectorProperties(SourceConnectorProperties&& value) { m_sourceConnectorPropertiesHasBeenSet = true; m_sourceConnectorProperties = std::move(value); }
    inline SourceFlowConfig& WithSourceConnectorProperties(const SourceConnectorProperties& value) { SetSourceConnectorProperties(value); return *this;}
    inline SourceFlowConfig& WithSourceConnectorProperties(SourceConnectorProperties&& value) { SetSourceConnectorProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    SourceConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    IncrementalPullConfig m_incrementalPullConfig;
    bool m_incrementalPullConfigHasBeenSet = false;

    SourceConnectorProperties m_sourceConnectorProperties;
    bool m_sourceConnectorPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
