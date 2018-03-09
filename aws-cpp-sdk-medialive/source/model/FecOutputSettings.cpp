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

#include <aws/medialive/model/FecOutputSettings.h>
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

FecOutputSettings::FecOutputSettings() : 
    m_columnDepth(0),
    m_columnDepthHasBeenSet(false),
    m_includeFec(FecOutputIncludeFec::NOT_SET),
    m_includeFecHasBeenSet(false),
    m_rowLength(0),
    m_rowLengthHasBeenSet(false)
{
}

FecOutputSettings::FecOutputSettings(const JsonValue& jsonValue) : 
    m_columnDepth(0),
    m_columnDepthHasBeenSet(false),
    m_includeFec(FecOutputIncludeFec::NOT_SET),
    m_includeFecHasBeenSet(false),
    m_rowLength(0),
    m_rowLengthHasBeenSet(false)
{
  *this = jsonValue;
}

FecOutputSettings& FecOutputSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("columnDepth"))
  {
    m_columnDepth = jsonValue.GetInteger("columnDepth");

    m_columnDepthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeFec"))
  {
    m_includeFec = FecOutputIncludeFecMapper::GetFecOutputIncludeFecForName(jsonValue.GetString("includeFec"));

    m_includeFecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rowLength"))
  {
    m_rowLength = jsonValue.GetInteger("rowLength");

    m_rowLengthHasBeenSet = true;
  }

  return *this;
}

JsonValue FecOutputSettings::Jsonize() const
{
  JsonValue payload;

  if(m_columnDepthHasBeenSet)
  {
   payload.WithInteger("columnDepth", m_columnDepth);

  }

  if(m_includeFecHasBeenSet)
  {
   payload.WithString("includeFec", FecOutputIncludeFecMapper::GetNameForFecOutputIncludeFec(m_includeFec));
  }

  if(m_rowLengthHasBeenSet)
  {
   payload.WithInteger("rowLength", m_rowLength);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
