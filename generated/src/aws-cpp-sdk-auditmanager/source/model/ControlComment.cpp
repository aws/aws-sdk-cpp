/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ControlComment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

ControlComment::ControlComment() : 
    m_authorNameHasBeenSet(false),
    m_commentBodyHasBeenSet(false),
    m_postedDateHasBeenSet(false)
{
}

ControlComment::ControlComment(JsonView jsonValue) : 
    m_authorNameHasBeenSet(false),
    m_commentBodyHasBeenSet(false),
    m_postedDateHasBeenSet(false)
{
  *this = jsonValue;
}

ControlComment& ControlComment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorName"))
  {
    m_authorName = jsonValue.GetString("authorName");

    m_authorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("commentBody"))
  {
    m_commentBody = jsonValue.GetString("commentBody");

    m_commentBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postedDate"))
  {
    m_postedDate = jsonValue.GetDouble("postedDate");

    m_postedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ControlComment::Jsonize() const
{
  JsonValue payload;

  if(m_authorNameHasBeenSet)
  {
   payload.WithString("authorName", m_authorName);

  }

  if(m_commentBodyHasBeenSet)
  {
   payload.WithString("commentBody", m_commentBody);

  }

  if(m_postedDateHasBeenSet)
  {
   payload.WithDouble("postedDate", m_postedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
