/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/IdentityCenterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

IdentityCenterConfiguration::IdentityCenterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

IdentityCenterConfiguration& IdentityCenterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identityCenterInstanceArn"))
  {
    m_identityCenterInstanceArn = jsonValue.GetString("identityCenterInstanceArn");
    m_identityCenterInstanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityCenterApplicationArn"))
  {
    m_identityCenterApplicationArn = jsonValue.GetString("identityCenterApplicationArn");
    m_identityCenterApplicationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_identityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("identityCenterInstanceArn", m_identityCenterInstanceArn);

  }

  if(m_identityCenterApplicationArnHasBeenSet)
  {
   payload.WithString("identityCenterApplicationArn", m_identityCenterApplicationArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
