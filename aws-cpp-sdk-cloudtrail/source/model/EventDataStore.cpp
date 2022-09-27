/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/EventDataStore.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

EventDataStore::EventDataStore() : 
    m_eventDataStoreArnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

EventDataStore::EventDataStore(JsonView jsonValue) : 
    m_eventDataStoreArnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

EventDataStore& EventDataStore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventDataStoreArn"))
  {
    m_eventDataStoreArn = jsonValue.GetString("EventDataStoreArn");

    m_eventDataStoreArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue EventDataStore::Jsonize() const
{
  JsonValue payload;

  if(m_eventDataStoreArnHasBeenSet)
  {
   payload.WithString("EventDataStoreArn", m_eventDataStoreArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
