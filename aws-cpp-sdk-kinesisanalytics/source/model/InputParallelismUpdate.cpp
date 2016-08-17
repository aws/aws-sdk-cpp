/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/InputParallelismUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

InputParallelismUpdate::InputParallelismUpdate() : 
    m_countUpdate(0),
    m_countUpdateHasBeenSet(false)
{
}

InputParallelismUpdate::InputParallelismUpdate(const JsonValue& jsonValue) : 
    m_countUpdate(0),
    m_countUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

InputParallelismUpdate& InputParallelismUpdate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CountUpdate"))
  {
    m_countUpdate = jsonValue.GetInteger("CountUpdate");

    m_countUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue InputParallelismUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_countUpdateHasBeenSet)
  {
   payload.WithInteger("CountUpdate", m_countUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws