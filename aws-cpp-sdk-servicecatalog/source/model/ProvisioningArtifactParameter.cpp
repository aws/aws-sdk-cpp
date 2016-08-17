/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/servicecatalog/model/ProvisioningArtifactParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProvisioningArtifactParameter::ProvisioningArtifactParameter() : 
    m_parameterKeyHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_parameterTypeHasBeenSet(false),
    m_isNoEcho(false),
    m_isNoEchoHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parameterConstraintsHasBeenSet(false)
{
}

ProvisioningArtifactParameter::ProvisioningArtifactParameter(const JsonValue& jsonValue) : 
    m_parameterKeyHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_parameterTypeHasBeenSet(false),
    m_isNoEcho(false),
    m_isNoEchoHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parameterConstraintsHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningArtifactParameter& ProvisioningArtifactParameter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ParameterKey"))
  {
    m_parameterKey = jsonValue.GetString("ParameterKey");

    m_parameterKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterType"))
  {
    m_parameterType = jsonValue.GetString("ParameterType");

    m_parameterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsNoEcho"))
  {
    m_isNoEcho = jsonValue.GetBool("IsNoEcho");

    m_isNoEchoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterConstraints"))
  {
    m_parameterConstraints = jsonValue.GetObject("ParameterConstraints");

    m_parameterConstraintsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningArtifactParameter::Jsonize() const
{
  JsonValue payload;

  if(m_parameterKeyHasBeenSet)
  {
   payload.WithString("ParameterKey", m_parameterKey);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  if(m_parameterTypeHasBeenSet)
  {
   payload.WithString("ParameterType", m_parameterType);

  }

  if(m_isNoEchoHasBeenSet)
  {
   payload.WithBool("IsNoEcho", m_isNoEcho);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_parameterConstraintsHasBeenSet)
  {
   payload.WithObject("ParameterConstraints", m_parameterConstraints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws