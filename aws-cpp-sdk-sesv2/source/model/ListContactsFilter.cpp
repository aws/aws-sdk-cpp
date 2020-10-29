/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListContactsFilter.h>
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

ListContactsFilter::ListContactsFilter() : 
    m_filteredStatus(SubscriptionStatus::NOT_SET),
    m_filteredStatusHasBeenSet(false),
    m_topicFilterHasBeenSet(false)
{
}

ListContactsFilter::ListContactsFilter(JsonView jsonValue) : 
    m_filteredStatus(SubscriptionStatus::NOT_SET),
    m_filteredStatusHasBeenSet(false),
    m_topicFilterHasBeenSet(false)
{
  *this = jsonValue;
}

ListContactsFilter& ListContactsFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilteredStatus"))
  {
    m_filteredStatus = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("FilteredStatus"));

    m_filteredStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicFilter"))
  {
    m_topicFilter = jsonValue.GetObject("TopicFilter");

    m_topicFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue ListContactsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filteredStatusHasBeenSet)
  {
   payload.WithString("FilteredStatus", SubscriptionStatusMapper::GetNameForSubscriptionStatus(m_filteredStatus));
  }

  if(m_topicFilterHasBeenSet)
  {
   payload.WithObject("TopicFilter", m_topicFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
