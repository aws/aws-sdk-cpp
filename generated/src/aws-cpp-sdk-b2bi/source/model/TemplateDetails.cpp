/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/TemplateDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

TemplateDetails::TemplateDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

TemplateDetails& TemplateDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("x12"))
  {
    m_x12 = jsonValue.GetObject("x12");
    m_x12HasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateDetails::Jsonize() const
{
  JsonValue payload;

  if(m_x12HasBeenSet)
  {
   payload.WithObject("x12", m_x12.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
