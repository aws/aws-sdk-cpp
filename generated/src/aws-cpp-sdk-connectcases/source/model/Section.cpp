/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/Section.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

Section::Section() : 
    m_fieldGroupHasBeenSet(false)
{
}

Section::Section(JsonView jsonValue) : 
    m_fieldGroupHasBeenSet(false)
{
  *this = jsonValue;
}

Section& Section::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fieldGroup"))
  {
    m_fieldGroup = jsonValue.GetObject("fieldGroup");

    m_fieldGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue Section::Jsonize() const
{
  JsonValue payload;

  if(m_fieldGroupHasBeenSet)
  {
   payload.WithObject("fieldGroup", m_fieldGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
