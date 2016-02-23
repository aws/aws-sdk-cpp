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
#include <aws/cloudfront/model/SslProtocol.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int SSLv3_HASH = HashingUtils::HashString("SSLv3");
static const int TLSv1_HASH = HashingUtils::HashString("TLSv1");
static const int TLSv1_1_HASH = HashingUtils::HashString("TLSv1.1");
static const int TLSv1_2_HASH = HashingUtils::HashString("TLSv1.2");

namespace Aws
{
namespace CloudFront
{
namespace Model
{
namespace SslProtocolMapper
{
SslProtocol GetSslProtocolForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == SSLv3_HASH)
  {
    return SslProtocol::SSLv3;
  }
  else if (hashCode == TLSv1_HASH)
  {
    return SslProtocol::TLSv1;
  }
  else if (hashCode == TLSv1_1_HASH)
  {
    return SslProtocol::TLSv1_1;
  }
  else if (hashCode == TLSv1_2_HASH)
  {
    return SslProtocol::TLSv1_2;
  }

  return SslProtocol::NOT_SET;
}

Aws::String GetNameForSslProtocol(SslProtocol value)
{
  switch(value)
  {
  case SslProtocol::SSLv3:
    return "SSLv3";
  case SslProtocol::TLSv1:
    return "TLSv1";
  case SslProtocol::TLSv1_1:
    return "TLSv1.1";
  case SslProtocol::TLSv1_2:
    return "TLSv1.2";
  default:
    return "";
  }
}

} // namespace SslProtocolMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
