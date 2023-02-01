/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksContainerVolumeMount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksContainerVolumeMount::EksContainerVolumeMount() : 
    m_nameHasBeenSet(false),
    m_mountPathHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false)
{
}

EksContainerVolumeMount::EksContainerVolumeMount(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_mountPathHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false)
{
  *this = jsonValue;
}

EksContainerVolumeMount& EksContainerVolumeMount::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("readOnly"))
  {
    m_readOnly = jsonValue.GetBool("readOnly");

    m_readOnlyHasBeenSet = true;
  }

  return *this;
}

JsonValue EksContainerVolumeMount::Jsonize() const
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

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("readOnly", m_readOnly);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
