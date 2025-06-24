/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CompactionConfiguration.h>
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

CompactionConfiguration::CompactionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CompactionConfiguration& CompactionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("icebergConfiguration"))
  {
    m_icebergConfiguration = jsonValue.GetObject("icebergConfiguration");
    m_icebergConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CompactionConfiguration::Jsonize() const
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
