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

#include <aws/athena/model/QueryExecutionContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryExecutionContext::QueryExecutionContext() : 
    m_databaseHasBeenSet(false)
{
}

QueryExecutionContext::QueryExecutionContext(const JsonValue& jsonValue) : 
    m_databaseHasBeenSet(false)
{
  *this = jsonValue;
}

QueryExecutionContext& QueryExecutionContext::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryExecutionContext::Jsonize() const
{
  JsonValue payload;

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
