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

#include <aws/glue/model/CreateJsonClassifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CreateJsonClassifierRequest::CreateJsonClassifierRequest() : 
    m_nameHasBeenSet(false),
    m_jsonPathHasBeenSet(false)
{
}

CreateJsonClassifierRequest::CreateJsonClassifierRequest(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_jsonPathHasBeenSet(false)
{
  *this = jsonValue;
}

CreateJsonClassifierRequest& CreateJsonClassifierRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JsonPath"))
  {
    m_jsonPath = jsonValue.GetString("JsonPath");

    m_jsonPathHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateJsonClassifierRequest::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_jsonPathHasBeenSet)
  {
   payload.WithString("JsonPath", m_jsonPath);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
