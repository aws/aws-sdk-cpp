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

        static const int TRUE_HASH = HashingUtils::HashString("TRUE");
        static const int FALSE_HASH = HashingUtils::HashString("FALSE");


        EnableHybridValues GetEnableHybridValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
