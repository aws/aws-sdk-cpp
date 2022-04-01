/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/NetworkAnalyzerConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

NetworkAnalyzerConfigurations::NetworkAnalyzerConfigurations() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

NetworkAnalyzerConfigurations::NetworkAnalyzerConfigurations(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkAnalyzerConfigurations& NetworkAnalyzerConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkAnalyzerConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
