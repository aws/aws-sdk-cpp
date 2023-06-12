/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenJobRenderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

CodegenJobRenderConfig::CodegenJobRenderConfig() : 
    m_reactHasBeenSet(false)
{
}

CodegenJobRenderConfig::CodegenJobRenderConfig(JsonView jsonValue) : 
    m_reactHasBeenSet(false)
{
  *this = jsonValue;
}

CodegenJobRenderConfig& CodegenJobRenderConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("react"))
  {
    m_react = jsonValue.GetObject("react");

    m_reactHasBeenSet = true;
  }

  return *this;
}

JsonValue CodegenJobRenderConfig::Jsonize() const
{
  JsonValue payload;

  if(m_reactHasBeenSet)
  {
   payload.WithObject("react", m_react.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
