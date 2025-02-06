/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackRefactorActionEntity.h>
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
      namespace StackRefactorActionEntityMapper
      {

        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");
        static const int STACK_HASH = HashingUtils::HashString("STACK");


        StackRefactorActionEntity GetStackRefactorActionEntityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_HASH)
          {
            return StackRefactorActionEntity::RESOURCE;
          }
          else if (hashCode == STACK_HASH)
          {
            return StackRefactorActionEntity::STACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackRefactorActionEntity>(hashCode);
          }

          return StackRefactorActionEntity::NOT_SET;
        }

        Aws::String GetNameForStackRefactorActionEntity(StackRefactorActionEntity enumValue)
        {
          switch(enumValue)
          {
          case StackRefactorActionEntity::NOT_SET:
            return {};
          case StackRefactorActionEntity::RESOURCE:
            return "RESOURCE";
          case StackRefactorActionEntity::STACK:
            return "STACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackRefactorActionEntityMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
