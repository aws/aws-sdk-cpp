/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ProfileQueryResult.h>
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

ProfileQueryResult::ProfileQueryResult(JsonView jsonValue)
{
  *this = jsonValue;
}

ProfileQueryResult& ProfileQueryResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileId"))
  {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryResult"))
  {
    m_queryResult = QueryResultMapper::GetQueryResultForName(jsonValue.GetString("QueryResult"));
    m_queryResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Profile"))
  {
    m_profile = jsonValue.GetObject("Profile");
    m_profileHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileQueryResult::Jsonize() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_queryResultHasBeenSet)
  {
   payload.WithString("QueryResult", QueryResultMapper::GetNameForQueryResult(m_queryResult));
  }

  if(m_profileHasBeenSet)
  {
   payload.WithObject("Profile", m_profile.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
