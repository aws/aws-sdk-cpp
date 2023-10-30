/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/DataUpdateRequestDetails.h>
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

DataUpdateRequestDetails::DataUpdateRequestDetails() : 
    m_dataUpdatedAtHasBeenSet(false)
{
}

DataUpdateRequestDetails::DataUpdateRequestDetails(JsonView jsonValue) : 
    m_dataUpdatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DataUpdateRequestDetails& DataUpdateRequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataUpdatedAt"))
  {
    m_dataUpdatedAt = jsonValue.GetString("DataUpdatedAt");

    m_dataUpdatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DataUpdateRequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dataUpdatedAtHasBeenSet)
  {
   payload.WithString("DataUpdatedAt", m_dataUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
