/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/AuditReportStatus.h>
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
      namespace AuditReportStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AuditReportStatus GetAuditReportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AuditReportStatus::CREATING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return AuditReportStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AuditReportStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditReportStatus>(hashCode);
          }

          return AuditReportStatus::NOT_SET;
        }

        Aws::String GetNameForAuditReportStatus(AuditReportStatus enumValue)
        {
          switch(enumValue)
          {
          case AuditReportStatus::CREATING:
            return "CREATING";
          case AuditReportStatus::SUCCESS:
            return "SUCCESS";
          case AuditReportStatus::FAILED:
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

      } // namespace AuditReportStatusMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
