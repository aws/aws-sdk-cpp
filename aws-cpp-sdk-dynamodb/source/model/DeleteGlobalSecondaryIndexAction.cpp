/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/DeleteGlobalSecondaryIndexAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

DeleteGlobalSecondaryIndexAction::DeleteGlobalSecondaryIndexAction() : 
    m_indexNameHasBeenSet(false)
{
}

DeleteGlobalSecondaryIndexAction::DeleteGlobalSecondaryIndexAction(const JsonValue& jsonValue) : 
    m_indexNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteGlobalSecondaryIndexAction& DeleteGlobalSecondaryIndexAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteGlobalSecondaryIndexAction::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws