/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TelemetryStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace TelemetryStatusMapper
      {

        static constexpr uint32_t UP_HASH = ConstExprHashingUtils::HashString("UP");
        static constexpr uint32_t DOWN_HASH = ConstExprHashingUtils::HashString("DOWN");


        TelemetryStatus GetTelemetryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UP_HASH)
          {
            return TelemetryStatus::UP;
          }
          else if (hashCode == DOWN_HASH)
          {
            return TelemetryStatus::DOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TelemetryStatus>(hashCode);
          }

          return TelemetryStatus::NOT_SET;
        }

        Aws::String GetNameForTelemetryStatus(TelemetryStatus enumValue)
        {
          switch(enumValue)
          {
          case TelemetryStatus::NOT_SET:
            return {};
          case TelemetryStatus::UP:
            return "UP";
          case TelemetryStatus::DOWN:
            return "DOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TelemetryStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
