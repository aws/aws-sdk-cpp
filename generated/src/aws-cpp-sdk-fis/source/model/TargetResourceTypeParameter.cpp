/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/TargetResourceTypeParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

TargetResourceTypeParameter::TargetResourceTypeParameter() : 
    m_descriptionHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false)
{
}

TargetResourceTypeParameter::TargetResourceTypeParameter(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false)
{
  *this = jsonValue;
}

TargetResourceTypeParameter& TargetResourceTypeParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");

    m_requiredHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetResourceTypeParameter::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
