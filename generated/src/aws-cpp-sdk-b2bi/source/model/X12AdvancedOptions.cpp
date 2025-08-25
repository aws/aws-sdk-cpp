/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12AdvancedOptions.h>
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

X12AdvancedOptions::X12AdvancedOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

X12AdvancedOptions& X12AdvancedOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("splitOptions"))
  {
    m_splitOptions = jsonValue.GetObject("splitOptions");
    m_splitOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validationOptions"))
  {
    m_validationOptions = jsonValue.GetObject("validationOptions");
    m_validationOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue X12AdvancedOptions::Jsonize() const
{
  JsonValue payload;

  if(m_splitOptionsHasBeenSet)
  {
   payload.WithObject("splitOptions", m_splitOptions.Jsonize());

  }

  if(m_validationOptionsHasBeenSet)
  {
   payload.WithObject("validationOptions", m_validationOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
