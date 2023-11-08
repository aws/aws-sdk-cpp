/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/KubernetesPermissionCheckedDetails.h>
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

KubernetesPermissionCheckedDetails::KubernetesPermissionCheckedDetails() : 
    m_verbHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_allowed(false),
    m_allowedHasBeenSet(false)
{
}

KubernetesPermissionCheckedDetails::KubernetesPermissionCheckedDetails(JsonView jsonValue) : 
    m_verbHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_allowed(false),
    m_allowedHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesPermissionCheckedDetails& KubernetesPermissionCheckedDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("verb"))
  {
    m_verb = jsonValue.GetString("verb");

    m_verbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowed"))
  {
    m_allowed = jsonValue.GetBool("allowed");

    m_allowedHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesPermissionCheckedDetails::Jsonize() const
{
  JsonValue payload;

  if(m_verbHasBeenSet)
  {
   payload.WithString("verb", m_verb);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_allowedHasBeenSet)
  {
   payload.WithBool("allowed", m_allowed);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
