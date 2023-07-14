/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcrRepositoryDetails.h>
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

AwsEcrRepositoryDetails::AwsEcrRepositoryDetails() : 
    m_arnHasBeenSet(false),
    m_imageScanningConfigurationHasBeenSet(false),
    m_imageTagMutabilityHasBeenSet(false),
    m_lifecyclePolicyHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryPolicyTextHasBeenSet(false)
{
}

AwsEcrRepositoryDetails::AwsEcrRepositoryDetails(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_imageScanningConfigurationHasBeenSet(false),
    m_imageTagMutabilityHasBeenSet(false),
    m_lifecyclePolicyHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryPolicyTextHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcrRepositoryDetails& AwsEcrRepositoryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageScanningConfiguration"))
  {
    m_imageScanningConfiguration = jsonValue.GetObject("ImageScanningConfiguration");

    m_imageScanningConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageTagMutability"))
  {
    m_imageTagMutability = jsonValue.GetString("ImageTagMutability");

    m_imageTagMutabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifecyclePolicy"))
  {
    m_lifecyclePolicy = jsonValue.GetObject("LifecyclePolicy");

    m_lifecyclePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryName"))
  {
    m_repositoryName = jsonValue.GetString("RepositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryPolicyText"))
  {
    m_repositoryPolicyText = jsonValue.GetString("RepositoryPolicyText");

    m_repositoryPolicyTextHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcrRepositoryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_imageScanningConfigurationHasBeenSet)
  {
   payload.WithObject("ImageScanningConfiguration", m_imageScanningConfiguration.Jsonize());

  }

  if(m_imageTagMutabilityHasBeenSet)
  {
   payload.WithString("ImageTagMutability", m_imageTagMutability);

  }

  if(m_lifecyclePolicyHasBeenSet)
  {
   payload.WithObject("LifecyclePolicy", m_lifecyclePolicy.Jsonize());

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("RepositoryName", m_repositoryName);

  }

  if(m_repositoryPolicyTextHasBeenSet)
  {
   payload.WithString("RepositoryPolicyText", m_repositoryPolicyText);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
