/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ManagedCertificateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace ManagedCertificateStatusMapper
      {

        static const int pending_validation_HASH = HashingUtils::HashString("pending-validation");
        static const int issued_HASH = HashingUtils::HashString("issued");
        static const int inactive_HASH = HashingUtils::HashString("inactive");
        static const int expired_HASH = HashingUtils::HashString("expired");
        static const int validation_timed_out_HASH = HashingUtils::HashString("validation-timed-out");
        static const int revoked_HASH = HashingUtils::HashString("revoked");
        static const int failed_HASH = HashingUtils::HashString("failed");


        ManagedCertificateStatus GetManagedCertificateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_validation_HASH)
          {
            return ManagedCertificateStatus::pending_validation;
          }
          else if (hashCode == issued_HASH)
          {
            return ManagedCertificateStatus::issued;
          }
          else if (hashCode == inactive_HASH)
          {
            return ManagedCertificateStatus::inactive;
          }
          else if (hashCode == expired_HASH)
          {
            return ManagedCertificateStatus::expired;
          }
          else if (hashCode == validation_timed_out_HASH)
          {
            return ManagedCertificateStatus::validation_timed_out;
          }
          else if (hashCode == revoked_HASH)
          {
            return ManagedCertificateStatus::revoked;
          }
          else if (hashCode == failed_HASH)
          {
            return ManagedCertificateStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedCertificateStatus>(hashCode);
          }

          return ManagedCertificateStatus::NOT_SET;
        }

        Aws::String GetNameForManagedCertificateStatus(ManagedCertificateStatus enumValue)
        {
          switch(enumValue)
          {
          case ManagedCertificateStatus::NOT_SET:
            return {};
          case ManagedCertificateStatus::pending_validation:
            return "pending-validation";
          case ManagedCertificateStatus::issued:
            return "issued";
          case ManagedCertificateStatus::inactive:
            return "inactive";
          case ManagedCertificateStatus::expired:
            return "expired";
          case ManagedCertificateStatus::validation_timed_out:
            return "validation-timed-out";
          case ManagedCertificateStatus::revoked:
            return "revoked";
          case ManagedCertificateStatus::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedCertificateStatusMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
