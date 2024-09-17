/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/PublicAccessBlockConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

PublicAccessBlockConfig::PublicAccessBlockConfig() : 
    m_blockPublicPolicy(false),
    m_blockPublicPolicyHasBeenSet(false),
    m_restrictPublicResource(false),
    m_restrictPublicResourceHasBeenSet(false)
{
}

PublicAccessBlockConfig::PublicAccessBlockConfig(JsonView jsonValue)
  : PublicAccessBlockConfig()
{
  *this = jsonValue;
}

PublicAccessBlockConfig& PublicAccessBlockConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockPublicPolicy"))
  {
    m_blockPublicPolicy = jsonValue.GetBool("BlockPublicPolicy");

    m_blockPublicPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestrictPublicResource"))
  {
    m_restrictPublicResource = jsonValue.GetBool("RestrictPublicResource");

    m_restrictPublicResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicAccessBlockConfig::Jsonize() const
{
  JsonValue payload;

  if(m_blockPublicPolicyHasBeenSet)
  {
   payload.WithBool("BlockPublicPolicy", m_blockPublicPolicy);

  }

  if(m_restrictPublicResourceHasBeenSet)
  {
   payload.WithBool("RestrictPublicResource", m_restrictPublicResource);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
