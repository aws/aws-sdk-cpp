/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/LakeFormationConfiguration.h>
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

LakeFormationConfiguration::LakeFormationConfiguration() : 
    m_authorizedSessionTagValueHasBeenSet(false),
    m_secureNamespaceInfoHasBeenSet(false),
    m_queryEngineRoleArnHasBeenSet(false)
{
}

LakeFormationConfiguration::LakeFormationConfiguration(JsonView jsonValue) : 
    m_authorizedSessionTagValueHasBeenSet(false),
    m_secureNamespaceInfoHasBeenSet(false),
    m_queryEngineRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

LakeFormationConfiguration& LakeFormationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizedSessionTagValue"))
  {
    m_authorizedSessionTagValue = jsonValue.GetString("authorizedSessionTagValue");

    m_authorizedSessionTagValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secureNamespaceInfo"))
  {
    m_secureNamespaceInfo = jsonValue.GetObject("secureNamespaceInfo");

    m_secureNamespaceInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryEngineRoleArn"))
  {
    m_queryEngineRoleArn = jsonValue.GetString("queryEngineRoleArn");

    m_queryEngineRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LakeFormationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_authorizedSessionTagValueHasBeenSet)
  {
   payload.WithString("authorizedSessionTagValue", m_authorizedSessionTagValue);

  }

  if(m_secureNamespaceInfoHasBeenSet)
  {
   payload.WithObject("secureNamespaceInfo", m_secureNamespaceInfo.Jsonize());

  }

  if(m_queryEngineRoleArnHasBeenSet)
  {
   payload.WithString("queryEngineRoleArn", m_queryEngineRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
