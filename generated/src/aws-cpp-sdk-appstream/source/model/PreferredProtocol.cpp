/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/PreferredProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace PreferredProtocolMapper
      {

        static const int TCP_HASH = HashingUtils::HashString("TCP");
        static const int UDP_HASH = HashingUtils::HashString("UDP");


        PreferredProtocol GetPreferredProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TCP_HASH)
          {
            return PreferredProtocol::TCP;
          }
          else if (hashCode == UDP_HASH)
          {
            return PreferredProtocol::UDP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreferredProtocol>(hashCode);
          }

          return PreferredProtocol::NOT_SET;
        }

        Aws::String GetNameForPreferredProtocol(PreferredProtocol enumValue)
        {
          switch(enumValue)
          {
          case PreferredProtocol::NOT_SET:
            return {};
          case PreferredProtocol::TCP:
            return "TCP";
          case PreferredProtocol::UDP:
            return "UDP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreferredProtocolMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
