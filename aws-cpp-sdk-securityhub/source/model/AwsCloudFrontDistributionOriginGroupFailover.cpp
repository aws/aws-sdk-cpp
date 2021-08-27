/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionOriginGroupFailover.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCloudFrontDistributionOriginGroupFailover::AwsCloudFrontDistributionOriginGroupFailover() : 
    m_statusCodesHasBeenSet(false)
{
}

AwsCloudFrontDistributionOriginGroupFailover::AwsCloudFrontDistributionOriginGroupFailover(JsonView jsonValue) : 
    m_statusCodesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionOriginGroupFailover& AwsCloudFrontDistributionOriginGroupFailover::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatusCodes"))
  {
    m_statusCodes = jsonValue.GetObject("StatusCodes");

    m_statusCodesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionOriginGroupFailover::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodesHasBeenSet)
  {
   payload.WithObject("StatusCodes", m_statusCodes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
