/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/URL.h>
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

URL::URL() : 
    m_hyperlinkNameHasBeenSet(false),
    m_linkHasBeenSet(false)
{
}

URL::URL(JsonView jsonValue) : 
    m_hyperlinkNameHasBeenSet(false),
    m_linkHasBeenSet(false)
{
  *this = jsonValue;
}

URL& URL::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hyperlinkName"))
  {
    m_hyperlinkName = jsonValue.GetString("hyperlinkName");

    m_hyperlinkNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("link"))
  {
    m_link = jsonValue.GetString("link");

    m_linkHasBeenSet = true;
  }

  return *this;
}

JsonValue URL::Jsonize() const
{
  JsonValue payload;

  if(m_hyperlinkNameHasBeenSet)
  {
   payload.WithString("hyperlinkName", m_hyperlinkName);

  }

  if(m_linkHasBeenSet)
  {
   payload.WithString("link", m_link);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
