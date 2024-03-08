/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AccessScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

AccessScope::AccessScope() : 
    m_type(AccessScopeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_namespacesHasBeenSet(false)
{
}

AccessScope::AccessScope(JsonView jsonValue) : 
    m_type(AccessScopeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_namespacesHasBeenSet(false)
{
  *this = jsonValue;
}

AccessScope& AccessScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = AccessScopeTypeMapper::GetAccessScopeTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaces"))
  {
    Aws::Utils::Array<JsonView> namespacesJsonList = jsonValue.GetArray("namespaces");
    for(unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex)
    {
      m_namespaces.push_back(namespacesJsonList[namespacesIndex].AsString());
    }
    m_namespacesHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessScope::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AccessScopeTypeMapper::GetNameForAccessScopeType(m_type));
  }

  if(m_namespacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namespacesJsonList(m_namespaces.size());
   for(unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex)
   {
     namespacesJsonList[namespacesIndex].AsString(m_namespaces[namespacesIndex]);
   }
   payload.WithArray("namespaces", std::move(namespacesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
