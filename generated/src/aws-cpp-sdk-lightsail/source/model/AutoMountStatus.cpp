/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AutoMountStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace AutoMountStatusMapper
      {

        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Mounted_HASH = HashingUtils::HashString("Mounted");
        static const int NotMounted_HASH = HashingUtils::HashString("NotMounted");


        AutoMountStatus GetAutoMountStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Failed_HASH)
          {
            return AutoMountStatus::Failed;
          }
          else if (hashCode == Pending_HASH)
          {
            return AutoMountStatus::Pending;
          }
          else if (hashCode == Mounted_HASH)
          {
            return AutoMountStatus::Mounted;
          }
          else if (hashCode == NotMounted_HASH)
          {
            return AutoMountStatus::NotMounted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMountStatus>(hashCode);
          }

          return AutoMountStatus::NOT_SET;
        }

        Aws::String GetNameForAutoMountStatus(AutoMountStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoMountStatus::NOT_SET:
            return {};
          case AutoMountStatus::Failed:
            return "Failed";
          case AutoMountStatus::Pending:
            return "Pending";
          case AutoMountStatus::Mounted:
            return "Mounted";
          case AutoMountStatus::NotMounted:
            return "NotMounted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMountStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
