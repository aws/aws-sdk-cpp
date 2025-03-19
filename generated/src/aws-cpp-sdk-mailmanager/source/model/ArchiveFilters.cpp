/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

ArchiveFilters::ArchiveFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

ArchiveFilters& ArchiveFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Include"))
  {
    Aws::Utils::Array<JsonView> includeJsonList = jsonValue.GetArray("Include");
    for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
    {
      m_include.push_back(includeJsonList[includeIndex].AsObject());
    }
    m_includeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unless"))
  {
    Aws::Utils::Array<JsonView> unlessJsonList = jsonValue.GetArray("Unless");
    for(unsigned unlessIndex = 0; unlessIndex < unlessJsonList.GetLength(); ++unlessIndex)
    {
      m_unless.push_back(unlessJsonList[unlessIndex].AsObject());
    }
    m_unlessHasBeenSet = true;
  }
  return *this;
}

JsonValue ArchiveFilters::Jsonize() const
{
  JsonValue payload;

  if(m_includeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeJsonList(m_include.size());
   for(unsigned includeIndex = 0; includeIndex < includeJsonList.GetLength(); ++includeIndex)
   {
     includeJsonList[includeIndex].AsObject(m_include[includeIndex].Jsonize());
   }
   payload.WithArray("Include", std::move(includeJsonList));

  }

  if(m_unlessHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> unlessJsonList(m_unless.size());
   for(unsigned unlessIndex = 0; unlessIndex < unlessJsonList.GetLength(); ++unlessIndex)
   {
     unlessJsonList[unlessIndex].AsObject(m_unless[unlessIndex].Jsonize());
   }
   payload.WithArray("Unless", std::move(unlessJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
