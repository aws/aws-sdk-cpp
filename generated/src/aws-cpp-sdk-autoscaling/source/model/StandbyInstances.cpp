/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/StandbyInstances.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace StandbyInstancesMapper
      {

        static constexpr uint32_t Terminate_HASH = ConstExprHashingUtils::HashString("Terminate");
        static constexpr uint32_t Ignore_HASH = ConstExprHashingUtils::HashString("Ignore");
        static constexpr uint32_t Wait_HASH = ConstExprHashingUtils::HashString("Wait");


        StandbyInstances GetStandbyInstancesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Terminate_HASH)
          {
            return StandbyInstances::Terminate;
          }
          else if (hashCode == Ignore_HASH)
          {
            return StandbyInstances::Ignore;
          }
          else if (hashCode == Wait_HASH)
          {
            return StandbyInstances::Wait;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandbyInstances>(hashCode);
          }

          return StandbyInstances::NOT_SET;
        }

        Aws::String GetNameForStandbyInstances(StandbyInstances enumValue)
        {
          switch(enumValue)
          {
          case StandbyInstances::NOT_SET:
            return {};
          case StandbyInstances::Terminate:
            return "Terminate";
          case StandbyInstances::Ignore:
            return "Ignore";
          case StandbyInstances::Wait:
            return "Wait";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StandbyInstancesMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
