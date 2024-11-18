/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ListHookResultsTargetType.h>
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
      namespace ListHookResultsTargetTypeMapper
      {

        static const int CHANGE_SET_HASH = HashingUtils::HashString("CHANGE_SET");
        static const int STACK_HASH = HashingUtils::HashString("STACK");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int CLOUD_CONTROL_HASH = HashingUtils::HashString("CLOUD_CONTROL");


        ListHookResultsTargetType GetListHookResultsTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHANGE_SET_HASH)
          {
            return ListHookResultsTargetType::CHANGE_SET;
          }
          else if (hashCode == STACK_HASH)
          {
            return ListHookResultsTargetType::STACK;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return ListHookResultsTargetType::RESOURCE;
          }
          else if (hashCode == CLOUD_CONTROL_HASH)
          {
            return ListHookResultsTargetType::CLOUD_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListHookResultsTargetType>(hashCode);
          }

          return ListHookResultsTargetType::NOT_SET;
        }

        Aws::String GetNameForListHookResultsTargetType(ListHookResultsTargetType enumValue)
        {
          switch(enumValue)
          {
          case ListHookResultsTargetType::NOT_SET:
            return {};
          case ListHookResultsTargetType::CHANGE_SET:
            return "CHANGE_SET";
          case ListHookResultsTargetType::STACK:
            return "STACK";
          case ListHookResultsTargetType::RESOURCE:
            return "RESOURCE";
          case ListHookResultsTargetType::CLOUD_CONTROL:
            return "CLOUD_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListHookResultsTargetTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
