/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Status.h>
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
      namespace StatusMapper
      {

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int SUSPENDING_HASH = HashingUtils::HashString("SUSPENDING");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return Status::ENABLING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return Status::ENABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return Status::DISABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return Status::DISABLED;
          }
          else if (hashCode == SUSPENDING_HASH)
          {
            return Status::SUSPENDING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return Status::SUSPENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::NOT_SET:
            return {};
          case Status::ENABLING:
            return "ENABLING";
          case Status::ENABLED:
            return "ENABLED";
          case Status::DISABLING:
            return "DISABLING";
          case Status::DISABLED:
            return "DISABLED";
          case Status::SUSPENDING:
            return "SUSPENDING";
          case Status::SUSPENDED:
            return "SUSPENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
