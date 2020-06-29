/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetExcessCapacityTerminationPolicy.h>
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
      namespace FleetExcessCapacityTerminationPolicyMapper
      {

        static const int no_termination_HASH = HashingUtils::HashString("no-termination");
        static const int termination_HASH = HashingUtils::HashString("termination");


        FleetExcessCapacityTerminationPolicy GetFleetExcessCapacityTerminationPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == no_termination_HASH)
          {
            return FleetExcessCapacityTerminationPolicy::no_termination;
          }
          else if (hashCode == termination_HASH)
          {
            return FleetExcessCapacityTerminationPolicy::termination;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetExcessCapacityTerminationPolicy>(hashCode);
          }

          return FleetExcessCapacityTerminationPolicy::NOT_SET;
        }

        Aws::String GetNameForFleetExcessCapacityTerminationPolicy(FleetExcessCapacityTerminationPolicy enumValue)
        {
          switch(enumValue)
          {
          case FleetExcessCapacityTerminationPolicy::no_termination:
            return "no-termination";
          case FleetExcessCapacityTerminationPolicy::termination:
            return "termination";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetExcessCapacityTerminationPolicyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
