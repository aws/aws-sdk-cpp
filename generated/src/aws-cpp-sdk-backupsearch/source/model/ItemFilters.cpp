/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/ItemFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

ItemFilters::ItemFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

ItemFilters& ItemFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ItemFilters"))
  {
    Aws::Utils::Array<JsonView> s3ItemFiltersJsonList = jsonValue.GetArray("S3ItemFilters");
    for(unsigned s3ItemFiltersIndex = 0; s3ItemFiltersIndex < s3ItemFiltersJsonList.GetLength(); ++s3ItemFiltersIndex)
    {
      m_s3ItemFilters.push_back(s3ItemFiltersJsonList[s3ItemFiltersIndex].AsObject());
    }
    m_s3ItemFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EBSItemFilters"))
  {
    Aws::Utils::Array<JsonView> eBSItemFiltersJsonList = jsonValue.GetArray("EBSItemFilters");
    for(unsigned eBSItemFiltersIndex = 0; eBSItemFiltersIndex < eBSItemFiltersJsonList.GetLength(); ++eBSItemFiltersIndex)
    {
      m_eBSItemFilters.push_back(eBSItemFiltersJsonList[eBSItemFiltersIndex].AsObject());
    }
    m_eBSItemFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue ItemFilters::Jsonize() const
{
  JsonValue payload;

  if(m_s3ItemFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3ItemFiltersJsonList(m_s3ItemFilters.size());
   for(unsigned s3ItemFiltersIndex = 0; s3ItemFiltersIndex < s3ItemFiltersJsonList.GetLength(); ++s3ItemFiltersIndex)
   {
     s3ItemFiltersJsonList[s3ItemFiltersIndex].AsObject(m_s3ItemFilters[s3ItemFiltersIndex].Jsonize());
   }
   payload.WithArray("S3ItemFilters", std::move(s3ItemFiltersJsonList));

  }

  if(m_eBSItemFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eBSItemFiltersJsonList(m_eBSItemFilters.size());
   for(unsigned eBSItemFiltersIndex = 0; eBSItemFiltersIndex < eBSItemFiltersJsonList.GetLength(); ++eBSItemFiltersIndex)
   {
     eBSItemFiltersJsonList[eBSItemFiltersIndex].AsObject(m_eBSItemFilters[eBSItemFiltersIndex].Jsonize());
   }
   payload.WithArray("EBSItemFilters", std::move(eBSItemFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
