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

#include <aws/states/model/ActivitySucceededEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ActivitySucceededEventDetails::ActivitySucceededEventDetails() : 
    m_outputHasBeenSet(false)
{
}

ActivitySucceededEventDetails::ActivitySucceededEventDetails(const JsonValue& jsonValue) : 
    m_outputHasBeenSet(false)
{
  *this = jsonValue;
}

ActivitySucceededEventDetails& ActivitySucceededEventDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");

    m_outputHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivitySucceededEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws