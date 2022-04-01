/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/TunnelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSecureTunneling
  {
    namespace Model
    {
      namespace TunnelStatusMapper
      {

        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        TunnelStatus GetTunnelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return TunnelStatus::OPEN;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return TunnelStatus::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TunnelStatus>(hashCode);
          }

          return TunnelStatus::NOT_SET;
        }

        Aws::String GetNameForTunnelStatus(TunnelStatus enumValue)
        {
          switch(enumValue)
          {
          case TunnelStatus::OPEN:
            return "OPEN";
          case TunnelStatus::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TunnelStatusMapper
    } // namespace Model
  } // namespace IoTSecureTunneling
} // namespace Aws
