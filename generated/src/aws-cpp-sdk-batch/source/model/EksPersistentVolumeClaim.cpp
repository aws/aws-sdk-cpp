/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksPersistentVolumeClaim.h>
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

EksPersistentVolumeClaim::EksPersistentVolumeClaim(JsonView jsonValue)
{
  *this = jsonValue;
}

EksPersistentVolumeClaim& EksPersistentVolumeClaim::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("claimName"))
  {
    m_claimName = jsonValue.GetString("claimName");
    m_claimNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("readOnly"))
  {
    m_readOnly = jsonValue.GetBool("readOnly");
    m_readOnlyHasBeenSet = true;
  }
  return *this;
}

JsonValue EksPersistentVolumeClaim::Jsonize() const
{
  JsonValue payload;

  if(m_claimNameHasBeenSet)
  {
   payload.WithString("claimName", m_claimName);

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
