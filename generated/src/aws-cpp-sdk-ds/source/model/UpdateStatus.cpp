/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/UpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace UpdateStatusMapper
      {

        static const int Updated_HASH = HashingUtils::HashString("Updated");
        static const int Updating_HASH = HashingUtils::HashString("Updating");
        static const int UpdateFailed_HASH = HashingUtils::HashString("UpdateFailed");


        UpdateStatus GetUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Updated_HASH)
          {
            return UpdateStatus::Updated;
          }
          else if (hashCode == Updating_HASH)
          {
            return UpdateStatus::Updating;
          }
          else if (hashCode == UpdateFailed_HASH)
          {
            return UpdateStatus::UpdateFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateStatus>(hashCode);
          }

          return UpdateStatus::NOT_SET;
        }

        Aws::String GetNameForUpdateStatus(UpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdateStatus::Updated:
            return "Updated";
          case UpdateStatus::Updating:
            return "Updating";
          case UpdateStatus::UpdateFailed:
            return "UpdateFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
