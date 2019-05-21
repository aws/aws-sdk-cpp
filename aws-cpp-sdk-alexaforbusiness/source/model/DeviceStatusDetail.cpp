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

#include <aws/alexaforbusiness/model/DeviceStatusDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

DeviceStatusDetail::DeviceStatusDetail() : 
    m_feature(Feature::NOT_SET),
    m_featureHasBeenSet(false),
    m_code(DeviceStatusDetailCode::NOT_SET),
    m_codeHasBeenSet(false)
{
}

DeviceStatusDetail::DeviceStatusDetail(JsonView jsonValue) : 
    m_feature(Feature::NOT_SET),
    m_featureHasBeenSet(false),
    m_code(DeviceStatusDetailCode::NOT_SET),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceStatusDetail& DeviceStatusDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Feature"))
  {
    m_feature = FeatureMapper::GetFeatureForName(jsonValue.GetString("Feature"));

    m_featureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Code"))
  {
    m_code = DeviceStatusDetailCodeMapper::GetDeviceStatusDetailCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceStatusDetail::Jsonize() const
{
  JsonValue payload;

  if(m_featureHasBeenSet)
  {
   payload.WithString("Feature", FeatureMapper::GetNameForFeature(m_feature));
  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", DeviceStatusDetailCodeMapper::GetNameForDeviceStatusDetailCode(m_code));
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
