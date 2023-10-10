/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/DelegatedAdminStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace DelegatedAdminStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLE_IN_PROGRESS_HASH = HashingUtils::HashString("DISABLE_IN_PROGRESS");


        DelegatedAdminStatus GetDelegatedAdminStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DelegatedAdminStatus::ENABLED;
          }
          else if (hashCode == DISABLE_IN_PROGRESS_HASH)
          {
            return DelegatedAdminStatus::DISABLE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DelegatedAdminStatus>(hashCode);
          }

          return DelegatedAdminStatus::NOT_SET;
        }

        Aws::String GetNameForDelegatedAdminStatus(DelegatedAdminStatus enumValue)
        {
          switch(enumValue)
          {
          case DelegatedAdminStatus::NOT_SET:
            return {};
          case DelegatedAdminStatus::ENABLED:
            return "ENABLED";
          case DelegatedAdminStatus::DISABLE_IN_PROGRESS:
            return "DISABLE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DelegatedAdminStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
