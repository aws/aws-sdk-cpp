/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceDetails.h>
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

ResourceDetails::ResourceDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceDetails& ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsEc2Instance"))
  {
    m_awsEc2Instance = jsonValue.GetObject("awsEc2Instance");
    m_awsEc2InstanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsEcrContainerImage"))
  {
    m_awsEcrContainerImage = jsonValue.GetObject("awsEcrContainerImage");
    m_awsEcrContainerImageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsLambdaFunction"))
  {
    m_awsLambdaFunction = jsonValue.GetObject("awsLambdaFunction");
    m_awsLambdaFunctionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codeRepository"))
  {
    m_codeRepository = jsonValue.GetObject("codeRepository");
    m_codeRepositoryHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_awsEc2InstanceHasBeenSet)
  {
   payload.WithObject("awsEc2Instance", m_awsEc2Instance.Jsonize());

  }

  if(m_awsEcrContainerImageHasBeenSet)
  {
   payload.WithObject("awsEcrContainerImage", m_awsEcrContainerImage.Jsonize());

  }

  if(m_awsLambdaFunctionHasBeenSet)
  {
   payload.WithObject("awsLambdaFunction", m_awsLambdaFunction.Jsonize());

  }

  if(m_codeRepositoryHasBeenSet)
  {
   payload.WithObject("codeRepository", m_codeRepository.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
