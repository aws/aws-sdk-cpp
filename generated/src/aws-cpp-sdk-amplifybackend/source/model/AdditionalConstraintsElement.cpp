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

        static const int REQUIRE_DIGIT_HASH = HashingUtils::HashString("REQUIRE_DIGIT");
        static const int REQUIRE_LOWERCASE_HASH = HashingUtils::HashString("REQUIRE_LOWERCASE");
        static const int REQUIRE_SYMBOL_HASH = HashingUtils::HashString("REQUIRE_SYMBOL");
        static const int REQUIRE_UPPERCASE_HASH = HashingUtils::HashString("REQUIRE_UPPERCASE");


        AdditionalConstraintsElement GetAdditionalConstraintsElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
