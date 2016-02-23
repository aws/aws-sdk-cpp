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
#include <aws/config/model/ConfigurationItemStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Ok_HASH = HashingUtils::HashString("Ok");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Discovered_HASH = HashingUtils::HashString("Discovered");
static const int Deleted_HASH = HashingUtils::HashString("Deleted");

namespace Aws
{
namespace ConfigService
{
namespace Model
{
namespace ConfigurationItemStatusMapper
{
ConfigurationItemStatus GetConfigurationItemStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Ok_HASH)
  {
    return ConfigurationItemStatus::Ok;
  }
  else if (hashCode == Failed_HASH)
  {
    return ConfigurationItemStatus::Failed;
  }
  else if (hashCode == Discovered_HASH)
  {
    return ConfigurationItemStatus::Discovered;
  }
  else if (hashCode == Deleted_HASH)
  {
    return ConfigurationItemStatus::Deleted;
  }

  return ConfigurationItemStatus::NOT_SET;
}

Aws::String GetNameForConfigurationItemStatus(ConfigurationItemStatus value)
{
  switch(value)
  {
  case ConfigurationItemStatus::Ok:
    return "Ok";
  case ConfigurationItemStatus::Failed:
    return "Failed";
  case ConfigurationItemStatus::Discovered:
    return "Discovered";
  case ConfigurationItemStatus::Deleted:
    return "Deleted";
  default:
    return "";
  }
}

} // namespace ConfigurationItemStatusMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
