/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceGeneration.h>
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
      namespace InstanceGenerationMapper
      {

        static const int current_HASH = HashingUtils::HashString("current");
        static const int previous_HASH = HashingUtils::HashString("previous");


        InstanceGeneration GetInstanceGenerationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == current_HASH)
          {
            return InstanceGeneration::current;
          }
          else if (hashCode == previous_HASH)
          {
            return InstanceGeneration::previous;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceGeneration>(hashCode);
          }

          return InstanceGeneration::NOT_SET;
        }

        Aws::String GetNameForInstanceGeneration(InstanceGeneration enumValue)
        {
          switch(enumValue)
          {
          case InstanceGeneration::NOT_SET:
            return {};
          case InstanceGeneration::current:
            return "current";
          case InstanceGeneration::previous:
            return "previous";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceGenerationMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
