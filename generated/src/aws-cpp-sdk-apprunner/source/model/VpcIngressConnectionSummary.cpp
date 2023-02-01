/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/VpcIngressConnectionSummary.h>
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

VpcIngressConnectionSummary::VpcIngressConnectionSummary() : 
    m_vpcIngressConnectionArnHasBeenSet(false),
    m_serviceArnHasBeenSet(false)
{
}

VpcIngressConnectionSummary::VpcIngressConnectionSummary(JsonView jsonValue) : 
    m_vpcIngressConnectionArnHasBeenSet(false),
    m_serviceArnHasBeenSet(false)
{
  *this = jsonValue;
}

VpcIngressConnectionSummary& VpcIngressConnectionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcIngressConnectionArn"))
  {
    m_vpcIngressConnectionArn = jsonValue.GetString("VpcIngressConnectionArn");

    m_vpcIngressConnectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceArn"))
  {
    m_serviceArn = jsonValue.GetString("ServiceArn");

    m_serviceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcIngressConnectionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_vpcIngressConnectionArnHasBeenSet)
  {
   payload.WithString("VpcIngressConnectionArn", m_vpcIngressConnectionArn);

  }

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
