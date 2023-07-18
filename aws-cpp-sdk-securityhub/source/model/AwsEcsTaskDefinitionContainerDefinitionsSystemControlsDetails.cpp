/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails::AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails() : 
    m_namespaceHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails::AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails& AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
