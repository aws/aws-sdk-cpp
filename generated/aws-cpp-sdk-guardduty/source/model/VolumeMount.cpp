/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/VolumeMount.h>
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

VolumeMount::VolumeMount() : 
    m_nameHasBeenSet(false),
    m_mountPathHasBeenSet(false)
{
}

VolumeMount::VolumeMount(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_mountPathHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeMount& VolumeMount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountPath"))
  {
    m_mountPath = jsonValue.GetString("mountPath");

    m_mountPathHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeMount::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_mountPathHasBeenSet)
  {
   payload.WithString("mountPath", m_mountPath);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
