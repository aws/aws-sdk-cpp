/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AccessPreviewStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace AccessPreviewStatusMapper
      {

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AccessPreviewStatus GetAccessPreviewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return AccessPreviewStatus::COMPLETED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return AccessPreviewStatus::CREATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AccessPreviewStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessPreviewStatus>(hashCode);
          }

          return AccessPreviewStatus::NOT_SET;
        }

        Aws::String GetNameForAccessPreviewStatus(AccessPreviewStatus enumValue)
        {
          switch(enumValue)
          {
          case AccessPreviewStatus::COMPLETED:
            return "COMPLETED";
          case AccessPreviewStatus::CREATING:
            return "CREATING";
          case AccessPreviewStatus::FAILED:
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

      } // namespace AccessPreviewStatusMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
