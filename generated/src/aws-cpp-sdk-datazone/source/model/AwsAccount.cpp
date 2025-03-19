/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AwsAccount.h>
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

AwsAccount::AwsAccount(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsAccount& AwsAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsAccountIdPath"))
  {
    m_awsAccountIdPath = jsonValue.GetString("awsAccountIdPath");
    m_awsAccountIdPathHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsAccount::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_awsAccountIdPathHasBeenSet)
  {
   payload.WithString("awsAccountIdPath", m_awsAccountIdPath);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
