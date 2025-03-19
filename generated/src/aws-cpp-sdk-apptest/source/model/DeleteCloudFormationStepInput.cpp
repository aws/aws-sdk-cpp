/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/DeleteCloudFormationStepInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

DeleteCloudFormationStepInput::DeleteCloudFormationStepInput(JsonView jsonValue)
{
  *this = jsonValue;
}

DeleteCloudFormationStepInput& DeleteCloudFormationStepInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stackId"))
  {
    m_stackId = jsonValue.GetString("stackId");
    m_stackIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DeleteCloudFormationStepInput::Jsonize() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("stackId", m_stackId);

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
