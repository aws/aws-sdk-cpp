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

#include <aws/wafv2/model/RegexPatternSetReferenceStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RegexPatternSetReferenceStatement::RegexPatternSetReferenceStatement() : 
    m_aRNHasBeenSet(false),
    m_fieldToMatchHasBeenSet(false),
    m_textTransformationsHasBeenSet(false)
{
}

RegexPatternSetReferenceStatement::RegexPatternSetReferenceStatement(JsonView jsonValue) : 
    m_aRNHasBeenSet(false),
    m_fieldToMatchHasBeenSet(false),
    m_textTransformationsHasBeenSet(false)
{
  *this = jsonValue;
}

RegexPatternSetReferenceStatement& RegexPatternSetReferenceStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldToMatch"))
  {
    m_fieldToMatch = jsonValue.GetObject("FieldToMatch");

    m_fieldToMatchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextTransformations"))
  {
    Array<JsonView> textTransformationsJsonList = jsonValue.GetArray("TextTransformations");
    for(unsigned textTransformationsIndex = 0; textTransformationsIndex < textTransformationsJsonList.GetLength(); ++textTransformationsIndex)
    {
      m_textTransformations.push_back(textTransformationsJsonList[textTransformationsIndex].AsObject());
    }
    m_textTransformationsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegexPatternSetReferenceStatement::Jsonize() const
{
  JsonValue payload;

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_fieldToMatchHasBeenSet)
  {
   payload.WithObject("FieldToMatch", m_fieldToMatch.Jsonize());

  }

  if(m_textTransformationsHasBeenSet)
  {
   Array<JsonValue> textTransformationsJsonList(m_textTransformations.size());
   for(unsigned textTransformationsIndex = 0; textTransformationsIndex < textTransformationsJsonList.GetLength(); ++textTransformationsIndex)
   {
     textTransformationsJsonList[textTransformationsIndex].AsObject(m_textTransformations[textTransformationsIndex].Jsonize());
   }
   payload.WithArray("TextTransformations", std::move(textTransformationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
