/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RetentionConfiguration.h>
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

RetentionConfiguration::RetentionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RetentionConfiguration& RetentionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("icebergConfiguration"))
  {
    m_icebergConfiguration = jsonValue.GetObject("icebergConfiguration");
    m_icebergConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RetentionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_icebergConfigurationHasBeenSet)
  {
   payload.WithObject("icebergConfiguration", m_icebergConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
