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
#include <aws/ssm/model/AssociationStatusName.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Success_HASH = HashingUtils::HashString("Success");
static const int Failed_HASH = HashingUtils::HashString("Failed");

namespace Aws
{
namespace SSM
{
namespace Model
{
namespace AssociationStatusNameMapper
{


AssociationStatusName GetAssociationStatusNameForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH)
  {
     return AssociationStatusName::Pending;
  }
  else if (hashCode == Success_HASH)
  {
     return AssociationStatusName::Success;
  }
  else if (hashCode == Failed_HASH)
  {
     return AssociationStatusName::Failed;
  }
  return AssociationStatusName::NOT_SET;
}

Aws::String GetNameForAssociationStatusName(AssociationStatusName enumValue)
{
  switch(enumValue)
  {
  case AssociationStatusName::Pending:
    return "Pending";
  case AssociationStatusName::Success:
    return "Success";
  case AssociationStatusName::Failed:
    return "Failed";
  default:
    return "";
  }
}

} // namespace AssociationStatusNameMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
