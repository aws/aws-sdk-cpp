/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/UpdateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHub
  {
    namespace Model
    {
      namespace UpdateTypeMapper
      {

        static const int MIGRATION_TASK_STATE_UPDATED_HASH = HashingUtils::HashString("MIGRATION_TASK_STATE_UPDATED");


        UpdateType GetUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MIGRATION_TASK_STATE_UPDATED_HASH)
          {
            return UpdateType::MIGRATION_TASK_STATE_UPDATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateType>(hashCode);
          }

          return UpdateType::NOT_SET;
        }

        Aws::String GetNameForUpdateType(UpdateType enumValue)
        {
          switch(enumValue)
          {
          case UpdateType::NOT_SET:
            return {};
          case UpdateType::MIGRATION_TASK_STATE_UPDATED:
            return "MIGRATION_TASK_STATE_UPDATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateTypeMapper
    } // namespace Model
  } // namespace MigrationHub
} // namespace Aws
