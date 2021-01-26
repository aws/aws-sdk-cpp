/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionOriginGroup.h>
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

AwsCloudFrontDistributionOriginGroup::AwsCloudFrontDistributionOriginGroup() : 
    m_failoverCriteriaHasBeenSet(false)
{
}

AwsCloudFrontDistributionOriginGroup::AwsCloudFrontDistributionOriginGroup(JsonView jsonValue) : 
    m_failoverCriteriaHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionOriginGroup& AwsCloudFrontDistributionOriginGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailoverCriteria"))
  {
    m_failoverCriteria = jsonValue.GetObject("FailoverCriteria");

    m_failoverCriteriaHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionOriginGroup::Jsonize() const
{
  JsonValue payload;

  if(m_failoverCriteriaHasBeenSet)
  {
   payload.WithObject("FailoverCriteria", m_failoverCriteria.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
