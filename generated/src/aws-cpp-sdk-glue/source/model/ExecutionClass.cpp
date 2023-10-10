/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ExecutionClass.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ExecutionClassMapper
      {

        static const int FLEX_HASH = HashingUtils::HashString("FLEX");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        ExecutionClass GetExecutionClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLEX_HASH)
          {
            return ExecutionClass::FLEX;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return ExecutionClass::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionClass>(hashCode);
          }

          return ExecutionClass::NOT_SET;
        }

        Aws::String GetNameForExecutionClass(ExecutionClass enumValue)
        {
          switch(enumValue)
          {
          case ExecutionClass::NOT_SET:
            return {};
          case ExecutionClass::FLEX:
            return "FLEX";
          case ExecutionClass::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionClassMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
