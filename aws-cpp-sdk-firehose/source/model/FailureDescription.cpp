/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/FailureDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

FailureDescription::FailureDescription() : 
    m_type(DeliveryStreamFailureType::NOT_SET),
    m_typeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

FailureDescription::FailureDescription(JsonView jsonValue) : 
    m_type(DeliveryStreamFailureType::NOT_SET),
    m_typeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

FailureDescription& FailureDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DeliveryStreamFailureTypeMapper::GetDeliveryStreamFailureTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetString("Details");

    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue FailureDescription::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DeliveryStreamFailureTypeMapper::GetNameForDeliveryStreamFailureType(m_type));
  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("Details", m_details);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
