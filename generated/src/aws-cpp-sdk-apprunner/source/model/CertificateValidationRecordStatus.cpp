/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CertificateValidationRecordStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace CertificateValidationRecordStatusMapper
      {

        static const int PENDING_VALIDATION_HASH = HashingUtils::HashString("PENDING_VALIDATION");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CertificateValidationRecordStatus GetCertificateValidationRecordStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VALIDATION_HASH)
          {
            return CertificateValidationRecordStatus::PENDING_VALIDATION;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return CertificateValidationRecordStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CertificateValidationRecordStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateValidationRecordStatus>(hashCode);
          }

          return CertificateValidationRecordStatus::NOT_SET;
        }

        Aws::String GetNameForCertificateValidationRecordStatus(CertificateValidationRecordStatus enumValue)
        {
          switch(enumValue)
          {
          case CertificateValidationRecordStatus::NOT_SET:
            return {};
          case CertificateValidationRecordStatus::PENDING_VALIDATION:
            return "PENDING_VALIDATION";
          case CertificateValidationRecordStatus::SUCCESS:
            return "SUCCESS";
          case CertificateValidationRecordStatus::FAILED:
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

      } // namespace CertificateValidationRecordStatusMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
