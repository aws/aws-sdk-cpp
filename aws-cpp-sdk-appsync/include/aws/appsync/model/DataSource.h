/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/DataSourceType.h>
#include <aws/appsync/model/DynamodbDataSourceConfig.h>
#include <aws/appsync/model/LambdaDataSourceConfig.h>
#include <aws/appsync/model/ElasticsearchDataSourceConfig.h>
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
  class AWS_APPSYNC_API DataSource
  {
  public:
    DataSource();
    DataSource(Aws::Utils::Json::JsonView jsonValue);
    DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data source ARN.</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }

    /**
     * <p>The data source ARN.</p>
     */
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }

    /**
     * <p>The data source ARN.</p>
     */
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = value; }

    /**
     * <p>The data source ARN.</p>
     */
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::move(value); }

    /**
     * <p>The data source ARN.</p>
     */
    inline void SetDataSourceArn(const char* value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn.assign(value); }

    /**
     * <p>The data source ARN.</p>
     */
    inline DataSource& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}

    /**
     * <p>The data source ARN.</p>
     */
    inline DataSource& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}

    /**
     * <p>The data source ARN.</p>
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
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon Elasticsearch Service
     * domain.</p> </li> <li> <p> <b>AWS_LAMBDA</b>: The data source is an AWS Lambda
     * function.</p> </li> <li> <p> <b>NONE</b>: There is no data source. This type is
     * used when you wish to invoke a GraphQL operation without connecting to a data
     * source, such as performing data transformation with resolvers or triggering a
     * subscription to be invoked from a mutation.</p> </li> <li> <p> <b>HTTP</b>: The
     * data source is an HTTP endpoint.</p> </li> <li> <p> <b>RELATIONAL_DATABASE</b>:
     * The data source is a relational database.</p> </li> </ul>
     */
    inline const DataSourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon Elasticsearch Service
     * domain.</p> </li> <li> <p> <b>AWS_LAMBDA</b>: The data source is an AWS Lambda
     * function.</p> </li> <li> <p> <b>NONE</b>: There is no data source. This type is
     * used when you wish to invoke a GraphQL operation without connecting to a data
     * source, such as performing data transformation with resolvers or triggering a
     * subscription to be invoked from a mutation.</p> </li> <li> <p> <b>HTTP</b>: The
     * data source is an HTTP endpoint.</p> </li> <li> <p> <b>RELATIONAL_DATABASE</b>:
     * The data source is a relational database.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon Elasticsearch Service
     * domain.</p> </li> <li> <p> <b>AWS_LAMBDA</b>: The data source is an AWS Lambda
     * function.</p> </li> <li> <p> <b>NONE</b>: There is no data source. This type is
     * used when you wish to invoke a GraphQL operation without connecting to a data
     * source, such as performing data transformation with resolvers or triggering a
     * subscription to be invoked from a mutation.</p> </li> <li> <p> <b>HTTP</b>: The
     * data source is an HTTP endpoint.</p> </li> <li> <p> <b>RELATIONAL_DATABASE</b>:
     * The data source is a relational database.</p> </li> </ul>
     */
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon Elasticsearch Service
     * domain.</p> </li> <li> <p> <b>AWS_LAMBDA</b>: The data source is an AWS Lambda
     * function.</p> </li> <li> <p> <b>NONE</b>: There is no data source. This type is
     * used when you wish to invoke a GraphQL operation without connecting to a data
     * source, such as performing data transformation with resolvers or triggering a
     * subscription to be invoked from a mutation.</p> </li> <li> <p> <b>HTTP</b>: The
     * data source is an HTTP endpoint.</p> </li> <li> <p> <b>RELATIONAL_DATABASE</b>:
     * The data source is a relational database.</p> </li> </ul>
     */
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon Elasticsearch Service
     * domain.</p> </li> <li> <p> <b>AWS_LAMBDA</b>: The data source is an AWS Lambda
     * function.</p> </li> <li> <p> <b>NONE</b>: There is no data source. This type is
     * used when you wish to invoke a GraphQL operation without connecting to a data
     * source, such as performing data transformation with resolvers or triggering a
     * subscription to be invoked from a mutation.</p> </li> <li> <p> <b>HTTP</b>: The
     * data source is an HTTP endpoint.</p> </li> <li> <p> <b>RELATIONAL_DATABASE</b>:
     * The data source is a relational database.</p> </li> </ul>
     */
    inline DataSource& WithType(const DataSourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the data source.</p> <ul> <li> <p> <b>AMAZON_DYNAMODB</b>: The
     * data source is an Amazon DynamoDB table.</p> </li> <li> <p>
     * <b>AMAZON_ELASTICSEARCH</b>: The data source is an Amazon Elasticsearch Service
     * domain.</p> </li> <li> <p> <b>AWS_LAMBDA</b>: The data source is an AWS Lambda
     * function.</p> </li> <li> <p> <b>NONE</b>: There is no data source. This type is
     * used when you wish to invoke a GraphQL operation without connecting to a data
     * source, such as performing data transformation with resolvers or triggering a
     * subscription to be invoked from a mutation.</p> </li> <li> <p> <b>HTTP</b>: The
     * data source is an HTTP endpoint.</p> </li> <li> <p> <b>RELATIONAL_DATABASE</b>:
     * The data source is a relational database.</p> </li> </ul>
     */
    inline DataSource& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The AWS IAM service role ARN for the data source. The system assumes this
     * role when accessing the data source.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The AWS IAM service role ARN for the data source. The system assumes this
     * role when accessing the data source.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The AWS IAM service role ARN for the data source. The system assumes this
     * role when accessing the data source.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The AWS IAM service role ARN for the data source. The system assumes this
     * role when accessing the data source.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The AWS IAM service role ARN for the data source. The system assumes this
     * role when accessing the data source.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The AWS IAM service role ARN for the data source. The system assumes this
     * role when accessing the data source.</p>
     */
    inline DataSource& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The AWS IAM service role ARN for the data source. The system assumes this
     * role when accessing the data source.</p>
     */
    inline DataSource& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The AWS IAM service role ARN for the data source. The system assumes this
     * role when accessing the data source.</p>
     */
    inline DataSource& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


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
    inline DataSource& WithDynamodbConfig(const DynamodbDataSourceConfig& value) { SetDynamodbConfig(value); return *this;}

    /**
     * <p>Amazon DynamoDB settings.</p>
     */
    inline DataSource& WithDynamodbConfig(DynamodbDataSourceConfig&& value) { SetDynamodbConfig(std::move(value)); return *this;}


    /**
     * <p>AWS Lambda settings.</p>
     */
    inline const LambdaDataSourceConfig& GetLambdaConfig() const{ return m_lambdaConfig; }

    /**
     * <p>AWS Lambda settings.</p>
     */
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }

    /**
     * <p>AWS Lambda settings.</p>
     */
    inline void SetLambdaConfig(const LambdaDataSourceConfig& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>AWS Lambda settings.</p>
     */
    inline void SetLambdaConfig(LambdaDataSourceConfig&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }

    /**
     * <p>AWS Lambda settings.</p>
     */
    inline DataSource& WithLambdaConfig(const LambdaDataSourceConfig& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>AWS Lambda settings.</p>
     */
    inline DataSource& WithLambdaConfig(LambdaDataSourceConfig&& value) { SetLambdaConfig(std::move(value)); return *this;}


    /**
     * <p>Amazon Elasticsearch Service settings.</p>
     */
    inline const ElasticsearchDataSourceConfig& GetElasticsearchConfig() const{ return m_elasticsearchConfig; }

    /**
     * <p>Amazon Elasticsearch Service settings.</p>
     */
    inline bool ElasticsearchConfigHasBeenSet() const { return m_elasticsearchConfigHasBeenSet; }

    /**
     * <p>Amazon Elasticsearch Service settings.</p>
     */
    inline void SetElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = value; }

    /**
     * <p>Amazon Elasticsearch Service settings.</p>
     */
    inline void SetElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { m_elasticsearchConfigHasBeenSet = true; m_elasticsearchConfig = std::move(value); }

    /**
     * <p>Amazon Elasticsearch Service settings.</p>
     */
    inline DataSource& WithElasticsearchConfig(const ElasticsearchDataSourceConfig& value) { SetElasticsearchConfig(value); return *this;}

    /**
     * <p>Amazon Elasticsearch Service settings.</p>
     */
    inline DataSource& WithElasticsearchConfig(ElasticsearchDataSourceConfig&& value) { SetElasticsearchConfig(std::move(value)); return *this;}


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
    bool m_dataSourceArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    DataSourceType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet;

    DynamodbDataSourceConfig m_dynamodbConfig;
    bool m_dynamodbConfigHasBeenSet;

    LambdaDataSourceConfig m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet;

    ElasticsearchDataSourceConfig m_elasticsearchConfig;
    bool m_elasticsearchConfigHasBeenSet;

    HttpDataSourceConfig m_httpConfig;
    bool m_httpConfigHasBeenSet;

    RelationalDatabaseDataSourceConfig m_relationalDatabaseConfig;
    bool m_relationalDatabaseConfigHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
