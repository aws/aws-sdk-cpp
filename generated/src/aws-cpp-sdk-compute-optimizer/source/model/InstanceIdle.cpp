/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InstanceIdle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace InstanceIdleMapper
      {

        static const int True_HASH = HashingUtils::HashString("True");
        static const int False_HASH = HashingUtils::HashString("False");


        InstanceIdle GetInstanceIdleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == True_HASH)
          {
            return InstanceIdle::True;
          }
          else if (hashCode == False_HASH)
          {
            return InstanceIdle::False;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceIdle>(hashCode);
          }

          return InstanceIdle::NOT_SET;
        }

        Aws::String GetNameForInstanceIdle(InstanceIdle enumValue)
        {
          switch(enumValue)
          {
          case InstanceIdle::NOT_SET:
            return {};
          case InstanceIdle::True:
            return "True";
          case InstanceIdle::False:
            return "False";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceIdleMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
