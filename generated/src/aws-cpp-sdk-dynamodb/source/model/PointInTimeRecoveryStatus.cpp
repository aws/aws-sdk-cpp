/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/PointInTimeRecoveryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace PointInTimeRecoveryStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        PointInTimeRecoveryStatus GetPointInTimeRecoveryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PointInTimeRecoveryStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return PointInTimeRecoveryStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PointInTimeRecoveryStatus>(hashCode);
          }

          return PointInTimeRecoveryStatus::NOT_SET;
        }

        Aws::String GetNameForPointInTimeRecoveryStatus(PointInTimeRecoveryStatus enumValue)
        {
          switch(enumValue)
          {
          case PointInTimeRecoveryStatus::ENABLED:
            return "ENABLED";
          case PointInTimeRecoveryStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PointInTimeRecoveryStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
