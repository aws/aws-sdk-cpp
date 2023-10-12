/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/AdditionalConstraintsElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace AdditionalConstraintsElementMapper
      {

        static constexpr uint32_t REQUIRE_DIGIT_HASH = ConstExprHashingUtils::HashString("REQUIRE_DIGIT");
        static constexpr uint32_t REQUIRE_LOWERCASE_HASH = ConstExprHashingUtils::HashString("REQUIRE_LOWERCASE");
        static constexpr uint32_t REQUIRE_SYMBOL_HASH = ConstExprHashingUtils::HashString("REQUIRE_SYMBOL");
        static constexpr uint32_t REQUIRE_UPPERCASE_HASH = ConstExprHashingUtils::HashString("REQUIRE_UPPERCASE");


        AdditionalConstraintsElement GetAdditionalConstraintsElementForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUIRE_DIGIT_HASH)
          {
            return AdditionalConstraintsElement::REQUIRE_DIGIT;
          }
          else if (hashCode == REQUIRE_LOWERCASE_HASH)
          {
            return AdditionalConstraintsElement::REQUIRE_LOWERCASE;
          }
          else if (hashCode == REQUIRE_SYMBOL_HASH)
          {
            return AdditionalConstraintsElement::REQUIRE_SYMBOL;
          }
          else if (hashCode == REQUIRE_UPPERCASE_HASH)
          {
            return AdditionalConstraintsElement::REQUIRE_UPPERCASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdditionalConstraintsElement>(hashCode);
          }

          return AdditionalConstraintsElement::NOT_SET;
        }

        Aws::String GetNameForAdditionalConstraintsElement(AdditionalConstraintsElement enumValue)
        {
          switch(enumValue)
          {
          case AdditionalConstraintsElement::NOT_SET:
            return {};
          case AdditionalConstraintsElement::REQUIRE_DIGIT:
            return "REQUIRE_DIGIT";
          case AdditionalConstraintsElement::REQUIRE_LOWERCASE:
            return "REQUIRE_LOWERCASE";
          case AdditionalConstraintsElement::REQUIRE_SYMBOL:
            return "REQUIRE_SYMBOL";
          case AdditionalConstraintsElement::REQUIRE_UPPERCASE:
            return "REQUIRE_UPPERCASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdditionalConstraintsElementMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
