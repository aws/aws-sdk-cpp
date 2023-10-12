/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ReportingErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace ReportingErrorCodeMapper
      {

        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t INVALID_PERMISSIONS_HASH = ConstExprHashingUtils::HashString("INVALID_PERMISSIONS");
        static constexpr uint32_t NO_FINDINGS_FOUND_HASH = ConstExprHashingUtils::HashString("NO_FINDINGS_FOUND");
        static constexpr uint32_t BUCKET_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("BUCKET_NOT_FOUND");
        static constexpr uint32_t INCOMPATIBLE_BUCKET_REGION_HASH = ConstExprHashingUtils::HashString("INCOMPATIBLE_BUCKET_REGION");
        static constexpr uint32_t MALFORMED_KMS_KEY_HASH = ConstExprHashingUtils::HashString("MALFORMED_KMS_KEY");


        ReportingErrorCode GetReportingErrorCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ReportingErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == INVALID_PERMISSIONS_HASH)
          {
            return ReportingErrorCode::INVALID_PERMISSIONS;
          }
          else if (hashCode == NO_FINDINGS_FOUND_HASH)
          {
            return ReportingErrorCode::NO_FINDINGS_FOUND;
          }
          else if (hashCode == BUCKET_NOT_FOUND_HASH)
          {
            return ReportingErrorCode::BUCKET_NOT_FOUND;
          }
          else if (hashCode == INCOMPATIBLE_BUCKET_REGION_HASH)
          {
            return ReportingErrorCode::INCOMPATIBLE_BUCKET_REGION;
          }
          else if (hashCode == MALFORMED_KMS_KEY_HASH)
          {
            return ReportingErrorCode::MALFORMED_KMS_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportingErrorCode>(hashCode);
          }

          return ReportingErrorCode::NOT_SET;
        }

        Aws::String GetNameForReportingErrorCode(ReportingErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ReportingErrorCode::NOT_SET:
            return {};
          case ReportingErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ReportingErrorCode::INVALID_PERMISSIONS:
            return "INVALID_PERMISSIONS";
          case ReportingErrorCode::NO_FINDINGS_FOUND:
            return "NO_FINDINGS_FOUND";
          case ReportingErrorCode::BUCKET_NOT_FOUND:
            return "BUCKET_NOT_FOUND";
          case ReportingErrorCode::INCOMPATIBLE_BUCKET_REGION:
            return "INCOMPATIBLE_BUCKET_REGION";
          case ReportingErrorCode::MALFORMED_KMS_KEY:
            return "MALFORMED_KMS_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportingErrorCodeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
