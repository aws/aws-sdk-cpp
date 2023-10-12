/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessEndpointProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace VerifiedAccessEndpointProtocolMapper
      {

        static constexpr uint32_t http_HASH = ConstExprHashingUtils::HashString("http");
        static constexpr uint32_t https_HASH = ConstExprHashingUtils::HashString("https");


        VerifiedAccessEndpointProtocol GetVerifiedAccessEndpointProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == http_HASH)
          {
            return VerifiedAccessEndpointProtocol::http;
          }
          else if (hashCode == https_HASH)
          {
            return VerifiedAccessEndpointProtocol::https;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VerifiedAccessEndpointProtocol>(hashCode);
          }

          return VerifiedAccessEndpointProtocol::NOT_SET;
        }

        Aws::String GetNameForVerifiedAccessEndpointProtocol(VerifiedAccessEndpointProtocol enumValue)
        {
          switch(enumValue)
          {
          case VerifiedAccessEndpointProtocol::NOT_SET:
            return {};
          case VerifiedAccessEndpointProtocol::http:
            return "http";
          case VerifiedAccessEndpointProtocol::https:
            return "https";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VerifiedAccessEndpointProtocolMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
