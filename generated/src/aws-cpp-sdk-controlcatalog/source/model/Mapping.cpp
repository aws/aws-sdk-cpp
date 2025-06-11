/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/Mapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

Mapping::Mapping(JsonView jsonValue)
{
  *this = jsonValue;
}

Mapping& Mapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Framework"))
  {
    m_framework = jsonValue.GetObject("Framework");
    m_frameworkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CommonControl"))
  {
    m_commonControl = jsonValue.GetObject("CommonControl");
    m_commonControlHasBeenSet = true;
  }
  return *this;
}

JsonValue Mapping::Jsonize() const
{
  JsonValue payload;

  if(m_frameworkHasBeenSet)
  {
   payload.WithObject("Framework", m_framework.Jsonize());

  }

  if(m_commonControlHasBeenSet)
  {
   payload.WithObject("CommonControl", m_commonControl.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
