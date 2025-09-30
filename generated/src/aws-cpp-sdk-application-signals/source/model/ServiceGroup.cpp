/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

ServiceGroup::ServiceGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceGroup& ServiceGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");
    m_groupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupValue"))
  {
    m_groupValue = jsonValue.GetString("GroupValue");
    m_groupValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupSource"))
  {
    m_groupSource = jsonValue.GetString("GroupSource");
    m_groupSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GroupIdentifier"))
  {
    m_groupIdentifier = jsonValue.GetString("GroupIdentifier");
    m_groupIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceGroup::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_groupValueHasBeenSet)
  {
   payload.WithString("GroupValue", m_groupValue);

  }

  if(m_groupSourceHasBeenSet)
  {
   payload.WithString("GroupSource", m_groupSource);

  }

  if(m_groupIdentifierHasBeenSet)
  {
   payload.WithString("GroupIdentifier", m_groupIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
