/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AthenaPropertiesInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AthenaPropertiesInput::AthenaPropertiesInput(JsonView jsonValue)
{
  *this = jsonValue;
}

AthenaPropertiesInput& AthenaPropertiesInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workgroupName"))
  {
    m_workgroupName = jsonValue.GetString("workgroupName");
    m_workgroupNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AthenaPropertiesInput::Jsonize() const
{
  JsonValue payload;

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
