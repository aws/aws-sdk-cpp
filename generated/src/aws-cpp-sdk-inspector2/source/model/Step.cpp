/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Step.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Step::Step(JsonView jsonValue)
{
  *this = jsonValue;
}

Step& Step::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentId"))
  {
    m_componentId = jsonValue.GetString("componentId");
    m_componentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("componentType"))
  {
    m_componentType = jsonValue.GetString("componentType");
    m_componentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("componentArn"))
  {
    m_componentArn = jsonValue.GetString("componentArn");
    m_componentArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Step::Jsonize() const
{
  JsonValue payload;

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("componentId", m_componentId);

  }

  if(m_componentTypeHasBeenSet)
  {
   payload.WithString("componentType", m_componentType);

  }

  if(m_componentArnHasBeenSet)
  {
   payload.WithString("componentArn", m_componentArn);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
