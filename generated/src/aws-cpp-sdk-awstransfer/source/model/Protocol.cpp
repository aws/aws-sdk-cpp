/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/Protocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace ProtocolMapper
      {

        static constexpr uint32_t SFTP_HASH = ConstExprHashingUtils::HashString("SFTP");
        static constexpr uint32_t FTP_HASH = ConstExprHashingUtils::HashString("FTP");
        static constexpr uint32_t FTPS_HASH = ConstExprHashingUtils::HashString("FTPS");
        static constexpr uint32_t AS2_HASH = ConstExprHashingUtils::HashString("AS2");


        Protocol GetProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SFTP_HASH)
          {
            return Protocol::SFTP;
          }
          else if (hashCode == FTP_HASH)
          {
            return Protocol::FTP;
          }
          else if (hashCode == FTPS_HASH)
          {
            return Protocol::FTPS;
          }
          else if (hashCode == AS2_HASH)
          {
            return Protocol::AS2;
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
          case Protocol::NOT_SET:
            return {};
          case Protocol::SFTP:
            return "SFTP";
          case Protocol::FTP:
            return "FTP";
          case Protocol::FTPS:
            return "FTPS";
          case Protocol::AS2:
            return "AS2";
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
  } // namespace Transfer
} // namespace Aws
