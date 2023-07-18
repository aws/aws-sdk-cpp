/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails::AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails() : 
    m_credentialsParameterHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails::AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails(JsonView jsonValue) : 
    m_credentialsParameterHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails& AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CredentialsParameter"))
  {
    m_credentialsParameter = jsonValue.GetString("CredentialsParameter");

    m_credentialsParameterHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_credentialsParameterHasBeenSet)
  {
   payload.WithString("CredentialsParameter", m_credentialsParameter);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
