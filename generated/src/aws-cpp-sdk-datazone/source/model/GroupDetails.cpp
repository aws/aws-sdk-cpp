/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GroupDetails.h>
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

GroupDetails::GroupDetails() : 
    m_groupIdHasBeenSet(false)
{
}

GroupDetails::GroupDetails(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false)
{
  *this = jsonValue;
}

GroupDetails& GroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupId"))
  {
    m_groupId = jsonValue.GetString("groupId");

    m_groupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("groupId", m_groupId);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
