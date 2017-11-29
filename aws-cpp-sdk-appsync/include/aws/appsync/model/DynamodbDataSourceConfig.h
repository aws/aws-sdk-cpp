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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a DynamoDB data source configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DynamodbDataSourceConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API DynamodbDataSourceConfig
  {
  public:
    DynamodbDataSourceConfig();
    DynamodbDataSourceConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    DynamodbDataSourceConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The table name.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table name.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The table name.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The table name.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The table name.</p>
     */
    inline DynamodbDataSourceConfig& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table name.</p>
     */
    inline DynamodbDataSourceConfig& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The table name.</p>
     */
    inline DynamodbDataSourceConfig& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The AWS region.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The AWS region.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The AWS region.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The AWS region.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The AWS region.</p>
     */
    inline DynamodbDataSourceConfig& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The AWS region.</p>
     */
    inline DynamodbDataSourceConfig& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region.</p>
     */
    inline DynamodbDataSourceConfig& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>Set to TRUE to use Amazon Cognito credentials with this data source.</p>
     */
    inline bool GetUseCallerCredentials() const{ return m_useCallerCredentials; }

    /**
     * <p>Set to TRUE to use Amazon Cognito credentials with this data source.</p>
     */
    inline void SetUseCallerCredentials(bool value) { m_useCallerCredentialsHasBeenSet = true; m_useCallerCredentials = value; }

    /**
     * <p>Set to TRUE to use Amazon Cognito credentials with this data source.</p>
     */
    inline DynamodbDataSourceConfig& WithUseCallerCredentials(bool value) { SetUseCallerCredentials(value); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet;

    bool m_useCallerCredentials;
    bool m_useCallerCredentialsHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
