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

#include <aws/mediaconvert/model/CmfcSettings.h>
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

CmfcSettings::CmfcSettings() : 
    m_scte35Esam(CmfcScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(CmfcScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false)
{
}

CmfcSettings::CmfcSettings(JsonView jsonValue) : 
    m_scte35Esam(CmfcScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(CmfcScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false)
{
  *this = jsonValue;
}

CmfcSettings& CmfcSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scte35Esam"))
  {
    m_scte35Esam = CmfcScte35EsamMapper::GetCmfcScte35EsamForName(jsonValue.GetString("scte35Esam"));

    m_scte35EsamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Source"))
  {
    m_scte35Source = CmfcScte35SourceMapper::GetCmfcScte35SourceForName(jsonValue.GetString("scte35Source"));

    m_scte35SourceHasBeenSet = true;
  }

  return *this;
}

JsonValue CmfcSettings::Jsonize() const
{
  JsonValue payload;

  if(m_scte35EsamHasBeenSet)
  {
   payload.WithString("scte35Esam", CmfcScte35EsamMapper::GetNameForCmfcScte35Esam(m_scte35Esam));
  }

  if(m_scte35SourceHasBeenSet)
  {
   payload.WithString("scte35Source", CmfcScte35SourceMapper::GetNameForCmfcScte35Source(m_scte35Source));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
