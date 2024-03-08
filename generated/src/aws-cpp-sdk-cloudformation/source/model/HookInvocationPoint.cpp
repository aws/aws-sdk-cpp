/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/HookInvocationPoint.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace HookInvocationPointMapper
      {

        static const int PRE_PROVISION_HASH = HashingUtils::HashString("PRE_PROVISION");


        HookInvocationPoint GetHookInvocationPointForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRE_PROVISION_HASH)
          {
            return HookInvocationPoint::PRE_PROVISION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HookInvocationPoint>(hashCode);
          }

          return HookInvocationPoint::NOT_SET;
        }

        Aws::String GetNameForHookInvocationPoint(HookInvocationPoint enumValue)
        {
          switch(enumValue)
          {
          case HookInvocationPoint::NOT_SET:
            return {};
          case HookInvocationPoint::PRE_PROVISION:
            return "PRE_PROVISION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HookInvocationPointMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
