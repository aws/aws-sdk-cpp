/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/Operation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace OperationMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int SUBTRACT_HASH = HashingUtils::HashString("SUBTRACT");
        static const int MULTIPLY_HASH = HashingUtils::HashString("MULTIPLY");
        static const int DIVIDE_HASH = HashingUtils::HashString("DIVIDE");


        Operation GetOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return Operation::ADD;
          }
          else if (hashCode == SUBTRACT_HASH)
          {
            return Operation::SUBTRACT;
          }
          else if (hashCode == MULTIPLY_HASH)
          {
            return Operation::MULTIPLY;
          }
          else if (hashCode == DIVIDE_HASH)
          {
            return Operation::DIVIDE;
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
          case Operation::ADD:
            return "ADD";
          case Operation::SUBTRACT:
            return "SUBTRACT";
          case Operation::MULTIPLY:
            return "MULTIPLY";
          case Operation::DIVIDE:
            return "DIVIDE";
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
  } // namespace ForecastService
} // namespace Aws
