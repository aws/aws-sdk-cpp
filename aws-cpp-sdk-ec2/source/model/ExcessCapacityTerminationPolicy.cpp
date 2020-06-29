/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ExcessCapacityTerminationPolicy.h>
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
      namespace ExcessCapacityTerminationPolicyMapper
      {

        static const int noTermination_HASH = HashingUtils::HashString("noTermination");
        static const int default__HASH = HashingUtils::HashString("default");


        ExcessCapacityTerminationPolicy GetExcessCapacityTerminationPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == noTermination_HASH)
          {
            return ExcessCapacityTerminationPolicy::noTermination;
          }
          else if (hashCode == default__HASH)
          {
            return ExcessCapacityTerminationPolicy::default_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExcessCapacityTerminationPolicy>(hashCode);
          }

          return ExcessCapacityTerminationPolicy::NOT_SET;
        }

        Aws::String GetNameForExcessCapacityTerminationPolicy(ExcessCapacityTerminationPolicy enumValue)
        {
          switch(enumValue)
          {
          case ExcessCapacityTerminationPolicy::noTermination:
            return "noTermination";
          case ExcessCapacityTerminationPolicy::default_:
            return "default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExcessCapacityTerminationPolicyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
