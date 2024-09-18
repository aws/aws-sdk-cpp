/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DataAccessStatus.h>
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
      namespace DataAccessStatusMapper
      {

        static const int Disabled_HASH = HashingUtils::HashString("Disabled");
        static const int Disabling_HASH = HashingUtils::HashString("Disabling");
        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Enabling_HASH = HashingUtils::HashString("Enabling");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        DataAccessStatus GetDataAccessStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Disabled_HASH)
          {
            return DataAccessStatus::Disabled;
          }
          else if (hashCode == Disabling_HASH)
          {
            return DataAccessStatus::Disabling;
          }
          else if (hashCode == Enabled_HASH)
          {
            return DataAccessStatus::Enabled;
          }
          else if (hashCode == Enabling_HASH)
          {
            return DataAccessStatus::Enabling;
          }
          else if (hashCode == Failed_HASH)
          {
            return DataAccessStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataAccessStatus>(hashCode);
          }

          return DataAccessStatus::NOT_SET;
        }

        Aws::String GetNameForDataAccessStatus(DataAccessStatus enumValue)
        {
          switch(enumValue)
          {
          case DataAccessStatus::NOT_SET:
            return {};
          case DataAccessStatus::Disabled:
            return "Disabled";
          case DataAccessStatus::Disabling:
            return "Disabling";
          case DataAccessStatus::Enabled:
            return "Enabled";
          case DataAccessStatus::Enabling:
            return "Enabling";
          case DataAccessStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataAccessStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
