/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DetailedGlossaryTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

DetailedGlossaryTerm::DetailedGlossaryTerm() : 
    m_nameHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false)
{
}

DetailedGlossaryTerm::DetailedGlossaryTerm(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_shortDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

DetailedGlossaryTerm& DetailedGlossaryTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shortDescription"))
  {
    m_shortDescription = jsonValue.GetString("shortDescription");

    m_shortDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DetailedGlossaryTerm::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_shortDescriptionHasBeenSet)
  {
   payload.WithString("shortDescription", m_shortDescription);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
