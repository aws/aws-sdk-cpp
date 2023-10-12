/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ImportFailureStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace ImportFailureStatusMapper
      {

        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t RETRY_HASH = ConstExprHashingUtils::HashString("RETRY");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");


        ImportFailureStatus GetImportFailureStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return ImportFailureStatus::FAILED;
          }
          else if (hashCode == RETRY_HASH)
          {
            return ImportFailureStatus::RETRY;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ImportFailureStatus::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportFailureStatus>(hashCode);
          }

          return ImportFailureStatus::NOT_SET;
        }

        Aws::String GetNameForImportFailureStatus(ImportFailureStatus enumValue)
        {
          switch(enumValue)
          {
          case ImportFailureStatus::NOT_SET:
            return {};
          case ImportFailureStatus::FAILED:
            return "FAILED";
          case ImportFailureStatus::RETRY:
            return "RETRY";
          case ImportFailureStatus::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportFailureStatusMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
