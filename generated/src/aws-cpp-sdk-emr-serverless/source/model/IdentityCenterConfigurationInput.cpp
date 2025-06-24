/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/IdentityCenterConfigurationInput.h>
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

IdentityCenterConfigurationInput::IdentityCenterConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

IdentityCenterConfigurationInput& IdentityCenterConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identityCenterInstanceArn"))
  {
    m_identityCenterInstanceArn = jsonValue.GetString("identityCenterInstanceArn");
    m_identityCenterInstanceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_identityCenterInstanceArnHasBeenSet)
  {
   payload.WithString("identityCenterInstanceArn", m_identityCenterInstanceArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
