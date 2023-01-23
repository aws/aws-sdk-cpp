/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/SSEStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DAX
  {
    namespace Model
    {
      namespace SSEStatusMapper
      {

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        SSEStatus GetSSEStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return SSEStatus::ENABLING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return SSEStatus::ENABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return SSEStatus::DISABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return SSEStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SSEStatus>(hashCode);
          }

          return SSEStatus::NOT_SET;
        }

        Aws::String GetNameForSSEStatus(SSEStatus enumValue)
        {
          switch(enumValue)
          {
          case SSEStatus::ENABLING:
            return "ENABLING";
          case SSEStatus::ENABLED:
            return "ENABLED";
          case SSEStatus::DISABLING:
            return "DISABLING";
          case SSEStatus::DISABLED:
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

      } // namespace SSEStatusMapper
    } // namespace Model
  } // namespace DAX
} // namespace Aws
