/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

Event::Event() : 
    m_revisionPublishedHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_revisionPublishedHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RevisionPublished"))
  {
    m_revisionPublished = jsonValue.GetObject("RevisionPublished");

    m_revisionPublishedHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_revisionPublishedHasBeenSet)
  {
   payload.WithObject("RevisionPublished", m_revisionPublished.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
