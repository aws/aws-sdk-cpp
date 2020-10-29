/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListManagementOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ListManagementOptions::ListManagementOptions() : 
    m_contactListNameHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
}

ListManagementOptions::ListManagementOptions(JsonView jsonValue) : 
    m_contactListNameHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
  *this = jsonValue;
}

ListManagementOptions& ListManagementOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactListName"))
  {
    m_contactListName = jsonValue.GetString("ContactListName");

    m_contactListNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ListManagementOptions::Jsonize() const
{
  JsonValue payload;

  if(m_contactListNameHasBeenSet)
  {
   payload.WithString("ContactListName", m_contactListName);

  }

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
