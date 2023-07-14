/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CertificateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace CertificateStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");
        static const int PENDING_TRANSFER_HASH = HashingUtils::HashString("PENDING_TRANSFER");
        static const int REGISTER_INACTIVE_HASH = HashingUtils::HashString("REGISTER_INACTIVE");
        static const int PENDING_ACTIVATION_HASH = HashingUtils::HashString("PENDING_ACTIVATION");


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
          else if (hashCode == REGISTER_INACTIVE_HASH)
          {
            return CertificateStatus::REGISTER_INACTIVE;
          }
          else if (hashCode == PENDING_ACTIVATION_HASH)
          {
            return CertificateStatus::PENDING_ACTIVATION;
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
          case CertificateStatus::ACTIVE:
            return "ACTIVE";
          case CertificateStatus::INACTIVE:
            return "INACTIVE";
          case CertificateStatus::REVOKED:
            return "REVOKED";
          case CertificateStatus::PENDING_TRANSFER:
            return "PENDING_TRANSFER";
          case CertificateStatus::REGISTER_INACTIVE:
            return "REGISTER_INACTIVE";
          case CertificateStatus::PENDING_ACTIVATION:
            return "PENDING_ACTIVATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
