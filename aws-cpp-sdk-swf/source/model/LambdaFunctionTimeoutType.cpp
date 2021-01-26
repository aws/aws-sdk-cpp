/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/LambdaFunctionTimeoutType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace LambdaFunctionTimeoutTypeMapper
      {

        static const int START_TO_CLOSE_HASH = HashingUtils::HashString("START_TO_CLOSE");


        LambdaFunctionTimeoutType GetLambdaFunctionTimeoutTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_TO_CLOSE_HASH)
          {
            return LambdaFunctionTimeoutType::START_TO_CLOSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFunctionTimeoutType>(hashCode);
          }

          return LambdaFunctionTimeoutType::NOT_SET;
        }

        Aws::String GetNameForLambdaFunctionTimeoutType(LambdaFunctionTimeoutType enumValue)
        {
          switch(enumValue)
          {
          case LambdaFunctionTimeoutType::START_TO_CLOSE:
            return "START_TO_CLOSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaFunctionTimeoutTypeMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
