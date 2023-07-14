/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/AwsIamConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

AwsIamConfig::AwsIamConfig() : 
    m_signingRegionHasBeenSet(false),
    m_signingServiceNameHasBeenSet(false)
{
}

AwsIamConfig::AwsIamConfig(JsonView jsonValue) : 
    m_signingRegionHasBeenSet(false),
    m_signingServiceNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamConfig& AwsIamConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("signingRegion"))
  {
    m_signingRegion = jsonValue.GetString("signingRegion");

    m_signingRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signingServiceName"))
  {
    m_signingServiceName = jsonValue.GetString("signingServiceName");

    m_signingServiceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamConfig::Jsonize() const
{
  JsonValue payload;

  if(m_signingRegionHasBeenSet)
  {
   payload.WithString("signingRegion", m_signingRegion);

  }

  if(m_signingServiceNameHasBeenSet)
  {
   payload.WithString("signingServiceName", m_signingServiceName);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
