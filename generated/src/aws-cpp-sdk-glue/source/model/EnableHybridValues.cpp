/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/EnableHybridValues.h>
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
      namespace EnableHybridValuesMapper
      {

        static constexpr uint32_t TRUE_HASH = ConstExprHashingUtils::HashString("TRUE");
        static constexpr uint32_t FALSE_HASH = ConstExprHashingUtils::HashString("FALSE");


        EnableHybridValues GetEnableHybridValuesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_HASH)
          {
            return EnableHybridValues::TRUE;
          }
          else if (hashCode == FALSE_HASH)
          {
            return EnableHybridValues::FALSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnableHybridValues>(hashCode);
          }

          return EnableHybridValues::NOT_SET;
        }

        Aws::String GetNameForEnableHybridValues(EnableHybridValues enumValue)
        {
          switch(enumValue)
          {
          case EnableHybridValues::NOT_SET:
            return {};
          case EnableHybridValues::TRUE:
            return "TRUE";
          case EnableHybridValues::FALSE:
            return "FALSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnableHybridValuesMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
