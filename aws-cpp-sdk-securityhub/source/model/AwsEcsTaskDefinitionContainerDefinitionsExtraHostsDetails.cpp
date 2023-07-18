/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails::AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails() : 
    m_hostnameHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails::AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_ipAddressHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails& AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Hostname"))
  {
    m_hostname = jsonValue.GetString("Hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
