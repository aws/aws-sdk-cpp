/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafv2ActionBlockDetails.h>
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

AwsWafv2ActionBlockDetails::AwsWafv2ActionBlockDetails() : 
    m_customResponseHasBeenSet(false)
{
}

AwsWafv2ActionBlockDetails::AwsWafv2ActionBlockDetails(JsonView jsonValue) : 
    m_customResponseHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafv2ActionBlockDetails& AwsWafv2ActionBlockDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomResponse"))
  {
    m_customResponse = jsonValue.GetObject("CustomResponse");

    m_customResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafv2ActionBlockDetails::Jsonize() const
{
  JsonValue payload;

  if(m_customResponseHasBeenSet)
  {
   payload.WithObject("CustomResponse", m_customResponse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
