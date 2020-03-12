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

#include <aws/securityhub/model/Severity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Severity::Severity() : 
    m_product(0.0),
    m_productHasBeenSet(false),
    m_label(SeverityLabel::NOT_SET),
    m_labelHasBeenSet(false),
    m_normalized(0),
    m_normalizedHasBeenSet(false)
{
}

Severity::Severity(JsonView jsonValue) : 
    m_product(0.0),
    m_productHasBeenSet(false),
    m_label(SeverityLabel::NOT_SET),
    m_labelHasBeenSet(false),
    m_normalized(0),
    m_normalizedHasBeenSet(false)
{
  *this = jsonValue;
}

Severity& Severity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Product"))
  {
    m_product = jsonValue.GetDouble("Product");

    m_productHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = SeverityLabelMapper::GetSeverityLabelForName(jsonValue.GetString("Label"));

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Normalized"))
  {
    m_normalized = jsonValue.GetInteger("Normalized");

    m_normalizedHasBeenSet = true;
  }

  return *this;
}

JsonValue Severity::Jsonize() const
{
  JsonValue payload;

  if(m_productHasBeenSet)
  {
   payload.WithDouble("Product", m_product);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", SeverityLabelMapper::GetNameForSeverityLabel(m_label));
  }

  if(m_normalizedHasBeenSet)
  {
   payload.WithInteger("Normalized", m_normalized);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
