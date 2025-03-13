/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftCredentialConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RedshiftCredentialConfiguration::RedshiftCredentialConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftCredentialConfiguration& RedshiftCredentialConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("secretManagerArn"))
  {
    m_secretManagerArn = jsonValue.GetString("secretManagerArn");
    m_secretManagerArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftCredentialConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_secretManagerArnHasBeenSet)
  {
   payload.WithString("secretManagerArn", m_secretManagerArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
