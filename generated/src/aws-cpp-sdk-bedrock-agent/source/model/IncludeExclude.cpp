/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IncludeExclude.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace IncludeExcludeMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        IncludeExclude GetIncludeExcludeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return IncludeExclude::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return IncludeExclude::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludeExclude>(hashCode);
          }

          return IncludeExclude::NOT_SET;
        }

        Aws::String GetNameForIncludeExclude(IncludeExclude enumValue)
        {
          switch(enumValue)
          {
          case IncludeExclude::NOT_SET:
            return {};
          case IncludeExclude::INCLUDE:
            return "INCLUDE";
          case IncludeExclude::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncludeExcludeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
