/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/managedblockchain/model/Member.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

Member::Member() : 
    m_networkIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_frameworkAttributesHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_networkIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_frameworkAttributesHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

Member& Member::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkId"))
  {
    m_networkId = jsonValue.GetString("NetworkId");

    m_networkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FrameworkAttributes"))
  {
    m_frameworkAttributes = jsonValue.GetObject("FrameworkAttributes");

    m_frameworkAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MemberStatusMapper::GetMemberStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Member::Jsonize() const
{
  JsonValue payload;

  if(m_networkIdHasBeenSet)
  {
   payload.WithString("NetworkId", m_networkId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_frameworkAttributesHasBeenSet)
  {
   payload.WithObject("FrameworkAttributes", m_frameworkAttributes.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MemberStatusMapper::GetNameForMemberStatus(m_status));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
