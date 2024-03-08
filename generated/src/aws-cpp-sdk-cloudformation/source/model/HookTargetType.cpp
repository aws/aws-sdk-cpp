/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/HookTargetType.h>
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
      namespace HookTargetTypeMapper
      {

        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");


        HookTargetType GetHookTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_HASH)
          {
            return HookTargetType::RESOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HookTargetType>(hashCode);
          }

          return HookTargetType::NOT_SET;
        }

        Aws::String GetNameForHookTargetType(HookTargetType enumValue)
        {
          switch(enumValue)
          {
          case HookTargetType::NOT_SET:
            return {};
          case HookTargetType::RESOURCE:
            return "RESOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HookTargetTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
