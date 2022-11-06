/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CrawlerNodeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CrawlerNodeDetails::CrawlerNodeDetails() : 
    m_crawlsHasBeenSet(false)
{
}

CrawlerNodeDetails::CrawlerNodeDetails(JsonView jsonValue) : 
    m_crawlsHasBeenSet(false)
{
  *this = jsonValue;
}

CrawlerNodeDetails& CrawlerNodeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Crawls"))
  {
    Aws::Utils::Array<JsonView> crawlsJsonList = jsonValue.GetArray("Crawls");
    for(unsigned crawlsIndex = 0; crawlsIndex < crawlsJsonList.GetLength(); ++crawlsIndex)
    {
      m_crawls.push_back(crawlsJsonList[crawlsIndex].AsObject());
    }
    m_crawlsHasBeenSet = true;
  }

  return *this;
}

JsonValue CrawlerNodeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_crawlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crawlsJsonList(m_crawls.size());
   for(unsigned crawlsIndex = 0; crawlsIndex < crawlsJsonList.GetLength(); ++crawlsIndex)
   {
     crawlsJsonList[crawlsIndex].AsObject(m_crawls[crawlsIndex].Jsonize());
   }
   payload.WithArray("Crawls", std::move(crawlsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
