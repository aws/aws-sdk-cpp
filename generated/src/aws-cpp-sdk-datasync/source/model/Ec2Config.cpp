/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Ec2Config.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

Ec2Config::Ec2Config() : 
    m_subnetArnHasBeenSet(false),
    m_securityGroupArnsHasBeenSet(false)
{
}

Ec2Config::Ec2Config(JsonView jsonValue) : 
    m_subnetArnHasBeenSet(false),
    m_securityGroupArnsHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2Config& Ec2Config::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetArn"))
  {
    m_subnetArn = jsonValue.GetString("SubnetArn");

    m_subnetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupArns"))
  {
    Aws::Utils::Array<JsonView> securityGroupArnsJsonList = jsonValue.GetArray("SecurityGroupArns");
    for(unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex)
    {
      m_securityGroupArns.push_back(securityGroupArnsJsonList[securityGroupArnsIndex].AsString());
    }
    m_securityGroupArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2Config::Jsonize() const
{
  JsonValue payload;

  if(m_subnetArnHasBeenSet)
  {
   payload.WithString("SubnetArn", m_subnetArn);

  }

  if(m_securityGroupArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupArnsJsonList(m_securityGroupArns.size());
   for(unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex)
   {
     securityGroupArnsJsonList[securityGroupArnsIndex].AsString(m_securityGroupArns[securityGroupArnsIndex]);
   }
   payload.WithArray("SecurityGroupArns", std::move(securityGroupArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
