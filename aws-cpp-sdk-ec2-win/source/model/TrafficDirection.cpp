/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficDirection.h>
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
      namespace TrafficDirectionMapper
      {

        static const int ingress_HASH = HashingUtils::HashString("ingress");
        static const int egress_HASH = HashingUtils::HashString("egress");


        TrafficDirection GetTrafficDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ingress_HASH)
          {
            return TrafficDirection::ingress;
          }
          else if (hashCode == egress_HASH)
          {
            return TrafficDirection::egress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficDirection>(hashCode);
          }

          return TrafficDirection::NOT_SET;
        }

        Aws::String GetNameForTrafficDirection(TrafficDirection enumValue)
        {
          switch(enumValue)
          {
          case TrafficDirection::ingress:
            return "ingress";
          case TrafficDirection::egress:
            return "egress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficDirectionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
