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

#include <aws/textract/model/DocumentMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

DocumentMetadata::DocumentMetadata() : 
    m_pages(0),
    m_pagesHasBeenSet(false)
{
}

DocumentMetadata::DocumentMetadata(JsonView jsonValue) : 
    m_pages(0),
    m_pagesHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentMetadata& DocumentMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Pages"))
  {
    m_pages = jsonValue.GetInteger("Pages");

    m_pagesHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_pagesHasBeenSet)
  {
   payload.WithInteger("Pages", m_pages);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
