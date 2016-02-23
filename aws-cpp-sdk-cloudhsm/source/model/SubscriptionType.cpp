/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudhsm/model/SubscriptionType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int PRODUCTION_HASH = HashingUtils::HashString("PRODUCTION");

namespace Aws
{
namespace CloudHSM
{
namespace Model
{
namespace SubscriptionTypeMapper
{


SubscriptionType GetSubscriptionTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRODUCTION_HASH)
  {
     return SubscriptionType::PRODUCTION;
  }
  return SubscriptionType::NOT_SET;
}

Aws::String GetNameForSubscriptionType(SubscriptionType value)
{
  switch(value)
  {
  case SubscriptionType::PRODUCTION:
    return "PRODUCTION";
  default:
    return "";
  }
}

} // namespace SubscriptionTypeMapper
} // namespace Model
} // namespace CloudHSM
} // namespace Aws
