/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QueueSearchFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

QueueSearchFilter::QueueSearchFilter() : 
    m_tagFilterHasBeenSet(false)
{
}

QueueSearchFilter::QueueSearchFilter(JsonView jsonValue) : 
    m_tagFilterHasBeenSet(false)
{
  *this = jsonValue;
}

QueueSearchFilter& QueueSearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TagFilter"))
  {
    m_tagFilter = jsonValue.GetObject("TagFilter");

    m_tagFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue QueueSearchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_tagFilterHasBeenSet)
  {
   payload.WithObject("TagFilter", m_tagFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
