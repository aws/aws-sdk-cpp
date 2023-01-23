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
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class CreateDataSourceRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API CreateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSource"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;


    /**
     * <p>The API ID for the GraphQL API for the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID for the GraphQL API for the <code>DataSource</code>.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API ID for the GraphQL API for the <code>DataSource</code>.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID for the GraphQL API for the <code>DataSource</code>.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID for the GraphQL API for the <code>DataSource</code>.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID for the GraphQL API for the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID for the GraphQL API for the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID for the GraphQL API for the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>A user-supplied name for the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-supplied name for the <code>DataSource</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A user-supplied name for the <code>DataSource</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user-supplied name for the <code>DataSource</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A user-supplied name for the <code>DataSource</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A user-supplied name for the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name for the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name for the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the <code>DataSource</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the <code>DataSource</code>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the <code>DataSource</code>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the <code>DataSource</code>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the <code>DataSource</code>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the <code>DataSource</code>.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the <code>DataSource</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the <code>DataSource</code>.</p>
     */
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the <code>DataSource</code>.</p>
     */
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithType(const DataSourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the <code>DataSource</code>.</p>
     */
    inline CreateDataSourceRequest& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>Amazon DynamoDB settings.</p>
     */
    inline const DynamodbDataSourceConfig& GetDynamodbConfig() const{ return m_dynamodbConfig; }

    /**
     * <p>Amazon DynamoDB settings.</p>
     */
    inline bool DynamodbConfigHasBeenSet() const { return m_dynamodbConfigHasBeenSet; }

    /**
     * <p>Amazon DynamoDB settings.</p>
     */
    inline void SetDynamodbConfig(const DynamodbDataSourceConfig& value) { m_dynamodbConfigHasBeenSet = true; m_dynamodbConfig = value; }

    /**
     * <p>Amazon DynamoDB settings.</p>
     */
    inline void SetDynamodbConfig(DynamodbDataSourceConfig&& value) { m_dynamodbConfigHasBeenSet = true; m_dynamodbConfig = std::move(value); }

    /**
     * <p>Amazon DynamoDB settings.</p>
     */
    inline CreateDataSourceRequest& WithDynamodbConfig(const DynamodbDataSourceConfig& value) { SetDynamodbConfig(value); return *this;}

    /**
     * <p>Amazon DynamoDB settings.</p>
     */
    inline CreateDataSourceRequest& WithDynamodbConfig(DynamodbDataSourceConfig&& value) { SetDynamodbConfig(std::move(value)); return *this;}


    /**
     * <p>Lambda settings.</p>
     */
    inline const LambdaDataSourceConfig& GetLambdaConfig() const{ return m_lambdaConfig; }

    /**
     * <p>Lambda settings.</p>
     */
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }

    /**
     * <p>Lambda settings.</p>
     */
    inline void SetLambdaConfig(const LambdaDataSourceConfig& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>Lambda settings.</p>
     */
    inline void SetLambdaConfig(LambdaDataSourceConfig&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }

    /**
     * <p>Lambda settings.</p>
     */
    inline CreateDataSourceRequest& WithLambdaConfig(const LambdaDataSourceConfig& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>Lambda settings.</p>
     */
    inline CreateDataSourceRequest& WithLambdaConfig(LambdaDataSourceConfig&& value) { SetLambdaConfig(std::move(value)); return *this;}


    /**
     * <p>Amazon OpenSearch Service settings.</p> <p>As of September 2021, Amazon
     * Elasticsearch service is Amazon OpenSearch Service. This configuration is
     * deprecated. For new data sources, use
     * <a>CreateDataSourceRequest$openSearchServiceConfig</a> to create an OpenSearch
     * data source.</p>
     */
    inline const ElasticsearchDataSourceConfig& GetElasticsearchConfig() const{ return m_elasticsearchConfig; }

    /**
     * <p>Amazon OpenSearch Service settings.</p> <p>As of September 2021, Amazon
     * Elasticsearch service is Amazon OpenSearch Service. This configuration is
     * deprecated. For new data sources, use
     * <a>CreateDataSourceRequest$openSearchServiceConfig</a> to create an OpenSearch
     * data source.</p>
     */
    inline bool ElasticsearchConfigHasBeenSet() const { return m_elasticsearchConfigHasBeenSet; }

    /**
     * <p>Amazon OpenSearch Service settings.</p> <p>As of September 2021, Amazon
     * Elasticsearch service is Amazon OpenSearch Service. This configuration is
     * deprecated. For new data sources, use
     * <a>CreateDataSourceRequest$openSearchServiceConfig</a> to create an OpenSearch
     * data source.</p>
     */
    inline void SetElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = value; }

    /**
     * <p>Amazon OpenSearch Service settings.</p> <p>As of September 2021, Amazon
     * Elasticsearch service is Amazon OpenSearch Service. This configuration is
     * deprecated. For new data sources, use
     * <a>CreateDataSourceRequest$openSearchServiceConfig</a> to create an OpenSearch
     * data source.</p>
     */
    inline void SetElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = std::move(value); }

    /**
     * <p>Amazon OpenSearch Service settings.</p> <p>As of September 2021, Amazon
     * Elasticsearch service is Amazon OpenSearch Service. This configuration is
     * deprecated. For new data sources, use
     * <a>CreateDataSourceRequest$openSearchServiceConfig</a> to create an OpenSearch
     * data source.</p>
     */
    inline CreateDataSourceRequest& WithElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { SetElasticsearchConfig(value); return *this;}

    /**
     * <p>Amazon OpenSearch Service settings.</p> <p>As of September 2021, Amazon
     * Elasticsearch service is Amazon OpenSearch Service. This configuration is
     * deprecated. For new data sources, use
     * <a>CreateDataSourceRequest$openSearchServiceConfig</a> to create an OpenSearch
     * data source.</p>
     */
    inline CreateDataSourceRequest& WithElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { SetElasticsearchConfig(std::move(value)); return *this;}


    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline const OpenSearchServiceDataSourceConfig& GetOpenSearchServiceConfig() const{ return m_openSearchServiceConfig; }

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline bool OpenSearchServiceConfigHasBeenSet() const { return m_openSearchServiceConfigHasBeenSet; }

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline void SetOpenSearchServiceConfig(const OpenSearchServiceDataSourceConfig& value) { m_openSearchServiceConfigHasBeenSet = true; m_openSearchServiceConfig = value; }

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline void SetOpenSearchServiceConfig(OpenSearchServiceDataSourceConfig&& value) { m_openSearchServiceConfigHasBeenSet = true; m_openSearchServiceConfig = std::move(value); }

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline CreateDataSourceRequest& WithOpenSearchServiceConfig(const OpenSearchServiceDataSourceConfig& value) { SetOpenSearchServiceConfig(value); return *this;}

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline CreateDataSourceRequest& WithOpenSearchServiceConfig(OpenSearchServiceDataSourceConfig&& value) { SetOpenSearchServiceConfig(std::move(value)); return *this;}


    /**
     * <p>HTTP endpoint settings.</p>
     */
    inline const HttpDataSourceConfig& GetHttpConfig() const{ return m_httpConfig; }

    /**
     * <p>HTTP endpoint settings.</p>
     */
    inline bool HttpConfigHasBeenSet() const { return m_httpConfigHasBeenSet; }

    /**
     * <p>HTTP endpoint settings.</p>
     */
    inline void SetHttpConfig(const HttpDataSourceConfig& value) { m_httpConfigHasBeenSet = true; m_httpConfig = value; }

    /**
     * <p>HTTP endpoint settings.</p>
     */
    inline void SetHttpConfig(HttpDataSourceConfig&& value) { m_httpConfigHasBeenSet = true; m_httpConfig = std::move(value); }

    /**
     * <p>HTTP endpoint settings.</p>
     */
    inline CreateDataSourceRequest& WithHttpConfig(const HttpDataSourceConfig& value) { SetHttpConfig(value); return *this;}

    /**
     * <p>HTTP endpoint settings.</p>
     */
    inline CreateDataSourceRequest& WithHttpConfig(HttpDataSourceConfig&& value) { SetHttpConfig(std::move(value)); return *this;}


    /**
     * <p>Relational database settings.</p>
     */
    inline const RelationalDatabaseDataSourceConfig& GetRelationalDatabaseConfig() const{ return m_relationalDatabaseConfig; }

    /**
     * <p>Relational database settings.</p>
     */
    inline bool RelationalDatabaseConfigHasBeenSet() const { return m_relationalDatabaseConfigHasBeenSet; }

    /**
     * <p>Relational database settings.</p>
     */
    inline void SetRelationalDatabaseConfig(const RelationalDatabaseDataSourceConfig& value) { m_relationalDatabaseConfigHasBeenSet = true; m_relationalDatabaseConfig = value; }

    /**
     * <p>Relational database settings.</p>
     */
    inline void SetRelationalDatabaseConfig(RelationalDatabaseDataSourceConfig&& value) { m_relationalDatabaseConfigHasBeenSet = true; m_relationalDatabaseConfig = std::move(value); }

    /**
     * <p>Relational database settings.</p>
     */
    inline CreateDataSourceRequest& WithRelationalDatabaseConfig(const RelationalDatabaseDataSourceConfig& value) { SetRelationalDatabaseConfig(value); return *this;}

    /**
     * <p>Relational database settings.</p>
     */
    inline CreateDataSourceRequest& WithRelationalDatabaseConfig(RelationalDatabaseDataSourceConfig&& value) { SetRelationalDatabaseConfig(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
