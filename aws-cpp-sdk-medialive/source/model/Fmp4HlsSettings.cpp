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

#include <aws/medialive/model/Fmp4HlsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Fmp4HlsSettings::Fmp4HlsSettings() : 
    m_audioRenditionSetsHasBeenSet(false)
{
}

Fmp4HlsSettings::Fmp4HlsSettings(JsonView jsonValue) : 
    m_audioRenditionSetsHasBeenSet(false)
{
  *this = jsonValue;
}

Fmp4HlsSettings& Fmp4HlsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioRenditionSets"))
  {
    m_audioRenditionSets = jsonValue.GetString("audioRenditionSets");

    m_audioRenditionSetsHasBeenSet = true;
  }

  return *this;
}

JsonValue Fmp4HlsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioRenditionSetsHasBeenSet)
  {
   payload.WithString("audioRenditionSets", m_audioRenditionSets);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
