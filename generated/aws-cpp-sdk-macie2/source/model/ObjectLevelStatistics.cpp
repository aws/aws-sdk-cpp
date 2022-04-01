/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ObjectLevelStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ObjectLevelStatistics::ObjectLevelStatistics() : 
    m_fileType(0),
    m_fileTypeHasBeenSet(false),
    m_storageClass(0),
    m_storageClassHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
}

ObjectLevelStatistics::ObjectLevelStatistics(JsonView jsonValue) : 
    m_fileType(0),
    m_fileTypeHasBeenSet(false),
    m_storageClass(0),
    m_storageClassHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectLevelStatistics& ObjectLevelStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = jsonValue.GetInt64("fileType");

    m_fileTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageClass"))
  {
    m_storageClass = jsonValue.GetInt64("storageClass");

    m_storageClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInt64("total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectLevelStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_fileTypeHasBeenSet)
  {
   payload.WithInt64("fileType", m_fileType);

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithInt64("storageClass", m_storageClass);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInt64("total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
