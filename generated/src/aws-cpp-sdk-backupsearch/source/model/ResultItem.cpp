/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/ResultItem.h>
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

ResultItem::ResultItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ResultItem& ResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ResultItem"))
  {
    m_s3ResultItem = jsonValue.GetObject("S3ResultItem");
    m_s3ResultItemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EBSResultItem"))
  {
    m_eBSResultItem = jsonValue.GetObject("EBSResultItem");
    m_eBSResultItemHasBeenSet = true;
  }
  return *this;
}

JsonValue ResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_s3ResultItemHasBeenSet)
  {
   payload.WithObject("S3ResultItem", m_s3ResultItem.Jsonize());

  }

  if(m_eBSResultItemHasBeenSet)
  {
   payload.WithObject("EBSResultItem", m_eBSResultItem.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
