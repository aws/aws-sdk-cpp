/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/Operation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoSync
  {
    namespace Model
    {
      namespace OperationMapper
      {

        static constexpr uint32_t replace_HASH = ConstExprHashingUtils::HashString("replace");
        static constexpr uint32_t remove_HASH = ConstExprHashingUtils::HashString("remove");


        Operation GetOperationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == replace_HASH)
          {
            return Operation::replace;
          }
          else if (hashCode == remove_HASH)
          {
            return Operation::remove;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Operation>(hashCode);
          }

          return Operation::NOT_SET;
        }

        Aws::String GetNameForOperation(Operation enumValue)
        {
          switch(enumValue)
          {
          case Operation::NOT_SET:
            return {};
          case Operation::replace:
            return "replace";
          case Operation::remove:
            return "remove";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationMapper
    } // namespace Model
  } // namespace CognitoSync
} // namespace Aws
