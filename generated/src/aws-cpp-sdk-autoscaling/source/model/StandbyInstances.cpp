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

        static const int Terminate_HASH = HashingUtils::HashString("Terminate");
        static const int Ignore_HASH = HashingUtils::HashString("Ignore");
        static const int Wait_HASH = HashingUtils::HashString("Wait");


        StandbyInstances GetStandbyInstancesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
