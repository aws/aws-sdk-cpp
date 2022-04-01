/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/BooleanEnumType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace BooleanEnumTypeMapper
      {

        static const int TRUE_HASH = HashingUtils::HashString("TRUE");
        static const int FALSE_HASH = HashingUtils::HashString("FALSE");


        BooleanEnumType GetBooleanEnumTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUE_HASH)
          {
            return BooleanEnumType::TRUE;
          }
          else if (hashCode == FALSE_HASH)
          {
            return BooleanEnumType::FALSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BooleanEnumType>(hashCode);
          }

          return BooleanEnumType::NOT_SET;
        }

        Aws::String GetNameForBooleanEnumType(BooleanEnumType enumValue)
        {
          switch(enumValue)
          {
          case BooleanEnumType::TRUE:
            return "TRUE";
          case BooleanEnumType::FALSE:
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

      } // namespace BooleanEnumTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
