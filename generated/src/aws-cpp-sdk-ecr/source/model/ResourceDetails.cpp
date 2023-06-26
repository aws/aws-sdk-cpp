/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ResourceDetails::ResourceDetails() : 
    m_awsEcrContainerImageHasBeenSet(false)
{
}

ResourceDetails::ResourceDetails(JsonView jsonValue) : 
    m_awsEcrContainerImageHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDetails& ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsEcrContainerImage"))
  {
    m_awsEcrContainerImage = jsonValue.GetObject("awsEcrContainerImage");

    m_awsEcrContainerImageHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_awsEcrContainerImageHasBeenSet)
  {
   payload.WithObject("awsEcrContainerImage", m_awsEcrContainerImage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
