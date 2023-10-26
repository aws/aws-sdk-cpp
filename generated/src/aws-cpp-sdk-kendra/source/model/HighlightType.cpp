/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/HighlightType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace HighlightTypeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int THESAURUS_SYNONYM_HASH = HashingUtils::HashString("THESAURUS_SYNONYM");


        HighlightType GetHighlightTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return HighlightType::STANDARD;
          }
          else if (hashCode == THESAURUS_SYNONYM_HASH)
          {
            return HighlightType::THESAURUS_SYNONYM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HighlightType>(hashCode);
          }

          return HighlightType::NOT_SET;
        }

        Aws::String GetNameForHighlightType(HighlightType enumValue)
        {
          switch(enumValue)
          {
          case HighlightType::NOT_SET:
            return {};
          case HighlightType::STANDARD:
            return "STANDARD";
          case HighlightType::THESAURUS_SYNONYM:
            return "THESAURUS_SYNONYM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HighlightTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
