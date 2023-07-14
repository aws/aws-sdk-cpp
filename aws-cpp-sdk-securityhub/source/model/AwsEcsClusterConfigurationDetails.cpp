/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsClusterConfigurationDetails.h>
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

AwsEcsClusterConfigurationDetails::AwsEcsClusterConfigurationDetails() : 
    m_executeCommandConfigurationHasBeenSet(false)
{
}

AwsEcsClusterConfigurationDetails::AwsEcsClusterConfigurationDetails(JsonView jsonValue) : 
    m_executeCommandConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsClusterConfigurationDetails& AwsEcsClusterConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecuteCommandConfiguration"))
  {
    m_executeCommandConfiguration = jsonValue.GetObject("ExecuteCommandConfiguration");

    m_executeCommandConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsClusterConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_executeCommandConfigurationHasBeenSet)
  {
   payload.WithObject("ExecuteCommandConfiguration", m_executeCommandConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
