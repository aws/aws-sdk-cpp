/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafRulePredicateListDetails.h>
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

AwsWafRulePredicateListDetails::AwsWafRulePredicateListDetails() : 
    m_dataIdHasBeenSet(false),
    m_negated(false),
    m_negatedHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsWafRulePredicateListDetails::AwsWafRulePredicateListDetails(JsonView jsonValue) : 
    m_dataIdHasBeenSet(false),
    m_negated(false),
    m_negatedHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafRulePredicateListDetails& AwsWafRulePredicateListDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataId"))
  {
    m_dataId = jsonValue.GetString("DataId");

    m_dataIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Negated"))
  {
    m_negated = jsonValue.GetBool("Negated");

    m_negatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafRulePredicateListDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dataIdHasBeenSet)
  {
   payload.WithString("DataId", m_dataId);

  }

  if(m_negatedHasBeenSet)
  {
   payload.WithBool("Negated", m_negated);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
