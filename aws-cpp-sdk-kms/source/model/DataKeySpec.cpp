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
#include <aws/kms/model/DataKeySpec.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int AES_256_HASH = HashingUtils::HashString("AES_256");
static const int AES_128_HASH = HashingUtils::HashString("AES_128");

namespace Aws
{
namespace KMS
{
namespace Model
{
namespace DataKeySpecMapper
{
DataKeySpec GetDataKeySpecForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == AES_256_HASH)
  {
    return DataKeySpec::AES_256;
  }
  else if (hashCode == AES_128_HASH)
  {
    return DataKeySpec::AES_128;
  }

  return DataKeySpec::NOT_SET;
}

Aws::String GetNameForDataKeySpec(DataKeySpec value)
{
  switch(value)
  {
  case DataKeySpec::AES_256:
    return "AES_256";
  case DataKeySpec::AES_128:
    return "AES_128";
  default:
    return "";
  }
}

} // namespace DataKeySpecMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
