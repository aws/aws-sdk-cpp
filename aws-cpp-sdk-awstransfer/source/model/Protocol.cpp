/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int SFTP_HASH = HashingUtils::HashString("SFTP");
        static const int FTP_HASH = HashingUtils::HashString("FTP");
        static const int FTPS_HASH = HashingUtils::HashString("FTPS");


        Protocol GetProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case Protocol::SFTP:
            return "SFTP";
          case Protocol::FTP:
            return "FTP";
          case Protocol::FTPS:
            return "FTPS";
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
