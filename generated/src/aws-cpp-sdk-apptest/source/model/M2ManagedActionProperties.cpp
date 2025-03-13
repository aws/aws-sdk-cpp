/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2ManagedActionProperties.h>
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

M2ManagedActionProperties::M2ManagedActionProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

M2ManagedActionProperties& M2ManagedActionProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("forceStop"))
  {
    m_forceStop = jsonValue.GetBool("forceStop");
    m_forceStopHasBeenSet = true;
  }
  if(jsonValue.ValueExists("importDataSetLocation"))
  {
    m_importDataSetLocation = jsonValue.GetString("importDataSetLocation");
    m_importDataSetLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue M2ManagedActionProperties::Jsonize() const
{
  JsonValue payload;

  if(m_forceStopHasBeenSet)
  {
   payload.WithBool("forceStop", m_forceStop);

  }

  if(m_importDataSetLocationHasBeenSet)
  {
   payload.WithString("importDataSetLocation", m_importDataSetLocation);

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
