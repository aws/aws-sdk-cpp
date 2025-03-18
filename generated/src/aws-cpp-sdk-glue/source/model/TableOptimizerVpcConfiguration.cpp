/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableOptimizerVpcConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TableOptimizerVpcConfiguration::TableOptimizerVpcConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TableOptimizerVpcConfiguration& TableOptimizerVpcConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("glueConnectionName"))
  {
    m_glueConnectionName = jsonValue.GetString("glueConnectionName");
    m_glueConnectionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue TableOptimizerVpcConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_glueConnectionNameHasBeenSet)
  {
   payload.WithString("glueConnectionName", m_glueConnectionName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
