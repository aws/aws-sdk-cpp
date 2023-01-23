/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ContinuousBackupsStatus.h>
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
      namespace ContinuousBackupsStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ContinuousBackupsStatus GetContinuousBackupsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ContinuousBackupsStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ContinuousBackupsStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContinuousBackupsStatus>(hashCode);
          }

          return ContinuousBackupsStatus::NOT_SET;
        }

        Aws::String GetNameForContinuousBackupsStatus(ContinuousBackupsStatus enumValue)
        {
          switch(enumValue)
          {
          case ContinuousBackupsStatus::ENABLED:
            return "ENABLED";
          case ContinuousBackupsStatus::DISABLED:
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

      } // namespace ContinuousBackupsStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
