/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/Source.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

Source::Source() : 
    m_eksConfigurationHasBeenSet(false)
{
}

Source::Source(JsonView jsonValue) : 
    m_eksConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Source& Source::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eksConfiguration"))
  {
    m_eksConfiguration = jsonValue.GetObject("eksConfiguration");

    m_eksConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Source::Jsonize() const
{
  JsonValue payload;

  if(m_eksConfigurationHasBeenSet)
  {
   payload.WithObject("eksConfiguration", m_eksConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
