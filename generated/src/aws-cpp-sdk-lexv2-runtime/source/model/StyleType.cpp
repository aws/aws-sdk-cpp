/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/StyleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeV2
  {
    namespace Model
    {
      namespace StyleTypeMapper
      {

        static const int Default_HASH = HashingUtils::HashString("Default");
        static const int SpellByLetter_HASH = HashingUtils::HashString("SpellByLetter");
        static const int SpellByWord_HASH = HashingUtils::HashString("SpellByWord");


        StyleType GetStyleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Default_HASH)
          {
            return StyleType::Default;
          }
          else if (hashCode == SpellByLetter_HASH)
          {
            return StyleType::SpellByLetter;
          }
          else if (hashCode == SpellByWord_HASH)
          {
            return StyleType::SpellByWord;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StyleType>(hashCode);
          }

          return StyleType::NOT_SET;
        }

        Aws::String GetNameForStyleType(StyleType enumValue)
        {
          switch(enumValue)
          {
          case StyleType::NOT_SET:
            return {};
          case StyleType::Default:
            return "Default";
          case StyleType::SpellByLetter:
            return "SpellByLetter";
          case StyleType::SpellByWord:
            return "SpellByWord";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StyleTypeMapper
    } // namespace Model
  } // namespace LexRuntimeV2
} // namespace Aws
