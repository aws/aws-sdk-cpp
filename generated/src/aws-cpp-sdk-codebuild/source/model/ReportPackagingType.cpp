/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportPackagingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace ReportPackagingTypeMapper
      {

        static const int ZIP_HASH = HashingUtils::HashString("ZIP");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ReportPackagingType GetReportPackagingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZIP_HASH)
          {
            return ReportPackagingType::ZIP;
          }
          else if (hashCode == NONE_HASH)
          {
            return ReportPackagingType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportPackagingType>(hashCode);
          }

          return ReportPackagingType::NOT_SET;
        }

        Aws::String GetNameForReportPackagingType(ReportPackagingType enumValue)
        {
          switch(enumValue)
          {
          case ReportPackagingType::ZIP:
            return "ZIP";
          case ReportPackagingType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportPackagingTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
