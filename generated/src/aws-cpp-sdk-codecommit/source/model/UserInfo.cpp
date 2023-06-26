/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UserInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

UserInfo::UserInfo() : 
    m_nameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

UserInfo::UserInfo(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_dateHasBeenSet(false)
{
  *this = jsonValue;
}

UserInfo& UserInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("date"))
  {
    m_date = jsonValue.GetString("date");

    m_dateHasBeenSet = true;
  }

  return *this;
}

JsonValue UserInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_dateHasBeenSet)
  {
   payload.WithString("date", m_date);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
