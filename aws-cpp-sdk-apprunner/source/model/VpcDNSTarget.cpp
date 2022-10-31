/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/VpcDNSTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

VpcDNSTarget::VpcDNSTarget() : 
    m_vpcIngressConnectionArnHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

VpcDNSTarget::VpcDNSTarget(JsonView jsonValue) : 
    m_vpcIngressConnectionArnHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
  *this = jsonValue;
}

VpcDNSTarget& VpcDNSTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcIngressConnectionArn"))
  {
    m_vpcIngressConnectionArn = jsonValue.GetString("VpcIngressConnectionArn");

    m_vpcIngressConnectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcDNSTarget::Jsonize() const
{
  JsonValue payload;

  if(m_vpcIngressConnectionArnHasBeenSet)
  {
   payload.WithString("VpcIngressConnectionArn", m_vpcIngressConnectionArn);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
