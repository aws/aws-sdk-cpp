/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails::AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails() : 
    m_nameHasBeenSet(false),
    m_valueFromHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails::AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueFromHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails& AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueFrom"))
  {
    m_valueFrom = jsonValue.GetString("ValueFrom");

    m_valueFromHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueFromHasBeenSet)
  {
   payload.WithString("ValueFrom", m_valueFrom);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
