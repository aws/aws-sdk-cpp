/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateJsonClassifierRequest.h>
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

UpdateJsonClassifierRequest::UpdateJsonClassifierRequest() : 
    m_nameHasBeenSet(false),
    m_jsonPathHasBeenSet(false)
{
}

UpdateJsonClassifierRequest::UpdateJsonClassifierRequest(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_jsonPathHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateJsonClassifierRequest& UpdateJsonClassifierRequest::operator =(JsonView jsonValue)
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

JsonValue UpdateJsonClassifierRequest::Jsonize() const
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
