/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2WebAclCaptchaConfigDetails.h>
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

AwsWafv2WebAclCaptchaConfigDetails::AwsWafv2WebAclCaptchaConfigDetails() : 
    m_immunityTimePropertyHasBeenSet(false)
{
}

AwsWafv2WebAclCaptchaConfigDetails::AwsWafv2WebAclCaptchaConfigDetails(JsonView jsonValue) : 
    m_immunityTimePropertyHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2WebAclCaptchaConfigDetails& AwsWafv2WebAclCaptchaConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImmunityTimeProperty"))
  {
    m_immunityTimeProperty = jsonValue.GetObject("ImmunityTimeProperty");

    m_immunityTimePropertyHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2WebAclCaptchaConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_immunityTimePropertyHasBeenSet)
  {
   payload.WithObject("ImmunityTimeProperty", m_immunityTimeProperty.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
