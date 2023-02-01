/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AllowListStatus.h>
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

AllowListStatus::AllowListStatus() : 
    m_code(AllowListStatusCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

AllowListStatus::AllowListStatus(JsonView jsonValue) : 
    m_code(AllowListStatusCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

AllowListStatus& AllowListStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = AllowListStatusCodeMapper::GetAllowListStatusCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue AllowListStatus::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", AllowListStatusCodeMapper::GetNameForAllowListStatusCode(m_code));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
