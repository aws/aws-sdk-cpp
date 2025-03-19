/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Warning.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

Warning::Warning(JsonView jsonValue)
{
  *this = jsonValue;
}

Warning& Warning::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Code"))
  {
    m_code = WarningCodeMapper::GetWarningCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  return *this;
}

JsonValue Warning::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", WarningCodeMapper::GetNameForWarningCode(m_code));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
