/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafRegionalWebAclRulesListActionDetails.h>
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

AwsWafRegionalWebAclRulesListActionDetails::AwsWafRegionalWebAclRulesListActionDetails() : 
    m_typeHasBeenSet(false)
{
}

AwsWafRegionalWebAclRulesListActionDetails::AwsWafRegionalWebAclRulesListActionDetails(JsonView jsonValue) : 
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafRegionalWebAclRulesListActionDetails& AwsWafRegionalWebAclRulesListActionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafRegionalWebAclRulesListActionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
