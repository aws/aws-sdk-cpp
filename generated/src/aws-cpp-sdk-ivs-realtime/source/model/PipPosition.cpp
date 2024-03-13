/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/PipPosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace PipPositionMapper
      {

        static const int TOP_LEFT_HASH = HashingUtils::HashString("TOP_LEFT");
        static const int TOP_RIGHT_HASH = HashingUtils::HashString("TOP_RIGHT");
        static const int BOTTOM_LEFT_HASH = HashingUtils::HashString("BOTTOM_LEFT");
        static const int BOTTOM_RIGHT_HASH = HashingUtils::HashString("BOTTOM_RIGHT");


        PipPosition GetPipPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOP_LEFT_HASH)
          {
            return PipPosition::TOP_LEFT;
          }
          else if (hashCode == TOP_RIGHT_HASH)
          {
            return PipPosition::TOP_RIGHT;
          }
          else if (hashCode == BOTTOM_LEFT_HASH)
          {
            return PipPosition::BOTTOM_LEFT;
          }
          else if (hashCode == BOTTOM_RIGHT_HASH)
          {
            return PipPosition::BOTTOM_RIGHT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipPosition>(hashCode);
          }

          return PipPosition::NOT_SET;
        }

        Aws::String GetNameForPipPosition(PipPosition enumValue)
        {
          switch(enumValue)
          {
          case PipPosition::NOT_SET:
            return {};
          case PipPosition::TOP_LEFT:
            return "TOP_LEFT";
          case PipPosition::TOP_RIGHT:
            return "TOP_RIGHT";
          case PipPosition::BOTTOM_LEFT:
            return "BOTTOM_LEFT";
          case PipPosition::BOTTOM_RIGHT:
            return "BOTTOM_RIGHT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipPositionMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
