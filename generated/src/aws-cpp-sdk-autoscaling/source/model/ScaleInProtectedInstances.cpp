/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/ScaleInProtectedInstances.h>
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
      namespace ScaleInProtectedInstancesMapper
      {

        static const int Refresh_HASH = HashingUtils::HashString("Refresh");
        static const int Ignore_HASH = HashingUtils::HashString("Ignore");
        static const int Wait_HASH = HashingUtils::HashString("Wait");


        ScaleInProtectedInstances GetScaleInProtectedInstancesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Refresh_HASH)
          {
            return ScaleInProtectedInstances::Refresh;
          }
          else if (hashCode == Ignore_HASH)
          {
            return ScaleInProtectedInstances::Ignore;
          }
          else if (hashCode == Wait_HASH)
          {
            return ScaleInProtectedInstances::Wait;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScaleInProtectedInstances>(hashCode);
          }

          return ScaleInProtectedInstances::NOT_SET;
        }

        Aws::String GetNameForScaleInProtectedInstances(ScaleInProtectedInstances enumValue)
        {
          switch(enumValue)
          {
          case ScaleInProtectedInstances::NOT_SET:
            return {};
          case ScaleInProtectedInstances::Refresh:
            return "Refresh";
          case ScaleInProtectedInstances::Ignore:
            return "Ignore";
          case ScaleInProtectedInstances::Wait:
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

      } // namespace ScaleInProtectedInstancesMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
