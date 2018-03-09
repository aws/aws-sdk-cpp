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

#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

ResourceQuery::ResourceQuery() : 
    m_type(QueryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

ResourceQuery::ResourceQuery(const JsonValue& jsonValue) : 
    m_type(QueryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_queryHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceQuery& ResourceQuery::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = QueryTypeMapper::GetQueryTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Query"))
  {
    m_query = jsonValue.GetString("Query");

    m_queryHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceQuery::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", QueryTypeMapper::GetNameForQueryType(m_type));
  }

  if(m_queryHasBeenSet)
  {
   payload.WithString("Query", m_query);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
