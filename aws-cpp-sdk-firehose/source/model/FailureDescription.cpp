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
