/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RedshiftQueryEngineAwsDataCatalogStorageConfiguration.h>
#include <aws/bedrock-agent/model/RedshiftQueryEngineRedshiftStorageConfiguration.h>
#include <aws/bedrock-agent/model/RedshiftQueryEngineStorageType.h>
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
   * <p>Contains configurations for Amazon Redshift data storage. Specify the data
   * storage service to use in the <code>type</code> field and include the
   * corresponding field. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/knowledge-base-build-structured.html">Build
   * a knowledge base by connecting to a structured data source</a> in the Amazon
   * Bedrock User Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RedshiftQueryEngineStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class RedshiftQueryEngineStorageConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API RedshiftQueryEngineStorageConfiguration();
    AWS_BEDROCKAGENT_API RedshiftQueryEngineStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API RedshiftQueryEngineStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies configurations for storage in Glue Data Catalog.</p>
     */
    inline const RedshiftQueryEngineAwsDataCatalogStorageConfiguration& GetAwsDataCatalogConfiguration() const{ return m_awsDataCatalogConfiguration; }
    inline bool AwsDataCatalogConfigurationHasBeenSet() const { return m_awsDataCatalogConfigurationHasBeenSet; }
    inline void SetAwsDataCatalogConfiguration(const RedshiftQueryEngineAwsDataCatalogStorageConfiguration& value) { m_awsDataCatalogConfigurationHasBeenSet = true; m_awsDataCatalogConfiguration = value; }
    inline void SetAwsDataCatalogConfiguration(RedshiftQueryEngineAwsDataCatalogStorageConfiguration&& value) { m_awsDataCatalogConfigurationHasBeenSet = true; m_awsDataCatalogConfiguration = std::move(value); }
    inline RedshiftQueryEngineStorageConfiguration& WithAwsDataCatalogConfiguration(const RedshiftQueryEngineAwsDataCatalogStorageConfiguration& value) { SetAwsDataCatalogConfiguration(value); return *this;}
    inline RedshiftQueryEngineStorageConfiguration& WithAwsDataCatalogConfiguration(RedshiftQueryEngineAwsDataCatalogStorageConfiguration&& value) { SetAwsDataCatalogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for storage in Amazon Redshift.</p>
     */
    inline const RedshiftQueryEngineRedshiftStorageConfiguration& GetRedshiftConfiguration() const{ return m_redshiftConfiguration; }
    inline bool RedshiftConfigurationHasBeenSet() const { return m_redshiftConfigurationHasBeenSet; }
    inline void SetRedshiftConfiguration(const RedshiftQueryEngineRedshiftStorageConfiguration& value) { m_redshiftConfigurationHasBeenSet = true; m_redshiftConfiguration = value; }
    inline void SetRedshiftConfiguration(RedshiftQueryEngineRedshiftStorageConfiguration&& value) { m_redshiftConfigurationHasBeenSet = true; m_redshiftConfiguration = std::move(value); }
    inline RedshiftQueryEngineStorageConfiguration& WithRedshiftConfiguration(const RedshiftQueryEngineRedshiftStorageConfiguration& value) { SetRedshiftConfiguration(value); return *this;}
    inline RedshiftQueryEngineStorageConfiguration& WithRedshiftConfiguration(RedshiftQueryEngineRedshiftStorageConfiguration&& value) { SetRedshiftConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data storage service to use.</p>
     */
    inline const RedshiftQueryEngineStorageType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RedshiftQueryEngineStorageType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RedshiftQueryEngineStorageType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RedshiftQueryEngineStorageConfiguration& WithType(const RedshiftQueryEngineStorageType& value) { SetType(value); return *this;}
    inline RedshiftQueryEngineStorageConfiguration& WithType(RedshiftQueryEngineStorageType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    RedshiftQueryEngineAwsDataCatalogStorageConfiguration m_awsDataCatalogConfiguration;
    bool m_awsDataCatalogConfigurationHasBeenSet = false;

    RedshiftQueryEngineRedshiftStorageConfiguration m_redshiftConfiguration;
    bool m_redshiftConfigurationHasBeenSet = false;

    RedshiftQueryEngineStorageType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
