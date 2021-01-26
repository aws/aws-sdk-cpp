/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Protocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace ProtocolMapper
      {

        static const int zixi_push_HASH = HashingUtils::HashString("zixi-push");
        static const int rtp_fec_HASH = HashingUtils::HashString("rtp-fec");
        static const int rtp_HASH = HashingUtils::HashString("rtp");
        static const int zixi_pull_HASH = HashingUtils::HashString("zixi-pull");
        static const int rist_HASH = HashingUtils::HashString("rist");


        Protocol GetProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == zixi_push_HASH)
          {
            return Protocol::zixi_push;
          }
          else if (hashCode == rtp_fec_HASH)
          {
            return Protocol::rtp_fec;
          }
          else if (hashCode == rtp_HASH)
          {
            return Protocol::rtp;
          }
          else if (hashCode == zixi_pull_HASH)
          {
            return Protocol::zixi_pull;
          }
          else if (hashCode == rist_HASH)
          {
            return Protocol::rist;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Protocol>(hashCode);
          }

          return Protocol::NOT_SET;
        }

        Aws::String GetNameForProtocol(Protocol enumValue)
        {
          switch(enumValue)
          {
          case Protocol::zixi_push:
            return "zixi-push";
          case Protocol::rtp_fec:
            return "rtp-fec";
          case Protocol::rtp:
            return "rtp";
          case Protocol::zixi_pull:
            return "zixi-pull";
          case Protocol::rist:
            return "rist";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
