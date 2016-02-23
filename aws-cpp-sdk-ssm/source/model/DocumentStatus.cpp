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
#include <aws/ssm/model/DocumentStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Creating_HASH = HashingUtils::HashString("Creating");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int Deleting_HASH = HashingUtils::HashString("Deleting");

namespace Aws
{
namespace SSM
{
namespace Model
{
namespace DocumentStatusMapper
{
DocumentStatus GetDocumentStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Creating_HASH)
  {
    return DocumentStatus::Creating;
  }
  else if (hashCode == Active_HASH)
  {
    return DocumentStatus::Active;
  }
  else if (hashCode == Deleting_HASH)
  {
    return DocumentStatus::Deleting;
  }

  return DocumentStatus::NOT_SET;
}

Aws::String GetNameForDocumentStatus(DocumentStatus value)
{
  switch(value)
  {
  case DocumentStatus::Creating:
    return "Creating";
  case DocumentStatus::Active:
    return "Active";
  case DocumentStatus::Deleting:
    return "Deleting";
  default:
    return "";
  }
}

} // namespace DocumentStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
