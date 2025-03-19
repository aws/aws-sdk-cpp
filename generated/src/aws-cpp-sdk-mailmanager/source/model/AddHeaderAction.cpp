/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/AddHeaderAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

AddHeaderAction::AddHeaderAction(JsonView jsonValue)
{
  *this = jsonValue;
}

AddHeaderAction& AddHeaderAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HeaderName"))
  {
    m_headerName = jsonValue.GetString("HeaderName");
    m_headerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HeaderValue"))
  {
    m_headerValue = jsonValue.GetString("HeaderValue");
    m_headerValueHasBeenSet = true;
  }
  return *this;
}

JsonValue AddHeaderAction::Jsonize() const
{
  JsonValue payload;

  if(m_headerNameHasBeenSet)
  {
   payload.WithString("HeaderName", m_headerName);

  }

  if(m_headerValueHasBeenSet)
  {
   payload.WithString("HeaderValue", m_headerValue);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
