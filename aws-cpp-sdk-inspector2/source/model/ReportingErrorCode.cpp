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

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int INVALID_PERMISSIONS_HASH = HashingUtils::HashString("INVALID_PERMISSIONS");


        ReportingErrorCode GetReportingErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ReportingErrorCode::INTERNAL_ERROR;
          }
          else if (hashCode == INVALID_PERMISSIONS_HASH)
          {
            return ReportingErrorCode::INVALID_PERMISSIONS;
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
          case ReportingErrorCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ReportingErrorCode::INVALID_PERMISSIONS:
            return "INVALID_PERMISSIONS";
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
