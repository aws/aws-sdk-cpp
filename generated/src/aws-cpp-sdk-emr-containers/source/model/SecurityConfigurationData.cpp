/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/SecurityConfigurationData.h>
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

SecurityConfigurationData::SecurityConfigurationData() : 
    m_authorizationConfigurationHasBeenSet(false)
{
}

SecurityConfigurationData::SecurityConfigurationData(JsonView jsonValue) : 
    m_authorizationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityConfigurationData& SecurityConfigurationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizationConfiguration"))
  {
    m_authorizationConfiguration = jsonValue.GetObject("authorizationConfiguration");

    m_authorizationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityConfigurationData::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationConfigurationHasBeenSet)
  {
   payload.WithObject("authorizationConfiguration", m_authorizationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
