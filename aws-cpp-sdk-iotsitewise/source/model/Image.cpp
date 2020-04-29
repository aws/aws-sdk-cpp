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

#include <aws/iotsitewise/model/Image.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Image::Image() : 
    m_locationUrlHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false)
{
}

Image::Image(JsonView jsonValue) : 
    m_locationUrlHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false)
{
  *this = jsonValue;
}

Image& Image::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("locationUrl"))
  {
    m_locationUrl = jsonValue.GetString("locationUrl");

    m_locationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateDate"))
  {
    m_lastUpdateDate = jsonValue.GetDouble("lastUpdateDate");

    m_lastUpdateDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Image::Jsonize() const
{
  JsonValue payload;

  if(m_locationUrlHasBeenSet)
  {
   payload.WithString("locationUrl", m_locationUrl);

  }

  if(m_lastUpdateDateHasBeenSet)
  {
   payload.WithDouble("lastUpdateDate", m_lastUpdateDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
