/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackRefactorActionType.h>
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
      namespace StackRefactorActionTypeMapper
      {

        static const int MOVE_HASH = HashingUtils::HashString("MOVE");
        static const int CREATE_HASH = HashingUtils::HashString("CREATE");


        StackRefactorActionType GetStackRefactorActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MOVE_HASH)
          {
            return StackRefactorActionType::MOVE;
          }
          else if (hashCode == CREATE_HASH)
          {
            return StackRefactorActionType::CREATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackRefactorActionType>(hashCode);
          }

          return StackRefactorActionType::NOT_SET;
        }

        Aws::String GetNameForStackRefactorActionType(StackRefactorActionType enumValue)
        {
          switch(enumValue)
          {
          case StackRefactorActionType::NOT_SET:
            return {};
          case StackRefactorActionType::MOVE:
            return "MOVE";
          case StackRefactorActionType::CREATE:
            return "CREATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackRefactorActionTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
