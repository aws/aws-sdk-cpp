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

#include <aws/es/model/ErrorDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ErrorDetails::ErrorDetails() : 
    m_errorTypeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

ErrorDetails::ErrorDetails(JsonView jsonValue) : 
    m_errorTypeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorDetails& ErrorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorType"))
  {
    m_errorType = jsonValue.GetString("ErrorType");

    m_errorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("ErrorType", m_errorType);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
