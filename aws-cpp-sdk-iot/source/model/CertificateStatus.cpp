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
#include <aws/iot/model/CertificateStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");
static const int PENDING_TRANSFER_HASH = HashingUtils::HashString("PENDING_TRANSFER");

namespace Aws
{
namespace IoT
{
namespace Model
{
namespace CertificateStatusMapper
{


CertificateStatus GetCertificateStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH)
  {
     return CertificateStatus::ACTIVE;
  }
  else if (hashCode == INACTIVE_HASH)
  {
     return CertificateStatus::INACTIVE;
  }
  else if (hashCode == REVOKED_HASH)
  {
     return CertificateStatus::REVOKED;
  }
  else if (hashCode == PENDING_TRANSFER_HASH)
  {
     return CertificateStatus::PENDING_TRANSFER;
  }
  return CertificateStatus::NOT_SET;
}

Aws::String GetNameForCertificateStatus(CertificateStatus enumValue)
{
  switch(value)
  {
  case CertificateStatus::ACTIVE:
    return "ACTIVE";
  case CertificateStatus::INACTIVE:
    return "INACTIVE";
  case CertificateStatus::REVOKED:
    return "REVOKED";
  case CertificateStatus::PENDING_TRANSFER:
    return "PENDING_TRANSFER";
  default:
    return "";
  }
}

} // namespace CertificateStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
