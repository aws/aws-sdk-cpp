/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InternetGatewayBlockMode.h>
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
      namespace InternetGatewayBlockModeMapper
      {

        static const int off_HASH = HashingUtils::HashString("off");
        static const int block_bidirectional_HASH = HashingUtils::HashString("block-bidirectional");
        static const int block_ingress_HASH = HashingUtils::HashString("block-ingress");


        InternetGatewayBlockMode GetInternetGatewayBlockModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == off_HASH)
          {
            return InternetGatewayBlockMode::off;
          }
          else if (hashCode == block_bidirectional_HASH)
          {
            return InternetGatewayBlockMode::block_bidirectional;
          }
          else if (hashCode == block_ingress_HASH)
          {
            return InternetGatewayBlockMode::block_ingress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InternetGatewayBlockMode>(hashCode);
          }

          return InternetGatewayBlockMode::NOT_SET;
        }

        Aws::String GetNameForInternetGatewayBlockMode(InternetGatewayBlockMode enumValue)
        {
          switch(enumValue)
          {
          case InternetGatewayBlockMode::NOT_SET:
            return {};
          case InternetGatewayBlockMode::off:
            return "off";
          case InternetGatewayBlockMode::block_bidirectional:
            return "block-bidirectional";
          case InternetGatewayBlockMode::block_ingress:
            return "block-ingress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InternetGatewayBlockModeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
