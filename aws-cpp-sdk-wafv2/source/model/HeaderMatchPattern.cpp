/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/HeaderMatchPattern.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

HeaderMatchPattern::HeaderMatchPattern() : 
    m_allHasBeenSet(false),
    m_includedHeadersHasBeenSet(false),
    m_excludedHeadersHasBeenSet(false)
{
}

HeaderMatchPattern::HeaderMatchPattern(JsonView jsonValue) : 
    m_allHasBeenSet(false),
    m_includedHeadersHasBeenSet(false),
    m_excludedHeadersHasBeenSet(false)
{
  *this = jsonValue;
}

HeaderMatchPattern& HeaderMatchPattern::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("All"))
  {
    m_all = jsonValue.GetObject("All");

    m_allHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludedHeaders"))
  {
    Aws::Utils::Array<JsonView> includedHeadersJsonList = jsonValue.GetArray("IncludedHeaders");
    for(unsigned includedHeadersIndex = 0; includedHeadersIndex < includedHeadersJsonList.GetLength(); ++includedHeadersIndex)
    {
      m_includedHeaders.push_back(includedHeadersJsonList[includedHeadersIndex].AsString());
    }
    m_includedHeadersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludedHeaders"))
  {
    Aws::Utils::Array<JsonView> excludedHeadersJsonList = jsonValue.GetArray("ExcludedHeaders");
    for(unsigned excludedHeadersIndex = 0; excludedHeadersIndex < excludedHeadersJsonList.GetLength(); ++excludedHeadersIndex)
    {
      m_excludedHeaders.push_back(excludedHeadersJsonList[excludedHeadersIndex].AsString());
    }
    m_excludedHeadersHasBeenSet = true;
  }

  return *this;
}

JsonValue HeaderMatchPattern::Jsonize() const
{
  JsonValue payload;

  if(m_allHasBeenSet)
  {
   payload.WithObject("All", m_all.Jsonize());

  }

  if(m_includedHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includedHeadersJsonList(m_includedHeaders.size());
   for(unsigned includedHeadersIndex = 0; includedHeadersIndex < includedHeadersJsonList.GetLength(); ++includedHeadersIndex)
   {
     includedHeadersJsonList[includedHeadersIndex].AsString(m_includedHeaders[includedHeadersIndex]);
   }
   payload.WithArray("IncludedHeaders", std::move(includedHeadersJsonList));

  }

  if(m_excludedHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedHeadersJsonList(m_excludedHeaders.size());
   for(unsigned excludedHeadersIndex = 0; excludedHeadersIndex < excludedHeadersJsonList.GetLength(); ++excludedHeadersIndex)
   {
     excludedHeadersJsonList[excludedHeadersIndex].AsString(m_excludedHeaders[excludedHeadersIndex]);
   }
   payload.WithArray("ExcludedHeaders", std::move(excludedHeadersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
