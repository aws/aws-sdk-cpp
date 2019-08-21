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

#include <aws/forecast/model/DataDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

DataDestination::DataDestination() : 
    m_s3ConfigHasBeenSet(false)
{
}

DataDestination::DataDestination(JsonView jsonValue) : 
    m_s3ConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DataDestination& DataDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Config"))
  {
    m_s3Config = jsonValue.GetObject("S3Config");

    m_s3ConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DataDestination::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigHasBeenSet)
  {
   payload.WithObject("S3Config", m_s3Config.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
