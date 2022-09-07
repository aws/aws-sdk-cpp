/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ApiCallDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ApiCallDetails::ApiCallDetails() : 
    m_apiHasBeenSet(false),
    m_apiServiceNameHasBeenSet(false),
    m_firstSeenHasBeenSet(false),
    m_lastSeenHasBeenSet(false)
{
}

ApiCallDetails::ApiCallDetails(JsonView jsonValue) : 
    m_apiHasBeenSet(false),
    m_apiServiceNameHasBeenSet(false),
    m_firstSeenHasBeenSet(false),
    m_lastSeenHasBeenSet(false)
{
  *this = jsonValue;
}

ApiCallDetails& ApiCallDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("api"))
  {
    m_api = jsonValue.GetString("api");

    m_apiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiServiceName"))
  {
    m_apiServiceName = jsonValue.GetString("apiServiceName");

    m_apiServiceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstSeen"))
  {
    m_firstSeen = jsonValue.GetString("firstSeen");

    m_firstSeenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSeen"))
  {
    m_lastSeen = jsonValue.GetString("lastSeen");

    m_lastSeenHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiCallDetails::Jsonize() const
{
  JsonValue payload;

  if(m_apiHasBeenSet)
  {
   payload.WithString("api", m_api);

  }

  if(m_apiServiceNameHasBeenSet)
  {
   payload.WithString("apiServiceName", m_apiServiceName);

  }

  if(m_firstSeenHasBeenSet)
  {
   payload.WithString("firstSeen", m_firstSeen.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastSeenHasBeenSet)
  {
   payload.WithString("lastSeen", m_lastSeen.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
