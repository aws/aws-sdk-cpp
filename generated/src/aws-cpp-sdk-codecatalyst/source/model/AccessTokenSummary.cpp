/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/AccessTokenSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

AccessTokenSummary::AccessTokenSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_expiresTimeHasBeenSet(false)
{
}

AccessTokenSummary::AccessTokenSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_expiresTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AccessTokenSummary& AccessTokenSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiresTime"))
  {
    m_expiresTime = jsonValue.GetString("expiresTime");

    m_expiresTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessTokenSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_expiresTimeHasBeenSet)
  {
   payload.WithString("expiresTime", m_expiresTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
