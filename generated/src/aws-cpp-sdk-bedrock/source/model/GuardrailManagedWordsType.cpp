/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailManagedWordsType.h>
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
      namespace GuardrailManagedWordsTypeMapper
      {

        static const int PROFANITY_HASH = HashingUtils::HashString("PROFANITY");


        GuardrailManagedWordsType GetGuardrailManagedWordsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROFANITY_HASH)
          {
            return GuardrailManagedWordsType::PROFANITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GuardrailManagedWordsType>(hashCode);
          }

          return GuardrailManagedWordsType::NOT_SET;
        }

        Aws::String GetNameForGuardrailManagedWordsType(GuardrailManagedWordsType enumValue)
        {
          switch(enumValue)
          {
          case GuardrailManagedWordsType::NOT_SET:
            return {};
          case GuardrailManagedWordsType::PROFANITY:
            return "PROFANITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GuardrailManagedWordsTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
