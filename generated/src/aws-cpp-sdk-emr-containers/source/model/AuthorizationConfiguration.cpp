/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/AuthorizationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

AuthorizationConfiguration::AuthorizationConfiguration() : 
    m_lakeFormationConfigurationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
}

AuthorizationConfiguration::AuthorizationConfiguration(JsonView jsonValue) : 
    m_lakeFormationConfigurationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizationConfiguration& AuthorizationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lakeFormationConfiguration"))
  {
    m_lakeFormationConfiguration = jsonValue.GetObject("lakeFormationConfiguration");

    m_lakeFormationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthorizationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_lakeFormationConfigurationHasBeenSet)
  {
   payload.WithObject("lakeFormationConfiguration", m_lakeFormationConfiguration.Jsonize());

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
