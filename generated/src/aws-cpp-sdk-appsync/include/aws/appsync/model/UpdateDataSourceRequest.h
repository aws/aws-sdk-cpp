﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DataSourceType.h>
#include <aws/appsync/model/DynamodbDataSourceConfig.h>
#include <aws/appsync/model/LambdaDataSourceConfig.h>
#include <aws/appsync/model/ElasticsearchDataSourceConfig.h>
#include <aws/appsync/model/OpenSearchServiceDataSourceConfig.h>
#include <aws/appsync/model/HttpDataSourceConfig.h>
#include <aws/appsync/model/RelationalDatabaseDataSourceConfig.h>
#include <aws/appsync/model/EventBridgeDataSourceConfig.h>
#include <aws/appsync/model/DataSourceLevelMetricsConfig.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class UpdateDataSourceRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API UpdateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSource"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline UpdateDataSourceRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline UpdateDataSourceRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description for the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new data source type.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UpdateDataSourceRequest& WithType(const DataSourceType& value) { SetType(value); return *this;}
    inline UpdateDataSourceRequest& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new service role Amazon Resource Name (ARN) for the data source.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }
    inline UpdateDataSourceRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}
    inline UpdateDataSourceRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}
    inline UpdateDataSourceRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Amazon DynamoDB configuration.</p>
     */
    inline const DynamodbDataSourceConfig& GetDynamodbConfig() const{ return m_dynamodbConfig; }
    inline bool DynamodbConfigHasBeenSet() const { return m_dynamodbConfigHasBeenSet; }
    inline void SetDynamodbConfig(const DynamodbDataSourceConfig& value) { m_dynamodbConfigHasBeenSet = true; m_dynamodbConfig = value; }
    inline void SetDynamodbConfig(DynamodbDataSourceConfig&& value) { m_dynamodbConfigHasBeenSet = true; m_dynamodbConfig = std::move(value); }
    inline UpdateDataSourceRequest& WithDynamodbConfig(const DynamodbDataSourceConfig& value) { SetDynamodbConfig(value); return *this;}
    inline UpdateDataSourceRequest& WithDynamodbConfig(DynamodbDataSourceConfig&& value) { SetDynamodbConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Lambda configuration.</p>
     */
    inline const LambdaDataSourceConfig& GetLambdaConfig() const{ return m_lambdaConfig; }
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }
    inline void SetLambdaConfig(const LambdaDataSourceConfig& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }
    inline void SetLambdaConfig(LambdaDataSourceConfig&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }
    inline UpdateDataSourceRequest& WithLambdaConfig(const LambdaDataSourceConfig& value) { SetLambdaConfig(value); return *this;}
    inline UpdateDataSourceRequest& WithLambdaConfig(LambdaDataSourceConfig&& value) { SetLambdaConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new OpenSearch configuration.</p> <p>As of September 2021, Amazon
     * Elasticsearch service is Amazon OpenSearch Service. This configuration is
     * deprecated. Instead, use <a>UpdateDataSourceRequest$openSearchServiceConfig</a>
     * to update an OpenSearch data source.</p>
     */
    inline const ElasticsearchDataSourceConfig& GetElasticsearchConfig() const{ return m_elasticsearchConfig; }
    inline bool ElasticsearchConfigHasBeenSet() const { return m_elasticsearchConfigHasBeenSet; }
    inline void SetElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = value; }
    inline void SetElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = std::move(value); }
    inline UpdateDataSourceRequest& WithElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { SetElasticsearchConfig(value); return *this;}
    inline UpdateDataSourceRequest& WithElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { SetElasticsearchConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new OpenSearch configuration.</p>
     */
    inline const OpenSearchServiceDataSourceConfig& GetOpenSearchServiceConfig() const{ return m_openSearchServiceConfig; }
    inline bool OpenSearchServiceConfigHasBeenSet() const { return m_openSearchServiceConfigHasBeenSet; }
    inline void SetOpenSearchServiceConfig(const OpenSearchServiceDataSourceConfig& value) { m_openSearchServiceConfigHasBeenSet = true; m_openSearchServiceConfig = value; }
    inline void SetOpenSearchServiceConfig(OpenSearchServiceDataSourceConfig&& value) { m_openSearchServiceConfigHasBeenSet = true; m_openSearchServiceConfig = std::move(value); }
    inline UpdateDataSourceRequest& WithOpenSearchServiceConfig(const OpenSearchServiceDataSourceConfig& value) { SetOpenSearchServiceConfig(value); return *this;}
    inline UpdateDataSourceRequest& WithOpenSearchServiceConfig(OpenSearchServiceDataSourceConfig&& value) { SetOpenSearchServiceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new HTTP endpoint configuration.</p>
     */
    inline const HttpDataSourceConfig& GetHttpConfig() const{ return m_httpConfig; }
    inline bool HttpConfigHasBeenSet() const { return m_httpConfigHasBeenSet; }
    inline void SetHttpConfig(const HttpDataSourceConfig& value) { m_httpConfigHasBeenSet = true; m_httpConfig = value; }
    inline void SetHttpConfig(HttpDataSourceConfig&& value) { m_httpConfigHasBeenSet = true; m_httpConfig = std::move(value); }
    inline UpdateDataSourceRequest& WithHttpConfig(const HttpDataSourceConfig& value) { SetHttpConfig(value); return *this;}
    inline UpdateDataSourceRequest& WithHttpConfig(HttpDataSourceConfig&& value) { SetHttpConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new relational database configuration.</p>
     */
    inline const RelationalDatabaseDataSourceConfig& GetRelationalDatabaseConfig() const{ return m_relationalDatabaseConfig; }
    inline bool RelationalDatabaseConfigHasBeenSet() const { return m_relationalDatabaseConfigHasBeenSet; }
    inline void SetRelationalDatabaseConfig(const RelationalDatabaseDataSourceConfig& value) { m_relationalDatabaseConfigHasBeenSet = true; m_relationalDatabaseConfig = value; }
    inline void SetRelationalDatabaseConfig(RelationalDatabaseDataSourceConfig&& value) { m_relationalDatabaseConfigHasBeenSet = true; m_relationalDatabaseConfig = std::move(value); }
    inline UpdateDataSourceRequest& WithRelationalDatabaseConfig(const RelationalDatabaseDataSourceConfig& value) { SetRelationalDatabaseConfig(value); return *this;}
    inline UpdateDataSourceRequest& WithRelationalDatabaseConfig(RelationalDatabaseDataSourceConfig&& value) { SetRelationalDatabaseConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Amazon EventBridge settings.</p>
     */
    inline const EventBridgeDataSourceConfig& GetEventBridgeConfig() const{ return m_eventBridgeConfig; }
    inline bool EventBridgeConfigHasBeenSet() const { return m_eventBridgeConfigHasBeenSet; }
    inline void SetEventBridgeConfig(const EventBridgeDataSourceConfig& value) { m_eventBridgeConfigHasBeenSet = true; m_eventBridgeConfig = value; }
    inline void SetEventBridgeConfig(EventBridgeDataSourceConfig&& value) { m_eventBridgeConfigHasBeenSet = true; m_eventBridgeConfig = std::move(value); }
    inline UpdateDataSourceRequest& WithEventBridgeConfig(const EventBridgeDataSourceConfig& value) { SetEventBridgeConfig(value); return *this;}
    inline UpdateDataSourceRequest& WithEventBridgeConfig(EventBridgeDataSourceConfig&& value) { SetEventBridgeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables enhanced data source metrics for specified data sources.
     * Note that <code>metricsConfig</code> won't be used unless the
     * <code>dataSourceLevelMetricsBehavior</code> value is set to
     * <code>PER_DATA_SOURCE_METRICS</code>. If the
     * <code>dataSourceLevelMetricsBehavior</code> is set to
     * <code>FULL_REQUEST_DATA_SOURCE_METRICS</code> instead,
     * <code>metricsConfig</code> will be ignored. However, you can still set its
     * value.</p> <p> <code>metricsConfig</code> can be <code>ENABLED</code> or
     * <code>DISABLED</code>.</p>
     */
    inline const DataSourceLevelMetricsConfig& GetMetricsConfig() const{ return m_metricsConfig; }
    inline bool MetricsConfigHasBeenSet() const { return m_metricsConfigHasBeenSet; }
    inline void SetMetricsConfig(const DataSourceLevelMetricsConfig& value) { m_metricsConfigHasBeenSet = true; m_metricsConfig = value; }
    inline void SetMetricsConfig(DataSourceLevelMetricsConfig&& value) { m_metricsConfigHasBeenSet = true; m_metricsConfig = std::move(value); }
    inline UpdateDataSourceRequest& WithMetricsConfig(const DataSourceLevelMetricsConfig& value) { SetMetricsConfig(value); return *this;}
    inline UpdateDataSourceRequest& WithMetricsConfig(DataSourceLevelMetricsConfig&& value) { SetMetricsConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataSourceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    DynamodbDataSourceConfig m_dynamodbConfig;
    bool m_dynamodbConfigHasBeenSet = false;

    LambdaDataSourceConfig m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet = false;

    ElasticsearchDataSourceConfig m_elasticsearchConfig;
    bool m_elasticsearchConfigHasBeenSet = false;

    OpenSearchServiceDataSourceConfig m_openSearchServiceConfig;
    bool m_openSearchServiceConfigHasBeenSet = false;

    HttpDataSourceConfig m_httpConfig;
    bool m_httpConfigHasBeenSet = false;

    RelationalDatabaseDataSourceConfig m_relationalDatabaseConfig;
    bool m_relationalDatabaseConfigHasBeenSet = false;

    EventBridgeDataSourceConfig m_eventBridgeConfig;
    bool m_eventBridgeConfigHasBeenSet = false;

    DataSourceLevelMetricsConfig m_metricsConfig;
    bool m_metricsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
