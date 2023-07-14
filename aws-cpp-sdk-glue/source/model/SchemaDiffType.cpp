/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SchemaDiffType.h>
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
      namespace SchemaDiffTypeMapper
      {

        static const int SYNTAX_DIFF_HASH = HashingUtils::HashString("SYNTAX_DIFF");


        SchemaDiffType GetSchemaDiffTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYNTAX_DIFF_HASH)
          {
            return SchemaDiffType::SYNTAX_DIFF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaDiffType>(hashCode);
          }

          return SchemaDiffType::NOT_SET;
        }

        Aws::String GetNameForSchemaDiffType(SchemaDiffType enumValue)
        {
          switch(enumValue)
          {
          case SchemaDiffType::SYNTAX_DIFF:
            return "SYNTAX_DIFF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaDiffTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
