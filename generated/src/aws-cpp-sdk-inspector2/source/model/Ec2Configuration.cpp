/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Ec2Configuration::Ec2Configuration(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2Configuration& Ec2Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanMode"))
  {
    m_scanMode = Ec2ScanModeMapper::GetEc2ScanModeForName(jsonValue.GetString("scanMode"));
    m_scanModeHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_scanModeHasBeenSet)
  {
   payload.WithString("scanMode", Ec2ScanModeMapper::GetNameForEc2ScanMode(m_scanMode));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
