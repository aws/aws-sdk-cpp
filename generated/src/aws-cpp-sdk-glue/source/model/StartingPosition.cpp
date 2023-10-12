/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StartingPosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace StartingPositionMapper
      {

        static constexpr uint32_t latest_HASH = ConstExprHashingUtils::HashString("latest");
        static constexpr uint32_t trim_horizon_HASH = ConstExprHashingUtils::HashString("trim_horizon");
        static constexpr uint32_t earliest_HASH = ConstExprHashingUtils::HashString("earliest");
        static constexpr uint32_t timestamp_HASH = ConstExprHashingUtils::HashString("timestamp");


        StartingPosition GetStartingPositionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == latest_HASH)
          {
            return StartingPosition::latest;
          }
          else if (hashCode == trim_horizon_HASH)
          {
            return StartingPosition::trim_horizon;
          }
          else if (hashCode == earliest_HASH)
          {
            return StartingPosition::earliest;
          }
          else if (hashCode == timestamp_HASH)
          {
            return StartingPosition::timestamp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StartingPosition>(hashCode);
          }

          return StartingPosition::NOT_SET;
        }

        Aws::String GetNameForStartingPosition(StartingPosition enumValue)
        {
          switch(enumValue)
          {
          case StartingPosition::NOT_SET:
            return {};
          case StartingPosition::latest:
            return "latest";
          case StartingPosition::trim_horizon:
            return "trim_horizon";
          case StartingPosition::earliest:
            return "earliest";
          case StartingPosition::timestamp:
            return "timestamp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StartingPositionMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
