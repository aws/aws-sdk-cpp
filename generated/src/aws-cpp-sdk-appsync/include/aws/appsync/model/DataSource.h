/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_APPSYNC_API DataSource();
    AWS_APPSYNC_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data source Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = value; }
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::move(value); }
    inline void SetDataSourceArn(const char* value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn.assign(value); }
    inline DataSource& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}
    inline DataSource& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}
    inline DataSource& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DataSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DataSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DataSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DataSource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DataSource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DataSource& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AWS_LAMBDA</b>: The data
     * source is an Lambda function.</p> </li> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon OpenSearch Service
     * domain.</p> </li> <li> <p> <b>AMAZON_OPENSEARCH_SERVICE</b>: The data source is
     * an Amazon OpenSearch Service domain.</p> </li> <li> <p>
     * <b>AMAZON_EVENTBRIDGE</b>: The data source is an Amazon EventBridge
     * configuration.</p> </li> <li> <p> <b>AMAZON_BEDROCK_RUNTIME</b>: The data source
     * is the Amazon Bedrock runtime.</p> </li> <li> <p> <b>NONE</b>: There is no data
     * source. Use this type when you want to invoke a GraphQL operation without
     * connecting to a data source, such as when you're performing data transformation
     * with resolvers or invoking a subscription from a mutation.</p> </li> <li> <p>
     * <b>HTTP</b>: The data source is an HTTP endpoint.</p> </li> <li> <p>
     * <b>RELATIONAL_DATABASE</b>: The data source is a relational database.</p> </li>
     * </ul>
     */
    inline const DataSourceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DataSource& WithType(const DataSourceType& value) { SetType(value); return *this;}
    inline DataSource& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }
    inline DataSource& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}
    inline DataSource& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}
    inline DataSource& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>DynamoDB settings.</p>
     */
    inline const DynamodbDataSourceConfig& GetDynamodbConfig() const{ return m_dynamodbConfig; }
    inline bool DynamodbConfigHasBeenSet() const { return m_dynamodbConfigHasBeenSet; }
    inline void SetDynamodbConfig(const DynamodbDataSourceConfig& value) { m_dynamodbConfigHasBeenSet = true; m_dynamodbConfig = value; }
    inline void SetDynamodbConfig(DynamodbDataSourceConfig&& value) { m_dynamodbConfigHasBeenSet = true; m_dynamodbConfig = std::move(value); }
    inline DataSource& WithDynamodbConfig(const DynamodbDataSourceConfig& value) { SetDynamodbConfig(value); return *this;}
    inline DataSource& WithDynamodbConfig(DynamodbDataSourceConfig&& value) { SetDynamodbConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lambda settings.</p>
     */
    inline const LambdaDataSourceConfig& GetLambdaConfig() const{ return m_lambdaConfig; }
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }
    inline void SetLambdaConfig(const LambdaDataSourceConfig& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }
    inline void SetLambdaConfig(LambdaDataSourceConfig&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }
    inline DataSource& WithLambdaConfig(const LambdaDataSourceConfig& value) { SetLambdaConfig(value); return *this;}
    inline DataSource& WithLambdaConfig(LambdaDataSourceConfig&& value) { SetLambdaConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline const ElasticsearchDataSourceConfig& GetElasticsearchConfig() const{ return m_elasticsearchConfig; }
    inline bool ElasticsearchConfigHasBeenSet() const { return m_elasticsearchConfigHasBeenSet; }
    inline void SetElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = value; }
    inline void SetElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = std::move(value); }
    inline DataSource& WithElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { SetElasticsearchConfig(value); return *this;}
    inline DataSource& WithElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { SetElasticsearchConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline const OpenSearchServiceDataSourceConfig& GetOpenSearchServiceConfig() const{ return m_openSearchServiceConfig; }
    inline bool OpenSearchServiceConfigHasBeenSet() const { return m_openSearchServiceConfigHasBeenSet; }
    inline void SetOpenSearchServiceConfig(const OpenSearchServiceDataSourceConfig& value) { m_openSearchServiceConfigHasBeenSet = true; m_openSearchServiceConfig = value; }
    inline void SetOpenSearchServiceConfig(OpenSearchServiceDataSourceConfig&& value) { m_openSearchServiceConfigHasBeenSet = true; m_openSearchServiceConfig = std::move(value); }
    inline DataSource& WithOpenSearchServiceConfig(const OpenSearchServiceDataSourceConfig& value) { SetOpenSearchServiceConfig(value); return *this;}
    inline DataSource& WithOpenSearchServiceConfig(OpenSearchServiceDataSourceConfig&& value) { SetOpenSearchServiceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>HTTP endpoint settings.</p>
     */
    inline const HttpDataSourceConfig& GetHttpConfig() const{ return m_httpConfig; }
    inline bool HttpConfigHasBeenSet() const { return m_httpConfigHasBeenSet; }
    inline void SetHttpConfig(const HttpDataSourceConfig& value) { m_httpConfigHasBeenSet = true; m_httpConfig = value; }
    inline void SetHttpConfig(HttpDataSourceConfig&& value) { m_httpConfigHasBeenSet = true; m_httpConfig = std::move(value); }
    inline DataSource& WithHttpConfig(const HttpDataSourceConfig& value) { SetHttpConfig(value); return *this;}
    inline DataSource& WithHttpConfig(HttpDataSourceConfig&& value) { SetHttpConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Relational database settings.</p>
     */
    inline const RelationalDatabaseDataSourceConfig& GetRelationalDatabaseConfig() const{ return m_relationalDatabaseConfig; }
    inline bool RelationalDatabaseConfigHasBeenSet() const { return m_relationalDatabaseConfigHasBeenSet; }
    inline void SetRelationalDatabaseConfig(const RelationalDatabaseDataSourceConfig& value) { m_relationalDatabaseConfigHasBeenSet = true; m_relationalDatabaseConfig = value; }
    inline void SetRelationalDatabaseConfig(RelationalDatabaseDataSourceConfig&& value) { m_relationalDatabaseConfigHasBeenSet = true; m_relationalDatabaseConfig = std::move(value); }
    inline DataSource& WithRelationalDatabaseConfig(const RelationalDatabaseDataSourceConfig& value) { SetRelationalDatabaseConfig(value); return *this;}
    inline DataSource& WithRelationalDatabaseConfig(RelationalDatabaseDataSourceConfig&& value) { SetRelationalDatabaseConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon EventBridge settings.</p>
     */
    inline const EventBridgeDataSourceConfig& GetEventBridgeConfig() const{ return m_eventBridgeConfig; }
    inline bool EventBridgeConfigHasBeenSet() const { return m_eventBridgeConfigHasBeenSet; }
    inline void SetEventBridgeConfig(const EventBridgeDataSourceConfig& value) { m_eventBridgeConfigHasBeenSet = true; m_eventBridgeConfig = value; }
    inline void SetEventBridgeConfig(EventBridgeDataSourceConfig&& value) { m_eventBridgeConfigHasBeenSet = true; m_eventBridgeConfig = std::move(value); }
    inline DataSource& WithEventBridgeConfig(const EventBridgeDataSourceConfig& value) { SetEventBridgeConfig(value); return *this;}
    inline DataSource& WithEventBridgeConfig(EventBridgeDataSourceConfig&& value) { SetEventBridgeConfig(std::move(value)); return *this;}
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
    inline DataSource& WithMetricsConfig(const DataSourceLevelMetricsConfig& value) { SetMetricsConfig(value); return *this;}
    inline DataSource& WithMetricsConfig(DataSourceLevelMetricsConfig&& value) { SetMetricsConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

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
