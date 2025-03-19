/**
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
    AWS_APPSYNC_API UpdateDataSourceRequest() = default;

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
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    UpdateDataSourceRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDataSourceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description for the data source.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDataSourceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new data source type.</p>
     */
    inline DataSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdateDataSourceRequest& WithType(DataSourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new service role Amazon Resource Name (ARN) for the data source.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const { return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    template<typename ServiceRoleArnT = Aws::String>
    void SetServiceRoleArn(ServiceRoleArnT&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::forward<ServiceRoleArnT>(value); }
    template<typename ServiceRoleArnT = Aws::String>
    UpdateDataSourceRequest& WithServiceRoleArn(ServiceRoleArnT&& value) { SetServiceRoleArn(std::forward<ServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Amazon DynamoDB configuration.</p>
     */
    inline const DynamodbDataSourceConfig& GetDynamodbConfig() const { return m_dynamodbConfig; }
    inline bool DynamodbConfigHasBeenSet() const { return m_dynamodbConfigHasBeenSet; }
    template<typename DynamodbConfigT = DynamodbDataSourceConfig>
    void SetDynamodbConfig(DynamodbConfigT&& value) { m_dynamodbConfigHasBeenSet = true; m_dynamodbConfig = std::forward<DynamodbConfigT>(value); }
    template<typename DynamodbConfigT = DynamodbDataSourceConfig>
    UpdateDataSourceRequest& WithDynamodbConfig(DynamodbConfigT&& value) { SetDynamodbConfig(std::forward<DynamodbConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Lambda configuration.</p>
     */
    inline const LambdaDataSourceConfig& GetLambdaConfig() const { return m_lambdaConfig; }
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }
    template<typename LambdaConfigT = LambdaDataSourceConfig>
    void SetLambdaConfig(LambdaConfigT&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::forward<LambdaConfigT>(value); }
    template<typename LambdaConfigT = LambdaDataSourceConfig>
    UpdateDataSourceRequest& WithLambdaConfig(LambdaConfigT&& value) { SetLambdaConfig(std::forward<LambdaConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new OpenSearch configuration.</p> <p>As of September 2021, Amazon
     * Elasticsearch service is Amazon OpenSearch Service. This configuration is
     * deprecated. Instead, use <a>UpdateDataSourceRequest$openSearchServiceConfig</a>
     * to update an OpenSearch data source.</p>
     */
    inline const ElasticsearchDataSourceConfig& GetElasticsearchConfig() const { return m_elasticsearchConfig; }
    inline bool ElasticsearchConfigHasBeenSet() const { return m_elasticsearchConfigHasBeenSet; }
    template<typename ElasticsearchConfigT = ElasticsearchDataSourceConfig>
    void SetElasticsearchConfig(ElasticsearchConfigT&& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = std::forward<ElasticsearchConfigT>(value); }
    template<typename ElasticsearchConfigT = ElasticsearchDataSourceConfig>
    UpdateDataSourceRequest& WithElasticsearchConfig(ElasticsearchConfigT&& value) { SetElasticsearchConfig(std::forward<ElasticsearchConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new OpenSearch configuration.</p>
     */
    inline const OpenSearchServiceDataSourceConfig& GetOpenSearchServiceConfig() const { return m_openSearchServiceConfig; }
    inline bool OpenSearchServiceConfigHasBeenSet() const { return m_openSearchServiceConfigHasBeenSet; }
    template<typename OpenSearchServiceConfigT = OpenSearchServiceDataSourceConfig>
    void SetOpenSearchServiceConfig(OpenSearchServiceConfigT&& value) { m_openSearchServiceConfigHasBeenSet = true; m_openSearchServiceConfig = std::forward<OpenSearchServiceConfigT>(value); }
    template<typename OpenSearchServiceConfigT = OpenSearchServiceDataSourceConfig>
    UpdateDataSourceRequest& WithOpenSearchServiceConfig(OpenSearchServiceConfigT&& value) { SetOpenSearchServiceConfig(std::forward<OpenSearchServiceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new HTTP endpoint configuration.</p>
     */
    inline const HttpDataSourceConfig& GetHttpConfig() const { return m_httpConfig; }
    inline bool HttpConfigHasBeenSet() const { return m_httpConfigHasBeenSet; }
    template<typename HttpConfigT = HttpDataSourceConfig>
    void SetHttpConfig(HttpConfigT&& value) { m_httpConfigHasBeenSet = true; m_httpConfig = std::forward<HttpConfigT>(value); }
    template<typename HttpConfigT = HttpDataSourceConfig>
    UpdateDataSourceRequest& WithHttpConfig(HttpConfigT&& value) { SetHttpConfig(std::forward<HttpConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new relational database configuration.</p>
     */
    inline const RelationalDatabaseDataSourceConfig& GetRelationalDatabaseConfig() const { return m_relationalDatabaseConfig; }
    inline bool RelationalDatabaseConfigHasBeenSet() const { return m_relationalDatabaseConfigHasBeenSet; }
    template<typename RelationalDatabaseConfigT = RelationalDatabaseDataSourceConfig>
    void SetRelationalDatabaseConfig(RelationalDatabaseConfigT&& value) { m_relationalDatabaseConfigHasBeenSet = true; m_relationalDatabaseConfig = std::forward<RelationalDatabaseConfigT>(value); }
    template<typename RelationalDatabaseConfigT = RelationalDatabaseDataSourceConfig>
    UpdateDataSourceRequest& WithRelationalDatabaseConfig(RelationalDatabaseConfigT&& value) { SetRelationalDatabaseConfig(std::forward<RelationalDatabaseConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Amazon EventBridge settings.</p>
     */
    inline const EventBridgeDataSourceConfig& GetEventBridgeConfig() const { return m_eventBridgeConfig; }
    inline bool EventBridgeConfigHasBeenSet() const { return m_eventBridgeConfigHasBeenSet; }
    template<typename EventBridgeConfigT = EventBridgeDataSourceConfig>
    void SetEventBridgeConfig(EventBridgeConfigT&& value) { m_eventBridgeConfigHasBeenSet = true; m_eventBridgeConfig = std::forward<EventBridgeConfigT>(value); }
    template<typename EventBridgeConfigT = EventBridgeDataSourceConfig>
    UpdateDataSourceRequest& WithEventBridgeConfig(EventBridgeConfigT&& value) { SetEventBridgeConfig(std::forward<EventBridgeConfigT>(value)); return *this;}
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
    inline DataSourceLevelMetricsConfig GetMetricsConfig() const { return m_metricsConfig; }
    inline bool MetricsConfigHasBeenSet() const { return m_metricsConfigHasBeenSet; }
    inline void SetMetricsConfig(DataSourceLevelMetricsConfig value) { m_metricsConfigHasBeenSet = true; m_metricsConfig = value; }
    inline UpdateDataSourceRequest& WithMetricsConfig(DataSourceLevelMetricsConfig value) { SetMetricsConfig(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataSourceType m_type{DataSourceType::NOT_SET};
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

    DataSourceLevelMetricsConfig m_metricsConfig{DataSourceLevelMetricsConfig::NOT_SET};
    bool m_metricsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
