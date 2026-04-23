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
