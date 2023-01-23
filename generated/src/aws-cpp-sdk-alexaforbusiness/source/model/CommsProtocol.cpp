/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/CommsProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace CommsProtocolMapper
      {

        static const int SIP_HASH = HashingUtils::HashString("SIP");
        static const int SIPS_HASH = HashingUtils::HashString("SIPS");
        static const int H323_HASH = HashingUtils::HashString("H323");


        CommsProtocol GetCommsProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIP_HASH)
          {
            return CommsProtocol::SIP;
          }
          else if (hashCode == SIPS_HASH)
          {
            return CommsProtocol::SIPS;
          }
          else if (hashCode == H323_HASH)
          {
            return CommsProtocol::H323;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommsProtocol>(hashCode);
          }

          return CommsProtocol::NOT_SET;
        }

        Aws::String GetNameForCommsProtocol(CommsProtocol enumValue)
        {
          switch(enumValue)
          {
          case CommsProtocol::SIP:
            return "SIP";
          case CommsProtocol::SIPS:
            return "SIPS";
          case CommsProtocol::H323:
            return "H323";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommsProtocolMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
