/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/Topic.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

Topic::Topic() : 
    m_resourceHasBeenSet(false),
    m_role(NotificationRole::NOT_SET),
    m_roleHasBeenSet(false),
    m_subjectHasBeenSet(false)
{
}

Topic::Topic(JsonView jsonValue) : 
    m_resourceHasBeenSet(false),
    m_role(NotificationRole::NOT_SET),
    m_roleHasBeenSet(false),
    m_subjectHasBeenSet(false)
{
  *this = jsonValue;
}

Topic& Topic::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("role"))
  {
    m_role = NotificationRoleMapper::GetNotificationRoleForName(jsonValue.GetString("role"));

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subject"))
  {
    m_subject = jsonValue.GetString("subject");

    m_subjectHasBeenSet = true;
  }

  return *this;
}

JsonValue Topic::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", NotificationRoleMapper::GetNameForNotificationRole(m_role));
  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("subject", m_subject);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
