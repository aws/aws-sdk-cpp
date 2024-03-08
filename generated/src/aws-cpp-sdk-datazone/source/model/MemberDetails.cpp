/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/MemberDetails.h>
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

MemberDetails::MemberDetails() : 
    m_groupHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

MemberDetails::MemberDetails(JsonView jsonValue) : 
    m_groupHasBeenSet(false),
    m_userHasBeenSet(false)
{
  *this = jsonValue;
}

MemberDetails& MemberDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetObject("group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetObject("user");

    m_userHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberDetails::Jsonize() const
{
  JsonValue payload;

  if(m_groupHasBeenSet)
  {
   payload.WithObject("group", m_group.Jsonize());

  }

  if(m_userHasBeenSet)
  {
   payload.WithObject("user", m_user.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
