/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CertificateAuthorityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace CertificateAuthorityStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int PENDING_CERTIFICATE_HASH = HashingUtils::HashString("PENDING_CERTIFICATE");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CertificateAuthorityStatus GetCertificateAuthorityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return CertificateAuthorityStatus::CREATING;
          }
          else if (hashCode == PENDING_CERTIFICATE_HASH)
          {
            return CertificateAuthorityStatus::PENDING_CERTIFICATE;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return CertificateAuthorityStatus::ACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return CertificateAuthorityStatus::DELETED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CertificateAuthorityStatus::DISABLED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return CertificateAuthorityStatus::EXPIRED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CertificateAuthorityStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateAuthorityStatus>(hashCode);
          }

          return CertificateAuthorityStatus::NOT_SET;
        }

        Aws::String GetNameForCertificateAuthorityStatus(CertificateAuthorityStatus enumValue)
        {
          switch(enumValue)
          {
          case CertificateAuthorityStatus::CREATING:
            return "CREATING";
          case CertificateAuthorityStatus::PENDING_CERTIFICATE:
            return "PENDING_CERTIFICATE";
          case CertificateAuthorityStatus::ACTIVE:
            return "ACTIVE";
          case CertificateAuthorityStatus::DELETED:
            return "DELETED";
          case CertificateAuthorityStatus::DISABLED:
            return "DISABLED";
          case CertificateAuthorityStatus::EXPIRED:
            return "EXPIRED";
          case CertificateAuthorityStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateAuthorityStatusMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
