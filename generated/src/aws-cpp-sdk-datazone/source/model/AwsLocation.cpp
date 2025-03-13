/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AwsLocation.h>
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

AwsLocation::AwsLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsLocation& AwsLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessRole"))
  {
    m_accessRole = jsonValue.GetString("accessRole");
    m_accessRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsRegion"))
  {
    m_awsRegion = jsonValue.GetString("awsRegion");
    m_awsRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamConnectionId"))
  {
    m_iamConnectionId = jsonValue.GetString("iamConnectionId");
    m_iamConnectionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsLocation::Jsonize() const
{
  JsonValue payload;

  if(m_accessRoleHasBeenSet)
  {
   payload.WithString("accessRole", m_accessRole);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_iamConnectionIdHasBeenSet)
  {
   payload.WithString("iamConnectionId", m_iamConnectionId);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
