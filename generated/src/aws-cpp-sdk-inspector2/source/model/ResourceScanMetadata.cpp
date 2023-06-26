/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceScanMetadata.h>
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

ResourceScanMetadata::ResourceScanMetadata() : 
    m_ec2HasBeenSet(false),
    m_ecrImageHasBeenSet(false),
    m_ecrRepositoryHasBeenSet(false),
    m_lambdaFunctionHasBeenSet(false)
{
}

ResourceScanMetadata::ResourceScanMetadata(JsonView jsonValue) : 
    m_ec2HasBeenSet(false),
    m_ecrImageHasBeenSet(false),
    m_ecrRepositoryHasBeenSet(false),
    m_lambdaFunctionHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceScanMetadata& ResourceScanMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ec2"))
  {
    m_ec2 = jsonValue.GetObject("ec2");

    m_ec2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrImage"))
  {
    m_ecrImage = jsonValue.GetObject("ecrImage");

    m_ecrImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrRepository"))
  {
    m_ecrRepository = jsonValue.GetObject("ecrRepository");

    m_ecrRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunction"))
  {
    m_lambdaFunction = jsonValue.GetObject("lambdaFunction");

    m_lambdaFunctionHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceScanMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_ec2HasBeenSet)
  {
   payload.WithObject("ec2", m_ec2.Jsonize());

  }

  if(m_ecrImageHasBeenSet)
  {
   payload.WithObject("ecrImage", m_ecrImage.Jsonize());

  }

  if(m_ecrRepositoryHasBeenSet)
  {
   payload.WithObject("ecrRepository", m_ecrRepository.Jsonize());

  }

  if(m_lambdaFunctionHasBeenSet)
  {
   payload.WithObject("lambdaFunction", m_lambdaFunction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
