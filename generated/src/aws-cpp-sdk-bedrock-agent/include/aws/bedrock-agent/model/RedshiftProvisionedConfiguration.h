/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/RedshiftProvisionedAuthConfiguration.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations for a provisioned Amazon Redshift query
   * engine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedshiftProvisionedConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftProvisionedConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedshiftProvisionedConfiguration() = default;
    AWS_BEDROCKAGENT_API RedshiftProvisionedConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftProvisionedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Redshift cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    RedshiftProvisionedConfiguration& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for authentication to Amazon Redshift.</p>
     */
    inline const RedshiftProvisionedAuthConfiguration& GetAuthConfiguration() const { return m_authConfiguration; }
    inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }
    template<typename AuthConfigurationT = RedshiftProvisionedAuthConfiguration>
    void SetAuthConfiguration(AuthConfigurationT&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::forward<AuthConfigurationT>(value); }
    template<typename AuthConfigurationT = RedshiftProvisionedAuthConfiguration>
    RedshiftProvisionedConfiguration& WithAuthConfiguration(AuthConfigurationT&& value) { SetAuthConfiguration(std::forward<AuthConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    RedshiftProvisionedAuthConfiguration m_authConfiguration;
    bool m_authConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
