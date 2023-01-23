/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayPropagationState.h>
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
      namespace TransitGatewayPropagationStateMapper
      {

        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        TransitGatewayPropagationState GetTransitGatewayPropagationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabling_HASH)
          {
            return TransitGatewayPropagationState::enabling;
          }
          else if (hashCode == enabled_HASH)
          {
            return TransitGatewayPropagationState::enabled;
          }
          else if (hashCode == disabling_HASH)
          {
            return TransitGatewayPropagationState::disabling;
          }
          else if (hashCode == disabled_HASH)
          {
            return TransitGatewayPropagationState::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayPropagationState>(hashCode);
          }

          return TransitGatewayPropagationState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayPropagationState(TransitGatewayPropagationState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayPropagationState::enabling:
            return "enabling";
          case TransitGatewayPropagationState::enabled:
            return "enabled";
          case TransitGatewayPropagationState::disabling:
            return "disabling";
          case TransitGatewayPropagationState::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitGatewayPropagationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
