/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CreationMode.h>
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
      namespace CreationModeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int OVERRIDDEN_HASH = HashingUtils::HashString("OVERRIDDEN");


        CreationMode GetCreationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return CreationMode::DEFAULT;
          }
          else if (hashCode == OVERRIDDEN_HASH)
          {
            return CreationMode::OVERRIDDEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CreationMode>(hashCode);
          }

          return CreationMode::NOT_SET;
        }

        Aws::String GetNameForCreationMode(CreationMode enumValue)
        {
          switch(enumValue)
          {
          case CreationMode::NOT_SET:
            return {};
          case CreationMode::DEFAULT:
            return "DEFAULT";
          case CreationMode::OVERRIDDEN:
            return "OVERRIDDEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CreationModeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
