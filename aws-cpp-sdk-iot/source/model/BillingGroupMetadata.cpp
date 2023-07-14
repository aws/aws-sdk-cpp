/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/BillingGroupMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

BillingGroupMetadata::BillingGroupMetadata() : 
    m_creationDateHasBeenSet(false)
{
}

BillingGroupMetadata::BillingGroupMetadata(JsonView jsonValue) : 
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

BillingGroupMetadata& BillingGroupMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue BillingGroupMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
