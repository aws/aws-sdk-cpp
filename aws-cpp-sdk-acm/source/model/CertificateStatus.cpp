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
#include <aws/acm/model/CertificateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace CertificateStatusMapper
      {

        static const int PENDING_VALIDATION_HASH = HashingUtils::HashString("PENDING_VALIDATION");
        static const int ISSUED_HASH = HashingUtils::HashString("ISSUED");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int VALIDATION_TIMED_OUT_HASH = HashingUtils::HashString("VALIDATION_TIMED_OUT");
        static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CertificateStatus GetCertificateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VALIDATION_HASH)
          {
            return CertificateStatus::PENDING_VALIDATION;
          }
          else if (hashCode == ISSUED_HASH)
          {
            return CertificateStatus::ISSUED;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return CertificateStatus::INACTIVE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return CertificateStatus::EXPIRED;
          }
          else if (hashCode == VALIDATION_TIMED_OUT_HASH)
          {
            return CertificateStatus::VALIDATION_TIMED_OUT;
          }
          else if (hashCode == REVOKED_HASH)
          {
            return CertificateStatus::REVOKED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CertificateStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateStatus>(hashCode);
          }

          return CertificateStatus::NOT_SET;
        }

        Aws::String GetNameForCertificateStatus(CertificateStatus enumValue)
        {
          switch(enumValue)
          {
          case CertificateStatus::PENDING_VALIDATION:
            return "PENDING_VALIDATION";
          case CertificateStatus::ISSUED:
            return "ISSUED";
          case CertificateStatus::INACTIVE:
            return "INACTIVE";
          case CertificateStatus::EXPIRED:
            return "EXPIRED";
          case CertificateStatus::VALIDATION_TIMED_OUT:
            return "VALIDATION_TIMED_OUT";
          case CertificateStatus::REVOKED:
            return "REVOKED";
          case CertificateStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CertificateStatusMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
