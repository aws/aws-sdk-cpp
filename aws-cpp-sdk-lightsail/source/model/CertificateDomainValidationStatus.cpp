/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CertificateDomainValidationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace CertificateDomainValidationStatusMapper
      {

        static const int PENDING_VALIDATION_HASH = HashingUtils::HashString("PENDING_VALIDATION");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");


        CertificateDomainValidationStatus GetCertificateDomainValidationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VALIDATION_HASH)
          {
            return CertificateDomainValidationStatus::PENDING_VALIDATION;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CertificateDomainValidationStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return CertificateDomainValidationStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateDomainValidationStatus>(hashCode);
          }

          return CertificateDomainValidationStatus::NOT_SET;
        }

        Aws::String GetNameForCertificateDomainValidationStatus(CertificateDomainValidationStatus enumValue)
        {
          switch(enumValue)
          {
          case CertificateDomainValidationStatus::PENDING_VALIDATION:
            return "PENDING_VALIDATION";
          case CertificateDomainValidationStatus::FAILED:
            return "FAILED";
          case CertificateDomainValidationStatus::SUCCESS:
            return "SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateDomainValidationStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
