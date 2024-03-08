/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DetailedStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace DetailedStatusMapper
      {

        static const int CONFIGURATION_COMPLETE_HASH = HashingUtils::HashString("CONFIGURATION_COMPLETE");
        static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");


        DetailedStatus GetDetailedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIGURATION_COMPLETE_HASH)
          {
            return DetailedStatus::CONFIGURATION_COMPLETE;
          }
          else if (hashCode == VALIDATION_FAILED_HASH)
          {
            return DetailedStatus::VALIDATION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetailedStatus>(hashCode);
          }

          return DetailedStatus::NOT_SET;
        }

        Aws::String GetNameForDetailedStatus(DetailedStatus enumValue)
        {
          switch(enumValue)
          {
          case DetailedStatus::NOT_SET:
            return {};
          case DetailedStatus::CONFIGURATION_COMPLETE:
            return "CONFIGURATION_COMPLETE";
          case DetailedStatus::VALIDATION_FAILED:
            return "VALIDATION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetailedStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
