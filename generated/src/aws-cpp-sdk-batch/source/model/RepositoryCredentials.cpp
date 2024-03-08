/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/RepositoryCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

RepositoryCredentials::RepositoryCredentials() : 
    m_credentialsParameterHasBeenSet(false)
{
}

RepositoryCredentials::RepositoryCredentials(JsonView jsonValue) : 
    m_credentialsParameterHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryCredentials& RepositoryCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("credentialsParameter"))
  {
    m_credentialsParameter = jsonValue.GetString("credentialsParameter");

    m_credentialsParameterHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_credentialsParameterHasBeenSet)
  {
   payload.WithString("credentialsParameter", m_credentialsParameter);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
