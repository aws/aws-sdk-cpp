/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ExecutionControls.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ExecutionControls::ExecutionControls() : 
    m_ssmControlsHasBeenSet(false)
{
}

ExecutionControls::ExecutionControls(JsonView jsonValue) : 
    m_ssmControlsHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionControls& ExecutionControls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SsmControls"))
  {
    m_ssmControls = jsonValue.GetObject("SsmControls");

    m_ssmControlsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionControls::Jsonize() const
{
  JsonValue payload;

  if(m_ssmControlsHasBeenSet)
  {
   payload.WithObject("SsmControls", m_ssmControls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
