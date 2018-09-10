﻿/*
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

#include <aws/appsync/model/DynamodbDataSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

DynamodbDataSourceConfig::DynamodbDataSourceConfig() : 
    m_tableNameHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_useCallerCredentials(false),
    m_useCallerCredentialsHasBeenSet(false)
{
}

DynamodbDataSourceConfig::DynamodbDataSourceConfig(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_useCallerCredentials(false),
    m_useCallerCredentialsHasBeenSet(false)
{
  *this = jsonValue;
}

DynamodbDataSourceConfig& DynamodbDataSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useCallerCredentials"))
  {
    m_useCallerCredentials = jsonValue.GetBool("useCallerCredentials");

    m_useCallerCredentialsHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamodbDataSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_useCallerCredentialsHasBeenSet)
  {
   payload.WithBool("useCallerCredentials", m_useCallerCredentials);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
