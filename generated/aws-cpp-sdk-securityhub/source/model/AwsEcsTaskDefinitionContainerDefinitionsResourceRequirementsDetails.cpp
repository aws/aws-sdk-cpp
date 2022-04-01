/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails::AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails() : 
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails::AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails& AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

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
