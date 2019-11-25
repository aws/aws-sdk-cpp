/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iot/model/ProvisioningTemplateVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ProvisioningTemplateVersionSummary::ProvisioningTemplateVersionSummary() : 
    m_versionId(0),
    m_versionIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false)
{
}

ProvisioningTemplateVersionSummary::ProvisioningTemplateVersionSummary(JsonView jsonValue) : 
    m_versionId(0),
    m_versionIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningTemplateVersionSummary& ProvisioningTemplateVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetInteger("versionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDefaultVersion"))
  {
    m_isDefaultVersion = jsonValue.GetBool("isDefaultVersion");

    m_isDefaultVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningTemplateVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_versionIdHasBeenSet)
  {
   payload.WithInteger("versionId", m_versionId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_isDefaultVersionHasBeenSet)
  {
   payload.WithBool("isDefaultVersion", m_isDefaultVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
