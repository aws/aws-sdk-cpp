/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesRoleDetails.h>
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

KubernetesRoleDetails::KubernetesRoleDetails() : 
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false)
{
}

KubernetesRoleDetails::KubernetesRoleDetails(JsonView jsonValue) : 
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesRoleDetails& KubernetesRoleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kind"))
  {
    m_kind = jsonValue.GetString("kind");

    m_kindHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uid"))
  {
    m_uid = jsonValue.GetString("uid");

    m_uidHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesRoleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_kindHasBeenSet)
  {
   payload.WithString("kind", m_kind);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_uidHasBeenSet)
  {
   payload.WithString("uid", m_uid);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
