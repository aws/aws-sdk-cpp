/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SupportedFieldTypeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SupportedFieldTypeDetails::SupportedFieldTypeDetails() : 
    m_v1HasBeenSet(false)
{
}

SupportedFieldTypeDetails::SupportedFieldTypeDetails(JsonView jsonValue) : 
    m_v1HasBeenSet(false)
{
  *this = jsonValue;
}

SupportedFieldTypeDetails& SupportedFieldTypeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("v1"))
  {
    m_v1 = jsonValue.GetObject("v1");

    m_v1HasBeenSet = true;
  }

  return *this;
}

JsonValue SupportedFieldTypeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_v1HasBeenSet)
  {
   payload.WithObject("v1", m_v1.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
