/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/HttpRedirect.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACM
{
namespace Model
{

HttpRedirect::HttpRedirect(JsonView jsonValue)
{
  *this = jsonValue;
}

HttpRedirect& HttpRedirect::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RedirectFrom"))
  {
    m_redirectFrom = jsonValue.GetString("RedirectFrom");
    m_redirectFromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedirectTo"))
  {
    m_redirectTo = jsonValue.GetString("RedirectTo");
    m_redirectToHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpRedirect::Jsonize() const
{
  JsonValue payload;

  if(m_redirectFromHasBeenSet)
  {
   payload.WithString("RedirectFrom", m_redirectFrom);

  }

  if(m_redirectToHasBeenSet)
  {
   payload.WithString("RedirectTo", m_redirectTo);

  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
