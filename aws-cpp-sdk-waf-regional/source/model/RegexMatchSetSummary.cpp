/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/RegexMatchSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

RegexMatchSetSummary::RegexMatchSetSummary() : 
    m_regexMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

RegexMatchSetSummary::RegexMatchSetSummary(JsonView jsonValue) : 
    m_regexMatchSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

RegexMatchSetSummary& RegexMatchSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegexMatchSetId"))
  {
    m_regexMatchSetId = jsonValue.GetString("RegexMatchSetId");

    m_regexMatchSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue RegexMatchSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_regexMatchSetIdHasBeenSet)
  {
   payload.WithString("RegexMatchSetId", m_regexMatchSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
