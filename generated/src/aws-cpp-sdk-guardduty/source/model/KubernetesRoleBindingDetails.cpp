/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesRoleBindingDetails.h>
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

KubernetesRoleBindingDetails::KubernetesRoleBindingDetails() : 
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_roleRefNameHasBeenSet(false),
    m_roleRefKindHasBeenSet(false)
{
}

KubernetesRoleBindingDetails::KubernetesRoleBindingDetails(JsonView jsonValue) : 
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_roleRefNameHasBeenSet(false),
    m_roleRefKindHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesRoleBindingDetails& KubernetesRoleBindingDetails::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("roleRefName"))
  {
    m_roleRefName = jsonValue.GetString("roleRefName");

    m_roleRefNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleRefKind"))
  {
    m_roleRefKind = jsonValue.GetString("roleRefKind");

    m_roleRefKindHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesRoleBindingDetails::Jsonize() const
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

  if(m_roleRefNameHasBeenSet)
  {
   payload.WithString("roleRefName", m_roleRefName);

  }

  if(m_roleRefKindHasBeenSet)
  {
   payload.WithString("roleRefKind", m_roleRefKind);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
