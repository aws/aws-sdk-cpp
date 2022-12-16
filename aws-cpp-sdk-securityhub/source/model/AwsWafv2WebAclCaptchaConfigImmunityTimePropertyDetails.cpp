/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails.h>
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

AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails::AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails() : 
    m_immunityTime(0),
    m_immunityTimeHasBeenSet(false)
{
}

AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails::AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails(JsonView jsonValue) : 
    m_immunityTime(0),
    m_immunityTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails& AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImmunityTime"))
  {
    m_immunityTime = jsonValue.GetInt64("ImmunityTime");

    m_immunityTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2WebAclCaptchaConfigImmunityTimePropertyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_immunityTimeHasBeenSet)
  {
   payload.WithInt64("ImmunityTime", m_immunityTime);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
