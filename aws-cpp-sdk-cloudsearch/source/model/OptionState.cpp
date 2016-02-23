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
#include <aws/cloudsearch/model/OptionState.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int RequiresIndexDocuments_HASH = HashingUtils::HashString("RequiresIndexDocuments");
static const int Processing_HASH = HashingUtils::HashString("Processing");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int FailedToValidate_HASH = HashingUtils::HashString("FailedToValidate");

namespace Aws
{
namespace CloudSearch
{
namespace Model
{
namespace OptionStateMapper
{


OptionState GetOptionStateForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RequiresIndexDocuments_HASH)
  {
     return OptionState::RequiresIndexDocuments;
  }
  else if (hashCode == Processing_HASH)
  {
     return OptionState::Processing;
  }
  else if (hashCode == Active_HASH)
  {
     return OptionState::Active;
  }
  else if (hashCode == FailedToValidate_HASH)
  {
     return OptionState::FailedToValidate;
  }
  return OptionState::NOT_SET;
}

Aws::String GetNameForOptionState(OptionState value)
{
  switch(value)
  {
  case OptionState::RequiresIndexDocuments:
    return "RequiresIndexDocuments";
  case OptionState::Processing:
    return "Processing";
  case OptionState::Active:
    return "Active";
  case OptionState::FailedToValidate:
    return "FailedToValidate";
  default:
    return "";
  }
}

} // namespace OptionStateMapper
} // namespace Model
} // namespace CloudSearch
} // namespace Aws
