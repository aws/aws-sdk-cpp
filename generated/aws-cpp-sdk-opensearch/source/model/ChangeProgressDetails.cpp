/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ChangeProgressDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

ChangeProgressDetails::ChangeProgressDetails() : 
    m_changeIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ChangeProgressDetails::ChangeProgressDetails(JsonView jsonValue) : 
    m_changeIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeProgressDetails& ChangeProgressDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChangeId"))
  {
    m_changeId = jsonValue.GetString("ChangeId");

    m_changeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeProgressDetails::Jsonize() const
{
  JsonValue payload;

  if(m_changeIdHasBeenSet)
  {
   payload.WithString("ChangeId", m_changeId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
