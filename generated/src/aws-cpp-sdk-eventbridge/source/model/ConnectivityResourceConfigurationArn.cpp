/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ConnectivityResourceConfigurationArn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

ConnectivityResourceConfigurationArn::ConnectivityResourceConfigurationArn(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectivityResourceConfigurationArn& ConnectivityResourceConfigurationArn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceConfigurationArn"))
  {
    m_resourceConfigurationArn = jsonValue.GetString("ResourceConfigurationArn");
    m_resourceConfigurationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectivityResourceConfigurationArn::Jsonize() const
{
  JsonValue payload;

  if(m_resourceConfigurationArnHasBeenSet)
  {
   payload.WithString("ResourceConfigurationArn", m_resourceConfigurationArn);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
