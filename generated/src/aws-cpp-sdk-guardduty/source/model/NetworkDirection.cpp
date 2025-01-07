/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/NetworkDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace NetworkDirectionMapper
      {

        static const int INBOUND_HASH = HashingUtils::HashString("INBOUND");
        static const int OUTBOUND_HASH = HashingUtils::HashString("OUTBOUND");


        NetworkDirection GetNetworkDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INBOUND_HASH)
          {
            return NetworkDirection::INBOUND;
          }
          else if (hashCode == OUTBOUND_HASH)
          {
            return NetworkDirection::OUTBOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkDirection>(hashCode);
          }

          return NetworkDirection::NOT_SET;
        }

        Aws::String GetNameForNetworkDirection(NetworkDirection enumValue)
        {
          switch(enumValue)
          {
          case NetworkDirection::NOT_SET:
            return {};
          case NetworkDirection::INBOUND:
            return "INBOUND";
          case NetworkDirection::OUTBOUND:
            return "OUTBOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkDirectionMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
