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

#include <aws/rekognition/model/ModerationLabel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ModerationLabel::ModerationLabel() : 
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentNameHasBeenSet(false)
{
}

ModerationLabel::ModerationLabel(const JsonValue& jsonValue) : 
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentNameHasBeenSet(false)
{
  *this = jsonValue;
}

ModerationLabel& ModerationLabel::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentName"))
  {
    m_parentName = jsonValue.GetString("ParentName");

    m_parentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ModerationLabel::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_parentNameHasBeenSet)
  {
   payload.WithString("ParentName", m_parentName);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws