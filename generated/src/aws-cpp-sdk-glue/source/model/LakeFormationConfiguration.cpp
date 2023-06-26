/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/LakeFormationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

LakeFormationConfiguration::LakeFormationConfiguration() : 
    m_useLakeFormationCredentials(false),
    m_useLakeFormationCredentialsHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

LakeFormationConfiguration::LakeFormationConfiguration(JsonView jsonValue) : 
    m_useLakeFormationCredentials(false),
    m_useLakeFormationCredentialsHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

LakeFormationConfiguration& LakeFormationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UseLakeFormationCredentials"))
  {
    m_useLakeFormationCredentials = jsonValue.GetBool("UseLakeFormationCredentials");

    m_useLakeFormationCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue LakeFormationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_useLakeFormationCredentialsHasBeenSet)
  {
   payload.WithBool("UseLakeFormationCredentials", m_useLakeFormationCredentials);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
