/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/EsamSignalProcessingNotification.h>
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

EsamSignalProcessingNotification::EsamSignalProcessingNotification() : 
    m_sccXmlHasBeenSet(false)
{
}

EsamSignalProcessingNotification::EsamSignalProcessingNotification(JsonView jsonValue) : 
    m_sccXmlHasBeenSet(false)
{
  *this = jsonValue;
}

EsamSignalProcessingNotification& EsamSignalProcessingNotification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sccXml"))
  {
    m_sccXml = jsonValue.GetString("sccXml");

    m_sccXmlHasBeenSet = true;
  }

  return *this;
}

JsonValue EsamSignalProcessingNotification::Jsonize() const
{
  JsonValue payload;

  if(m_sccXmlHasBeenSet)
  {
   payload.WithString("sccXml", m_sccXml);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
