/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreTestingRecoveryPointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace RestoreTestingRecoveryPointTypeMapper
      {

        static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");
        static const int SNAPSHOT_HASH = HashingUtils::HashString("SNAPSHOT");


        RestoreTestingRecoveryPointType GetRestoreTestingRecoveryPointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUOUS_HASH)
          {
            return RestoreTestingRecoveryPointType::CONTINUOUS;
          }
          else if (hashCode == SNAPSHOT_HASH)
          {
            return RestoreTestingRecoveryPointType::SNAPSHOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RestoreTestingRecoveryPointType>(hashCode);
          }

          return RestoreTestingRecoveryPointType::NOT_SET;
        }

        Aws::String GetNameForRestoreTestingRecoveryPointType(RestoreTestingRecoveryPointType enumValue)
        {
          switch(enumValue)
          {
          case RestoreTestingRecoveryPointType::NOT_SET:
            return {};
          case RestoreTestingRecoveryPointType::CONTINUOUS:
            return "CONTINUOUS";
          case RestoreTestingRecoveryPointType::SNAPSHOT:
            return "SNAPSHOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RestoreTestingRecoveryPointTypeMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
