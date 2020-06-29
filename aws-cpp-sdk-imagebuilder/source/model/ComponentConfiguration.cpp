/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ComponentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ComponentConfiguration::ComponentConfiguration() : 
    m_componentArnHasBeenSet(false)
{
}

ComponentConfiguration::ComponentConfiguration(JsonView jsonValue) : 
    m_componentArnHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentConfiguration& ComponentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentArn"))
  {
    m_componentArn = jsonValue.GetString("componentArn");

    m_componentArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_componentArnHasBeenSet)
  {
   payload.WithString("componentArn", m_componentArn);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
