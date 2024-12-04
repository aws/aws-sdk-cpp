/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RedshiftProvisionedAuthConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_BEDROCKAGENT_API RedshiftProvisionedConfiguration();
    AWS_BEDROCKAGENT_API RedshiftProvisionedConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftProvisionedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies configurations for authentication to Amazon Redshift.</p>
     */
    inline const RedshiftProvisionedAuthConfiguration& GetAuthConfiguration() const{ return m_authConfiguration; }
    inline bool AuthConfigurationHasBeenSet() const { return m_authConfigurationHasBeenSet; }
    inline void SetAuthConfiguration(const RedshiftProvisionedAuthConfiguration& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = value; }
    inline void SetAuthConfiguration(RedshiftProvisionedAuthConfiguration&& value) { m_authConfigurationHasBeenSet = true; m_authConfiguration = std::move(value); }
    inline RedshiftProvisionedConfiguration& WithAuthConfiguration(const RedshiftProvisionedAuthConfiguration& value) { SetAuthConfiguration(value); return *this;}
    inline RedshiftProvisionedConfiguration& WithAuthConfiguration(RedshiftProvisionedAuthConfiguration&& value) { SetAuthConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Redshift cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline RedshiftProvisionedConfiguration& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline RedshiftProvisionedConfiguration& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline RedshiftProvisionedConfiguration& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}
  private:

    RedshiftProvisionedAuthConfiguration m_authConfiguration;
    bool m_authConfigurationHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
