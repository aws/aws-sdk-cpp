/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/BillingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

BillingDetails::BillingDetails() : 
    m_billedMemoryUsedInMB(0),
    m_billedMemoryUsedInMBHasBeenSet(false),
    m_billedDurationInMilliseconds(0),
    m_billedDurationInMillisecondsHasBeenSet(false)
{
}

BillingDetails::BillingDetails(JsonView jsonValue) : 
    m_billedMemoryUsedInMB(0),
    m_billedMemoryUsedInMBHasBeenSet(false),
    m_billedDurationInMilliseconds(0),
    m_billedDurationInMillisecondsHasBeenSet(false)
{
  *this = jsonValue;
}

BillingDetails& BillingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("billedMemoryUsedInMB"))
  {
    m_billedMemoryUsedInMB = jsonValue.GetInt64("billedMemoryUsedInMB");

    m_billedMemoryUsedInMBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("billedDurationInMilliseconds"))
  {
    m_billedDurationInMilliseconds = jsonValue.GetInt64("billedDurationInMilliseconds");

    m_billedDurationInMillisecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue BillingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_billedMemoryUsedInMBHasBeenSet)
  {
   payload.WithInt64("billedMemoryUsedInMB", m_billedMemoryUsedInMB);

  }

  if(m_billedDurationInMillisecondsHasBeenSet)
  {
   payload.WithInt64("billedDurationInMilliseconds", m_billedDurationInMilliseconds);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
