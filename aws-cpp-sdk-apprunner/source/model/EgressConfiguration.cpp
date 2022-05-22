/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/EgressConfiguration.h>
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

EgressConfiguration::EgressConfiguration() : 
    m_egressType(EgressType::NOT_SET),
    m_egressTypeHasBeenSet(false),
    m_vpcConnectorArnHasBeenSet(false)
{
}

EgressConfiguration::EgressConfiguration(JsonView jsonValue) : 
    m_egressType(EgressType::NOT_SET),
    m_egressTypeHasBeenSet(false),
    m_vpcConnectorArnHasBeenSet(false)
{
  *this = jsonValue;
}

EgressConfiguration& EgressConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EgressType"))
  {
    m_egressType = EgressTypeMapper::GetEgressTypeForName(jsonValue.GetString("EgressType"));

    m_egressTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConnectorArn"))
  {
    m_vpcConnectorArn = jsonValue.GetString("VpcConnectorArn");

    m_vpcConnectorArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EgressConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_egressTypeHasBeenSet)
  {
   payload.WithString("EgressType", EgressTypeMapper::GetNameForEgressType(m_egressType));
  }

  if(m_vpcConnectorArnHasBeenSet)
  {
   payload.WithString("VpcConnectorArn", m_vpcConnectorArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
