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


    /**
     * <p>The data source Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }

    /**
     * <p>The data source Amazon Resource Name (ARN).</p>
     */
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }

    /**
     * <p>The data source Amazon Resource Name (ARN).</p>
     */
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = value; }

    /**
     * <p>The data source Amazon Resource Name (ARN).</p>
     */
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::move(value); }

    /**
     * <p>The data source Amazon Resource Name (ARN).</p>
     */
    inline void SetDataSourceArn(const char* value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn.assign(value); }

    /**
     * <p>The data source Amazon Resource Name (ARN).</p>
     */
    inline DataSource& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}

    /**
     * <p>The data source Amazon Resource Name (ARN).</p>
     */
    inline DataSource& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}

    /**
     * <p>The data source Amazon Resource Name (ARN).</p>
     */
    inline DataSource& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the data source.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the data source.</p>
     */
    inline DataSource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline DataSource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline DataSource& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AWS_LAMBDA</b>: The data
     * source is an Lambda function.</p> </li> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon OpenSearch Service
     * domain.</p> </li> <li> <p> <b>AMAZON_OPENSEARCH_SERVICE</b>: The data source is
     * an Amazon OpenSearch Service domain.</p> </li> <li> <p> <b>NONE</b>: There is no
     * data source. Use this type when you want to invoke a GraphQL operation without
     * connecting to a data source, such as when you're performing data transformation
     * with resolvers or invoking a subscription from a mutation.</p> </li> <li> <p>
     * <b>HTTP</b>: The data source is an HTTP endpoint.</p> </li> <li> <p>
     * <b>RELATIONAL_DATABASE</b>: The data source is a relational database.</p> </li>
     * </ul>
     */
    inline const DataSourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AWS_LAMBDA</b>: The data
     * source is an Lambda function.</p> </li> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon OpenSearch Service
     * domain.</p> </li> <li> <p> <b>AMAZON_OPENSEARCH_SERVICE</b>: The data source is
     * an Amazon OpenSearch Service domain.</p> </li> <li> <p> <b>NONE</b>: There is no
     * data source. Use this type when you want to invoke a GraphQL operation without
     * connecting to a data source, such as when you're performing data transformation
     * with resolvers or invoking a subscription from a mutation.</p> </li> <li> <p>
     * <b>HTTP</b>: The data source is an HTTP endpoint.</p> </li> <li> <p>
     * <b>RELATIONAL_DATABASE</b>: The data source is a relational database.</p> </li>
     * </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AWS_LAMBDA</b>: The data
     * source is an Lambda function.</p> </li> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon OpenSearch Service
     * domain.</p> </li> <li> <p> <b>AMAZON_OPENSEARCH_SERVICE</b>: The data source is
     * an Amazon OpenSearch Service domain.</p> </li> <li> <p> <b>NONE</b>: There is no
     * data source. Use this type when you want to invoke a GraphQL operation without
     * connecting to a data source, such as when you're performing data transformation
     * with resolvers or invoking a subscription from a mutation.</p> </li> <li> <p>
     * <b>HTTP</b>: The data source is an HTTP endpoint.</p> </li> <li> <p>
     * <b>RELATIONAL_DATABASE</b>: The data source is a relational database.</p> </li>
     * </ul>
     */
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AWS_LAMBDA</b>: The data
     * source is an Lambda function.</p> </li> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon OpenSearch Service
     * domain.</p> </li> <li> <p> <b>AMAZON_OPENSEARCH_SERVICE</b>: The data source is
     * an Amazon OpenSearch Service domain.</p> </li> <li> <p> <b>NONE</b>: There is no
     * data source. Use this type when you want to invoke a GraphQL operation without
     * connecting to a data source, such as when you're performing data transformation
     * with resolvers or invoking a subscription from a mutation.</p> </li> <li> <p>
     * <b>HTTP</b>: The data source is an HTTP endpoint.</p> </li> <li> <p>
     * <b>RELATIONAL_DATABASE</b>: The data source is a relational database.</p> </li>
     * </ul>
     */
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AWS_LAMBDA</b>: The data
     * source is an Lambda function.</p> </li> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon OpenSearch Service
     * domain.</p> </li> <li> <p> <b>AMAZON_OPENSEARCH_SERVICE</b>: The data source is
     * an Amazon OpenSearch Service domain.</p> </li> <li> <p> <b>NONE</b>: There is no
     * data source. Use this type when you want to invoke a GraphQL operation without
     * connecting to a data source, such as when you're performing data transformation
     * with resolvers or invoking a subscription from a mutation.</p> </li> <li> <p>
     * <b>HTTP</b>: The data source is an HTTP endpoint.</p> </li> <li> <p>
     * <b>RELATIONAL_DATABASE</b>: The data source is a relational database.</p> </li>
     * </ul>
     */
    inline DataSource& WithType(const DataSourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AWS_LAMBDA</b>: The data
     * source is an Lambda function.</p> </li> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon OpenSearch Service
     * domain.</p> </li> <li> <p> <b>AMAZON_OPENSEARCH_SERVICE</b>: The data source is
     * an Amazon OpenSearch Service domain.</p> </li> <li> <p> <b>NONE</b>: There is no
     * data source. Use this type when you want to invoke a GraphQL operation without
     * connecting to a data source, such as when you're performing data transformation
     * with resolvers or invoking a subscription from a mutation.</p> </li> <li> <p>
     * <b>HTTP</b>: The data source is an HTTP endpoint.</p> </li> <li> <p>
     * <b>RELATIONAL_DATABASE</b>: The data source is a relational database.</p> </li>
     * </ul>
     */
    inline DataSource& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}


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
    inline DataSource& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline DataSource& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Identity and Access Management (IAM) service role Amazon Resource Name
     * (ARN) for the data source. The system assumes this role when accessing the data
     * source.</p>
     */
    inline DataSource& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>DynamoDB settings.</p>
     */
    inline const DynamodbDataSourceConfig& GetDynamodbConfig() const{ return m_dynamodbConfig; }

    /**
     * <p>DynamoDB settings.</p>
     */
    inline bool DynamodbConfigHasBeenSet() const { return m_dynamodbConfigHasBeenSet; }

    /**
     * <p>DynamoDB settings.</p>
     */
    inline void SetDynamodbConfig(const DynamodbDataSourceConfig& value) { m_dynamodbConfigHasBeenSet = true; m_dynamodbConfig = value; }

    /**
     * <p>DynamoDB settings.</p>
     */
    inline void SetDynamodbConfig(DynamodbDataSourceConfig&& value) { m_dynamodbConfigHasBeenSet = true; m_dynamodbConfig = std::move(value); }

    /**
     * <p>DynamoDB settings.</p>
     */
    inline DataSource& WithDynamodbConfig(const DynamodbDataSourceConfig& value) { SetDynamodbConfig(value); return *this;}

    /**
     * <p>DynamoDB settings.</p>
     */
    inline DataSource& WithDynamodbConfig(DynamodbDataSourceConfig&& value) { SetDynamodbConfig(std::move(value)); return *this;}


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
    inline DataSource& WithLambdaConfig(const LambdaDataSourceConfig& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>Lambda settings.</p>
     */
    inline DataSource& WithLambdaConfig(LambdaDataSourceConfig&& value) { SetLambdaConfig(std::move(value)); return *this;}


    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline const ElasticsearchDataSourceConfig& GetElasticsearchConfig() const{ return m_elasticsearchConfig; }

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline bool ElasticsearchConfigHasBeenSet() const { return m_elasticsearchConfigHasBeenSet; }

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline void SetElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = value; }

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline void SetElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = std::move(value); }

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline DataSource& WithElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { SetElasticsearchConfig(value); return *this;}

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline DataSource& WithElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { SetElasticsearchConfig(std::move(value)); return *this;}


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
    inline DataSource& WithOpenSearchServiceConfig(const OpenSearchServiceDataSourceConfig& value) { SetOpenSearchServiceConfig(value); return *this;}

    /**
     * <p>Amazon OpenSearch Service settings.</p>
     */
    inline DataSource& WithOpenSearchServiceConfig(OpenSearchServiceDataSourceConfig&& value) { SetOpenSearchServiceConfig(std::move(value)); return *this;}


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
    inline DataSource& WithHttpConfig(const HttpDataSourceConfig& value) { SetHttpConfig(value); return *this;}

    /**
     * <p>HTTP endpoint settings.</p>
     */
    inline DataSource& WithHttpConfig(HttpDataSourceConfig&& value) { SetHttpConfig(std::move(value)); return *this;}


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
    inline DataSource& WithRelationalDatabaseConfig(const RelationalDatabaseDataSourceConfig& value) { SetRelationalDatabaseConfig(value); return *this;}

    /**
     * <p>Relational database settings.</p>
     */
    inline DataSource& WithRelationalDatabaseConfig(RelationalDatabaseDataSourceConfig&& value) { SetRelationalDatabaseConfig(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
