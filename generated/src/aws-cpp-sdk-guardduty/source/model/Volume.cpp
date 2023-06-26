/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Volume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Volume::Volume() : 
    m_nameHasBeenSet(false),
    m_hostPathHasBeenSet(false)
{
}

Volume::Volume(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_hostPathHasBeenSet(false)
{
  *this = jsonValue;
}

Volume& Volume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostPath"))
  {
    m_hostPath = jsonValue.GetObject("hostPath");

    m_hostPathHasBeenSet = true;
  }

  return *this;
}

JsonValue Volume::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_hostPathHasBeenSet)
  {
   payload.WithObject("hostPath", m_hostPath.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
