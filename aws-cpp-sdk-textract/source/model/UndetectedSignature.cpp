/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/UndetectedSignature.h>
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

UndetectedSignature::UndetectedSignature() : 
    m_page(0),
    m_pageHasBeenSet(false)
{
}

UndetectedSignature::UndetectedSignature(JsonView jsonValue) : 
    m_page(0),
    m_pageHasBeenSet(false)
{
  *this = jsonValue;
}

UndetectedSignature& UndetectedSignature::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetInteger("Page");

    m_pageHasBeenSet = true;
  }

  return *this;
}

JsonValue UndetectedSignature::Jsonize() const
{
  JsonValue payload;

  if(m_pageHasBeenSet)
  {
   payload.WithInteger("Page", m_page);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
