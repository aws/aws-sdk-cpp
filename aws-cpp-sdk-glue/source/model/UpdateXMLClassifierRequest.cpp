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

#include <aws/glue/model/UpdateXMLClassifierRequest.h>
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

UpdateXMLClassifierRequest::UpdateXMLClassifierRequest() : 
    m_nameHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_rowTagHasBeenSet(false)
{
}

UpdateXMLClassifierRequest::UpdateXMLClassifierRequest(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_rowTagHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateXMLClassifierRequest& UpdateXMLClassifierRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowTag"))
  {
    m_rowTag = jsonValue.GetString("RowTag");

    m_rowTagHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateXMLClassifierRequest::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_rowTagHasBeenSet)
  {
   payload.WithString("RowTag", m_rowTag);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
