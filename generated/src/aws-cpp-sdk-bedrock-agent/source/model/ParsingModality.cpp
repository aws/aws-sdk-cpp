/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ParsingModality.h>
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
      namespace ParsingModalityMapper
      {

        static const int MULTIMODAL_HASH = HashingUtils::HashString("MULTIMODAL");


        ParsingModality GetParsingModalityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTIMODAL_HASH)
          {
            return ParsingModality::MULTIMODAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParsingModality>(hashCode);
          }

          return ParsingModality::NOT_SET;
        }

        Aws::String GetNameForParsingModality(ParsingModality enumValue)
        {
          switch(enumValue)
          {
          case ParsingModality::NOT_SET:
            return {};
          case ParsingModality::MULTIMODAL:
            return "MULTIMODAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParsingModalityMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
