/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/encodingType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int SSH_HASH = HashingUtils::HashString("SSH");
static const int PEM_HASH = HashingUtils::HashString("PEM");

namespace Aws
{
namespace IAM
{
namespace Model
{
namespace encodingTypeMapper
{
encodingType GetencodingTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == SSH_HASH)
  {
    return encodingType::SSH;
  }
  else if (hashCode == PEM_HASH)
  {
    return encodingType::PEM;
  }

  return encodingType::NOT_SET;
}

Aws::String GetNameForencodingType(encodingType value)
{
  switch(value)
  {
  case encodingType::SSH:
    return "SSH";
  case encodingType::PEM:
    return "PEM";
  default:
    return "";
  }
}

} // namespace encodingTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
