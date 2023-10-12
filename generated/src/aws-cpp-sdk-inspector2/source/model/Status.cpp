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

        static constexpr uint32_t ENABLING_HASH = ConstExprHashingUtils::HashString("ENABLING");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t DISABLING_HASH = ConstExprHashingUtils::HashString("DISABLING");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t SUSPENDING_HASH = ConstExprHashingUtils::HashString("SUSPENDING");
        static constexpr uint32_t SUSPENDED_HASH = ConstExprHashingUtils::HashString("SUSPENDED");


        Status GetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
