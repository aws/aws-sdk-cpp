/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnvironmentResolvedAccount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

EnvironmentResolvedAccount::EnvironmentResolvedAccount(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentResolvedAccount& EnvironmentResolvedAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionName"))
  {
    m_regionName = jsonValue.GetString("regionName");
    m_regionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceAccountPoolId"))
  {
    m_sourceAccountPoolId = jsonValue.GetString("sourceAccountPoolId");
    m_sourceAccountPoolIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentResolvedAccount::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("regionName", m_regionName);

  }

  if(m_sourceAccountPoolIdHasBeenSet)
  {
   payload.WithString("sourceAccountPoolId", m_sourceAccountPoolId);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
