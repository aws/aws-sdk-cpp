/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Step.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/arc-region-switch/model/ExecutionBlockConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

Step::Step(JsonView jsonValue)
{
  *this = jsonValue;
}

Step& Step::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionBlockConfiguration"))
  {
    m_executionBlockConfiguration = Aws::MakeShared<ExecutionBlockConfiguration>("Step", jsonValue.GetObject("executionBlockConfiguration"));
    m_executionBlockConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionBlockType"))
  {
    m_executionBlockType = ExecutionBlockTypeMapper::GetExecutionBlockTypeForName(jsonValue.GetString("executionBlockType"));
    m_executionBlockTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue Step::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_executionBlockConfigurationHasBeenSet)
  {
   payload.WithObject("executionBlockConfiguration", m_executionBlockConfiguration->Jsonize());

  }

  if(m_executionBlockTypeHasBeenSet)
  {
   payload.WithString("executionBlockType", ExecutionBlockTypeMapper::GetNameForExecutionBlockType(m_executionBlockType));
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
