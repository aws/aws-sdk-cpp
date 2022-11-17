/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PrefixConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

PrefixConfig::PrefixConfig() : 
    m_prefixType(PrefixType::NOT_SET),
    m_prefixTypeHasBeenSet(false),
    m_prefixFormat(PrefixFormat::NOT_SET),
    m_prefixFormatHasBeenSet(false),
    m_pathPrefixHierarchyHasBeenSet(false)
{
}

PrefixConfig::PrefixConfig(JsonView jsonValue) : 
    m_prefixType(PrefixType::NOT_SET),
    m_prefixTypeHasBeenSet(false),
    m_prefixFormat(PrefixFormat::NOT_SET),
    m_prefixFormatHasBeenSet(false),
    m_pathPrefixHierarchyHasBeenSet(false)
{
  *this = jsonValue;
}

PrefixConfig& PrefixConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("prefixType"))
  {
    m_prefixType = PrefixTypeMapper::GetPrefixTypeForName(jsonValue.GetString("prefixType"));

    m_prefixTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefixFormat"))
  {
    m_prefixFormat = PrefixFormatMapper::GetPrefixFormatForName(jsonValue.GetString("prefixFormat"));

    m_prefixFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pathPrefixHierarchy"))
  {
    Aws::Utils::Array<JsonView> pathPrefixHierarchyJsonList = jsonValue.GetArray("pathPrefixHierarchy");
    for(unsigned pathPrefixHierarchyIndex = 0; pathPrefixHierarchyIndex < pathPrefixHierarchyJsonList.GetLength(); ++pathPrefixHierarchyIndex)
    {
      m_pathPrefixHierarchy.push_back(PathPrefixMapper::GetPathPrefixForName(pathPrefixHierarchyJsonList[pathPrefixHierarchyIndex].AsString()));
    }
    m_pathPrefixHierarchyHasBeenSet = true;
  }

  return *this;
}

JsonValue PrefixConfig::Jsonize() const
{
  JsonValue payload;

  if(m_prefixTypeHasBeenSet)
  {
   payload.WithString("prefixType", PrefixTypeMapper::GetNameForPrefixType(m_prefixType));
  }

  if(m_prefixFormatHasBeenSet)
  {
   payload.WithString("prefixFormat", PrefixFormatMapper::GetNameForPrefixFormat(m_prefixFormat));
  }

  if(m_pathPrefixHierarchyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathPrefixHierarchyJsonList(m_pathPrefixHierarchy.size());
   for(unsigned pathPrefixHierarchyIndex = 0; pathPrefixHierarchyIndex < pathPrefixHierarchyJsonList.GetLength(); ++pathPrefixHierarchyIndex)
   {
     pathPrefixHierarchyJsonList[pathPrefixHierarchyIndex].AsString(PathPrefixMapper::GetNameForPathPrefix(m_pathPrefixHierarchy[pathPrefixHierarchyIndex]));
   }
   payload.WithArray("pathPrefixHierarchy", std::move(pathPrefixHierarchyJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
