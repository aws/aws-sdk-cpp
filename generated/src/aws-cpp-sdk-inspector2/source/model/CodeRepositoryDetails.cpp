/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeRepositoryDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CodeRepositoryDetails::CodeRepositoryDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeRepositoryDetails& CodeRepositoryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");
    m_projectNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("integrationArn"))
  {
    m_integrationArn = jsonValue.GetString("integrationArn");
    m_integrationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerType"))
  {
    m_providerType = CodeRepositoryProviderTypeMapper::GetCodeRepositoryProviderTypeForName(jsonValue.GetString("providerType"));
    m_providerTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeRepositoryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_integrationArnHasBeenSet)
  {
   payload.WithString("integrationArn", m_integrationArn);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("providerType", CodeRepositoryProviderTypeMapper::GetNameForCodeRepositoryProviderType(m_providerType));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
