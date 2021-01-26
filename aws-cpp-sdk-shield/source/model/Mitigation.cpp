/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/Mitigation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

Mitigation::Mitigation() : 
    m_mitigationNameHasBeenSet(false)
{
}

Mitigation::Mitigation(JsonView jsonValue) : 
    m_mitigationNameHasBeenSet(false)
{
  *this = jsonValue;
}

Mitigation& Mitigation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MitigationName"))
  {
    m_mitigationName = jsonValue.GetString("MitigationName");

    m_mitigationNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Mitigation::Jsonize() const
{
  JsonValue payload;

  if(m_mitigationNameHasBeenSet)
  {
   payload.WithString("MitigationName", m_mitigationName);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
