/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpcEndpointServiceServiceTypeDetails.h>
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

AwsEc2VpcEndpointServiceServiceTypeDetails::AwsEc2VpcEndpointServiceServiceTypeDetails() : 
    m_serviceTypeHasBeenSet(false)
{
}

AwsEc2VpcEndpointServiceServiceTypeDetails::AwsEc2VpcEndpointServiceServiceTypeDetails(JsonView jsonValue) : 
    m_serviceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpcEndpointServiceServiceTypeDetails& AwsEc2VpcEndpointServiceServiceTypeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceType"))
  {
    m_serviceType = jsonValue.GetString("ServiceType");

    m_serviceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpcEndpointServiceServiceTypeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("ServiceType", m_serviceType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
