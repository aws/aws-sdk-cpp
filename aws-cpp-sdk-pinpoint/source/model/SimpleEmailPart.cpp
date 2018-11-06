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

#include <aws/pinpoint/model/SimpleEmailPart.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SimpleEmailPart::SimpleEmailPart() : 
    m_charsetHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

SimpleEmailPart::SimpleEmailPart(JsonView jsonValue) : 
    m_charsetHasBeenSet(false),
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleEmailPart& SimpleEmailPart::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Charset"))
  {
    m_charset = jsonValue.GetString("Charset");

    m_charsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetString("Data");

    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleEmailPart::Jsonize() const
{
  JsonValue payload;

  if(m_charsetHasBeenSet)
  {
   payload.WithString("Charset", m_charset);

  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", m_data);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
