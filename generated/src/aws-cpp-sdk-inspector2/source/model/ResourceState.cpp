/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ResourceState::ResourceState() : 
    m_ec2HasBeenSet(false),
    m_ecrHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
}

ResourceState::ResourceState(JsonView jsonValue) : 
    m_ec2HasBeenSet(false),
    m_ecrHasBeenSet(false),
    m_lambdaHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceState& ResourceState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ec2"))
  {
    m_ec2 = jsonValue.GetObject("ec2");

    m_ec2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecr"))
  {
    m_ecr = jsonValue.GetObject("ecr");

    m_ecrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambda"))
  {
    m_lambda = jsonValue.GetObject("lambda");

    m_lambdaHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceState::Jsonize() const
{
  JsonValue payload;

  if(m_ec2HasBeenSet)
  {
   payload.WithObject("ec2", m_ec2.Jsonize());

  }

  if(m_ecrHasBeenSet)
  {
   payload.WithObject("ecr", m_ecr.Jsonize());

  }

  if(m_lambdaHasBeenSet)
  {
   payload.WithObject("lambda", m_lambda.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
