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
#include <aws/kms/model/KeyUsageType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ENCRYPT_DECRYPT_HASH = HashingUtils::HashString("ENCRYPT_DECRYPT");

namespace Aws
{
namespace KMS
{
namespace Model
{
namespace KeyUsageTypeMapper
{


KeyUsageType GetKeyUsageTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENCRYPT_DECRYPT_HASH)
  {
     return KeyUsageType::ENCRYPT_DECRYPT;
  }
  return KeyUsageType::NOT_SET;
}

Aws::String GetNameForKeyUsageType(KeyUsageType value)
{
  switch(value)
  {
  case KeyUsageType::ENCRYPT_DECRYPT:
    return "ENCRYPT_DECRYPT";
  default:
    return "";
  }
}

} // namespace KeyUsageTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
