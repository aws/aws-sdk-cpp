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

#include <aws/medialive/model/MultiplexValidationError.h>
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

MultiplexValidationError::MultiplexValidationError() : 
    m_elementPathHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

MultiplexValidationError::MultiplexValidationError(JsonView jsonValue) : 
    m_elementPathHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexValidationError& MultiplexValidationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("elementPath"))
  {
    m_elementPath = jsonValue.GetString("elementPath");

    m_elementPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexValidationError::Jsonize() const
{
  JsonValue payload;

  if(m_elementPathHasBeenSet)
  {
   payload.WithString("elementPath", m_elementPath);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
