/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/DeprecationRequestDetails.h>
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

DeprecationRequestDetails::DeprecationRequestDetails() : 
    m_deprecationAtHasBeenSet(false)
{
}

DeprecationRequestDetails::DeprecationRequestDetails(JsonView jsonValue) : 
    m_deprecationAtHasBeenSet(false)
{
  *this = jsonValue;
}

DeprecationRequestDetails& DeprecationRequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeprecationAt"))
  {
    m_deprecationAt = jsonValue.GetString("DeprecationAt");

    m_deprecationAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DeprecationRequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_deprecationAtHasBeenSet)
  {
   payload.WithString("DeprecationAt", m_deprecationAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
