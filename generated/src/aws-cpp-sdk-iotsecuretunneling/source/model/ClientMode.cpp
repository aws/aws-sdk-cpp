/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/ClientMode.h>
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
      namespace ClientModeMapper
      {

        static const int SOURCE_HASH = HashingUtils::HashString("SOURCE");
        static const int DESTINATION_HASH = HashingUtils::HashString("DESTINATION");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        ClientMode GetClientModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_HASH)
          {
            return ClientMode::SOURCE;
          }
          else if (hashCode == DESTINATION_HASH)
          {
            return ClientMode::DESTINATION;
          }
          else if (hashCode == ALL_HASH)
          {
            return ClientMode::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientMode>(hashCode);
          }

          return ClientMode::NOT_SET;
        }

        Aws::String GetNameForClientMode(ClientMode enumValue)
        {
          switch(enumValue)
          {
          case ClientMode::NOT_SET:
            return {};
          case ClientMode::SOURCE:
            return "SOURCE";
          case ClientMode::DESTINATION:
            return "DESTINATION";
          case ClientMode::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientModeMapper
    } // namespace Model
  } // namespace IoTSecureTunneling
} // namespace Aws
