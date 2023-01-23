/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/RedshiftDataShareAssetSourceEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

RedshiftDataShareAssetSourceEntry::RedshiftDataShareAssetSourceEntry() : 
    m_dataShareArnHasBeenSet(false)
{
}

RedshiftDataShareAssetSourceEntry::RedshiftDataShareAssetSourceEntry(JsonView jsonValue) : 
    m_dataShareArnHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftDataShareAssetSourceEntry& RedshiftDataShareAssetSourceEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataShareArn"))
  {
    m_dataShareArn = jsonValue.GetString("DataShareArn");

    m_dataShareArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftDataShareAssetSourceEntry::Jsonize() const
{
  JsonValue payload;

  if(m_dataShareArnHasBeenSet)
  {
   payload.WithString("DataShareArn", m_dataShareArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
