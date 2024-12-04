/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailModality.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace GuardrailModalityMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");


        GuardrailModality GetGuardrailModalityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return GuardrailModality::TEXT;
          }
          else if (hashCode == IMAGE_HASH)
          {
            return GuardrailModality::IMAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailModality>(hashCode);
          }

          return GuardrailModality::NOT_SET;
        }

        Aws::String GetNameForGuardrailModality(GuardrailModality enumValue)
        {
          switch(enumValue)
          {
          case GuardrailModality::NOT_SET:
            return {};
          case GuardrailModality::TEXT:
            return "TEXT";
          case GuardrailModality::IMAGE:
            return "IMAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailModalityMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
