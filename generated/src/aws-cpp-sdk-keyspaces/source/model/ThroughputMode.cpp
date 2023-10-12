/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ThroughputMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace ThroughputModeMapper
      {

        static constexpr uint32_t PAY_PER_REQUEST_HASH = ConstExprHashingUtils::HashString("PAY_PER_REQUEST");
        static constexpr uint32_t PROVISIONED_HASH = ConstExprHashingUtils::HashString("PROVISIONED");


        ThroughputMode GetThroughputModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PAY_PER_REQUEST_HASH)
          {
            return ThroughputMode::PAY_PER_REQUEST;
          }
          else if (hashCode == PROVISIONED_HASH)
          {
            return ThroughputMode::PROVISIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThroughputMode>(hashCode);
          }

          return ThroughputMode::NOT_SET;
        }

        Aws::String GetNameForThroughputMode(ThroughputMode enumValue)
        {
          switch(enumValue)
          {
          case ThroughputMode::NOT_SET:
            return {};
          case ThroughputMode::PAY_PER_REQUEST:
            return "PAY_PER_REQUEST";
          case ThroughputMode::PROVISIONED:
            return "PROVISIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThroughputModeMapper
    } // namespace Model
  } // namespace Keyspaces
} // namespace Aws
