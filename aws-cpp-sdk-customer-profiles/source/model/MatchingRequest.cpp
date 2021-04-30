/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/MatchingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

MatchingRequest::MatchingRequest() : 
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

MatchingRequest::MatchingRequest(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

MatchingRequest& MatchingRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchingRequest::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
