/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/Operation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameSparks
  {
    namespace Model
    {
      namespace OperationMapper
      {

        static constexpr uint32_t ADD_HASH = ConstExprHashingUtils::HashString("ADD");
        static constexpr uint32_t REMOVE_HASH = ConstExprHashingUtils::HashString("REMOVE");
        static constexpr uint32_t REPLACE_HASH = ConstExprHashingUtils::HashString("REPLACE");


        Operation GetOperationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return Operation::ADD;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return Operation::REMOVE;
          }
          else if (hashCode == REPLACE_HASH)
          {
            return Operation::REPLACE;
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
          case Operation::ADD:
            return "ADD";
          case Operation::REMOVE:
            return "REMOVE";
          case Operation::REPLACE:
            return "REPLACE";
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
  } // namespace GameSparks
} // namespace Aws
