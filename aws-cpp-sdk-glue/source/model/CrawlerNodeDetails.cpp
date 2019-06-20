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
    Array<JsonView> crawlsJsonList = jsonValue.GetArray("Crawls");
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
   Array<JsonValue> crawlsJsonList(m_crawls.size());
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
