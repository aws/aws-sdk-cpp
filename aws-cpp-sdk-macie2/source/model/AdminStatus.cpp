/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AdminStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace AdminStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLING_IN_PROGRESS_HASH = HashingUtils::HashString("DISABLING_IN_PROGRESS");


        AdminStatus GetAdminStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AdminStatus::ENABLED;
          }
          else if (hashCode == DISABLING_IN_PROGRESS_HASH)
          {
            return AdminStatus::DISABLING_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdminStatus>(hashCode);
          }

          return AdminStatus::NOT_SET;
        }

        Aws::String GetNameForAdminStatus(AdminStatus enumValue)
        {
          switch(enumValue)
          {
          case AdminStatus::ENABLED:
            return "ENABLED";
          case AdminStatus::DISABLING_IN_PROGRESS:
            return "DISABLING_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdminStatusMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
