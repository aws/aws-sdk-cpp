/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/MatchPurpose.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace MatchPurposeMapper
      {

        static const int IDENTIFIER_GENERATION_HASH = HashingUtils::HashString("IDENTIFIER_GENERATION");
        static const int INDEXING_HASH = HashingUtils::HashString("INDEXING");


        MatchPurpose GetMatchPurposeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDENTIFIER_GENERATION_HASH)
          {
            return MatchPurpose::IDENTIFIER_GENERATION;
          }
          else if (hashCode == INDEXING_HASH)
          {
            return MatchPurpose::INDEXING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MatchPurpose>(hashCode);
          }

          return MatchPurpose::NOT_SET;
        }

        Aws::String GetNameForMatchPurpose(MatchPurpose enumValue)
        {
          switch(enumValue)
          {
          case MatchPurpose::NOT_SET:
            return {};
          case MatchPurpose::IDENTIFIER_GENERATION:
            return "IDENTIFIER_GENERATION";
          case MatchPurpose::INDEXING:
            return "INDEXING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MatchPurposeMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws
