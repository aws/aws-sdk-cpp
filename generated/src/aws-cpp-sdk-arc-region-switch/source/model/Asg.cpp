/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Asg.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

Asg::Asg(JsonView jsonValue)
{
  *this = jsonValue;
}

Asg& Asg::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("crossAccountRole"))
  {
    m_crossAccountRole = jsonValue.GetString("crossAccountRole");
    m_crossAccountRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");
    m_externalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  return *this;
}

JsonValue Asg::Jsonize() const
{
  JsonValue payload;

  if(m_crossAccountRoleHasBeenSet)
  {
   payload.WithString("crossAccountRole", m_crossAccountRole);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
