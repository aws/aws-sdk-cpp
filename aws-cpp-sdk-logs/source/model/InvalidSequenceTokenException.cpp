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

#include <aws/logs/model/InvalidSequenceTokenException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

InvalidSequenceTokenException::InvalidSequenceTokenException() : 
    m_expectedSequenceTokenHasBeenSet(false)
{
}

InvalidSequenceTokenException::InvalidSequenceTokenException(JsonView jsonValue) : 
    m_expectedSequenceTokenHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidSequenceTokenException& InvalidSequenceTokenException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expectedSequenceToken"))
  {
    m_expectedSequenceToken = jsonValue.GetString("expectedSequenceToken");

    m_expectedSequenceTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidSequenceTokenException::Jsonize() const
{
  JsonValue payload;

  if(m_expectedSequenceTokenHasBeenSet)
  {
   payload.WithString("expectedSequenceToken", m_expectedSequenceToken);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
