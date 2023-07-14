/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/EsamManifestConfirmConditionNotification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

EsamManifestConfirmConditionNotification::EsamManifestConfirmConditionNotification() : 
    m_mccXmlHasBeenSet(false)
{
}

EsamManifestConfirmConditionNotification::EsamManifestConfirmConditionNotification(JsonView jsonValue) : 
    m_mccXmlHasBeenSet(false)
{
  *this = jsonValue;
}

EsamManifestConfirmConditionNotification& EsamManifestConfirmConditionNotification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mccXml"))
  {
    m_mccXml = jsonValue.GetString("mccXml");

    m_mccXmlHasBeenSet = true;
  }

  return *this;
}

JsonValue EsamManifestConfirmConditionNotification::Jsonize() const
{
  JsonValue payload;

  if(m_mccXmlHasBeenSet)
  {
   payload.WithString("mccXml", m_mccXml);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
