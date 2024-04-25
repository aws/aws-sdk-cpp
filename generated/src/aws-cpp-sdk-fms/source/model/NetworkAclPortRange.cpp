/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkAclPortRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

NetworkAclPortRange::NetworkAclPortRange() : 
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false)
{
}

NetworkAclPortRange::NetworkAclPortRange(JsonView jsonValue) : 
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkAclPortRange& NetworkAclPortRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("From"))
  {
    m_from = jsonValue.GetInteger("From");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("To"))
  {
    m_to = jsonValue.GetInteger("To");

    m_toHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkAclPortRange::Jsonize() const
{
  JsonValue payload;

  if(m_fromHasBeenSet)
  {
   payload.WithInteger("From", m_from);

  }

  if(m_toHasBeenSet)
  {
   payload.WithInteger("To", m_to);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
