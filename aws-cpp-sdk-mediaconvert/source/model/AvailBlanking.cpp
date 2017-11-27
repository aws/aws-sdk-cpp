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

#include <aws/mediaconvert/model/AvailBlanking.h>
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

AvailBlanking::AvailBlanking() : 
    m_availBlankingImageHasBeenSet(false)
{
}

AvailBlanking::AvailBlanking(const JsonValue& jsonValue) : 
    m_availBlankingImageHasBeenSet(false)
{
  *this = jsonValue;
}

AvailBlanking& AvailBlanking::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("availBlankingImage"))
  {
    m_availBlankingImage = jsonValue.GetString("availBlankingImage");

    m_availBlankingImageHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailBlanking::Jsonize() const
{
  JsonValue payload;

  if(m_availBlankingImageHasBeenSet)
  {
   payload.WithString("availBlankingImage", m_availBlankingImage);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
