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

#include <aws/medialive/model/AvailSettings.h>
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

AvailSettings::AvailSettings() : 
    m_scte35SpliceInsertHasBeenSet(false),
    m_scte35TimeSignalAposHasBeenSet(false)
{
}

AvailSettings::AvailSettings(const JsonValue& jsonValue) : 
    m_scte35SpliceInsertHasBeenSet(false),
    m_scte35TimeSignalAposHasBeenSet(false)
{
  *this = jsonValue;
}

AvailSettings& AvailSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("scte35SpliceInsert"))
  {
    m_scte35SpliceInsert = jsonValue.GetObject("scte35SpliceInsert");

    m_scte35SpliceInsertHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35TimeSignalApos"))
  {
    m_scte35TimeSignalApos = jsonValue.GetObject("scte35TimeSignalApos");

    m_scte35TimeSignalAposHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailSettings::Jsonize() const
{
  JsonValue payload;

  if(m_scte35SpliceInsertHasBeenSet)
  {
   payload.WithObject("scte35SpliceInsert", m_scte35SpliceInsert.Jsonize());

  }

  if(m_scte35TimeSignalAposHasBeenSet)
  {
   payload.WithObject("scte35TimeSignalApos", m_scte35TimeSignalApos.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
