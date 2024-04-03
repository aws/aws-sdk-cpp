/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/SecurityPolicyProtocol.h>
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
      namespace SecurityPolicyProtocolMapper
      {

        static const int SFTP_HASH = HashingUtils::HashString("SFTP");
        static const int FTPS_HASH = HashingUtils::HashString("FTPS");


        SecurityPolicyProtocol GetSecurityPolicyProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SFTP_HASH)
          {
            return SecurityPolicyProtocol::SFTP;
          }
          else if (hashCode == FTPS_HASH)
          {
            return SecurityPolicyProtocol::FTPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityPolicyProtocol>(hashCode);
          }

          return SecurityPolicyProtocol::NOT_SET;
        }

        Aws::String GetNameForSecurityPolicyProtocol(SecurityPolicyProtocol enumValue)
        {
          switch(enumValue)
          {
          case SecurityPolicyProtocol::NOT_SET:
            return {};
          case SecurityPolicyProtocol::SFTP:
            return "SFTP";
          case SecurityPolicyProtocol::FTPS:
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

      } // namespace SecurityPolicyProtocolMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
