/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InternetGatewayExclusionMode.h>
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
      namespace InternetGatewayExclusionModeMapper
      {

        static const int allow_bidirectional_HASH = HashingUtils::HashString("allow-bidirectional");
        static const int allow_egress_HASH = HashingUtils::HashString("allow-egress");


        InternetGatewayExclusionMode GetInternetGatewayExclusionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == allow_bidirectional_HASH)
          {
            return InternetGatewayExclusionMode::allow_bidirectional;
          }
          else if (hashCode == allow_egress_HASH)
          {
            return InternetGatewayExclusionMode::allow_egress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InternetGatewayExclusionMode>(hashCode);
          }

          return InternetGatewayExclusionMode::NOT_SET;
        }

        Aws::String GetNameForInternetGatewayExclusionMode(InternetGatewayExclusionMode enumValue)
        {
          switch(enumValue)
          {
          case InternetGatewayExclusionMode::NOT_SET:
            return {};
          case InternetGatewayExclusionMode::allow_bidirectional:
            return "allow-bidirectional";
          case InternetGatewayExclusionMode::allow_egress:
            return "allow-egress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InternetGatewayExclusionModeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
