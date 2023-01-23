/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ReportScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace ReportScopeMapper
      {

        static const int FAILED_FILES_ONLY_HASH = HashingUtils::HashString("FAILED_FILES_ONLY");


        ReportScope GetReportScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_FILES_ONLY_HASH)
          {
            return ReportScope::FAILED_FILES_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportScope>(hashCode);
          }

          return ReportScope::NOT_SET;
        }

        Aws::String GetNameForReportScope(ReportScope enumValue)
        {
          switch(enumValue)
          {
          case ReportScope::FAILED_FILES_ONLY:
            return "FAILED_FILES_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportScopeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
