/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/LastRunErrorStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

LastRunErrorStatus::LastRunErrorStatus() : 
    m_code(LastRunErrorStatusCode::NOT_SET),
    m_codeHasBeenSet(false)
{
}

LastRunErrorStatus::LastRunErrorStatus(JsonView jsonValue) : 
    m_code(LastRunErrorStatusCode::NOT_SET),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

LastRunErrorStatus& LastRunErrorStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = LastRunErrorStatusCodeMapper::GetLastRunErrorStatusCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue LastRunErrorStatus::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", LastRunErrorStatusCodeMapper::GetNameForLastRunErrorStatusCode(m_code));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
