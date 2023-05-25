/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ContentSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ContentSourceConfiguration::ContentSourceConfiguration() : 
    m_dataSourceIdsHasBeenSet(false),
    m_faqIdsHasBeenSet(false),
    m_directPutContent(false),
    m_directPutContentHasBeenSet(false)
{
}

ContentSourceConfiguration::ContentSourceConfiguration(JsonView jsonValue) : 
    m_dataSourceIdsHasBeenSet(false),
    m_faqIdsHasBeenSet(false),
    m_directPutContent(false),
    m_directPutContentHasBeenSet(false)
{
  *this = jsonValue;
}

ContentSourceConfiguration& ContentSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceIds"))
  {
    Aws::Utils::Array<JsonView> dataSourceIdsJsonList = jsonValue.GetArray("DataSourceIds");
    for(unsigned dataSourceIdsIndex = 0; dataSourceIdsIndex < dataSourceIdsJsonList.GetLength(); ++dataSourceIdsIndex)
    {
      m_dataSourceIds.push_back(dataSourceIdsJsonList[dataSourceIdsIndex].AsString());
    }
    m_dataSourceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaqIds"))
  {
    Aws::Utils::Array<JsonView> faqIdsJsonList = jsonValue.GetArray("FaqIds");
    for(unsigned faqIdsIndex = 0; faqIdsIndex < faqIdsJsonList.GetLength(); ++faqIdsIndex)
    {
      m_faqIds.push_back(faqIdsJsonList[faqIdsIndex].AsString());
    }
    m_faqIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectPutContent"))
  {
    m_directPutContent = jsonValue.GetBool("DirectPutContent");

    m_directPutContentHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSourceIdsJsonList(m_dataSourceIds.size());
   for(unsigned dataSourceIdsIndex = 0; dataSourceIdsIndex < dataSourceIdsJsonList.GetLength(); ++dataSourceIdsIndex)
   {
     dataSourceIdsJsonList[dataSourceIdsIndex].AsString(m_dataSourceIds[dataSourceIdsIndex]);
   }
   payload.WithArray("DataSourceIds", std::move(dataSourceIdsJsonList));

  }

  if(m_faqIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> faqIdsJsonList(m_faqIds.size());
   for(unsigned faqIdsIndex = 0; faqIdsIndex < faqIdsJsonList.GetLength(); ++faqIdsIndex)
   {
     faqIdsJsonList[faqIdsIndex].AsString(m_faqIds[faqIdsIndex]);
   }
   payload.WithArray("FaqIds", std::move(faqIdsJsonList));

  }

  if(m_directPutContentHasBeenSet)
  {
   payload.WithBool("DirectPutContent", m_directPutContent);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
