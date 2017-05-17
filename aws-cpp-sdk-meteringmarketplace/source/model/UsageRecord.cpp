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

#include <aws/meteringmarketplace/model/UsageRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

UsageRecord::UsageRecord() : 
    m_timestampHasBeenSet(false),
    m_customerIdentifierHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false)
{
}

UsageRecord::UsageRecord(const JsonValue& jsonValue) : 
    m_timestampHasBeenSet(false),
    m_customerIdentifierHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false)
{
  *this = jsonValue;
}

UsageRecord& UsageRecord::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerIdentifier"))
  {
    m_customerIdentifier = jsonValue.GetString("CustomerIdentifier");

    m_customerIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimension"))
  {
    m_dimension = jsonValue.GetString("Dimension");

    m_dimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Quantity"))
  {
    m_quantity = jsonValue.GetInteger("Quantity");

    m_quantityHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageRecord::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_customerIdentifierHasBeenSet)
  {
   payload.WithString("CustomerIdentifier", m_customerIdentifier);

  }

  if(m_dimensionHasBeenSet)
  {
   payload.WithString("Dimension", m_dimension);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInteger("Quantity", m_quantity);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws