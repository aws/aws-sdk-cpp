/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/Integration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

Integration::Integration(JsonView jsonValue)
{
  *this = jsonValue;
}

Integration& Integration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceName"))
  {
    m_dataSourceName = jsonValue.GetString("dataSourceName");
    m_dataSourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lambdaConfig"))
  {
    m_lambdaConfig = jsonValue.GetObject("lambdaConfig");
    m_lambdaConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue Integration::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceNameHasBeenSet)
  {
   payload.WithString("dataSourceName", m_dataSourceName);

  }

  if(m_lambdaConfigHasBeenSet)
  {
   payload.WithObject("lambdaConfig", m_lambdaConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
