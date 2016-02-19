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
#include <aws/s3/model/EncodingType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int url_HASH = HashingUtils::HashString("url");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace EncodingTypeMapper
{
EncodingType GetEncodingTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == url_HASH)
  {
    return EncodingType::url;
  }

  return EncodingType::NOT_SET;
}

Aws::String GetNameForEncodingType(EncodingType value)
{
  switch(value)
  {
  case EncodingType::url:
    return "url";
  default:
    return "";
  }
}

} // namespace EncodingTypeMapper
} // namespace Model
} // namespace S3
} // namespace Aws
