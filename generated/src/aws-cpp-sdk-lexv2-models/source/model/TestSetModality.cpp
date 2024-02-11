/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetModality.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace TestSetModalityMapper
      {

        static const int Text_HASH = HashingUtils::HashString("Text");
        static const int Audio_HASH = HashingUtils::HashString("Audio");


        TestSetModality GetTestSetModalityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Text_HASH)
          {
            return TestSetModality::Text;
          }
          else if (hashCode == Audio_HASH)
          {
            return TestSetModality::Audio;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestSetModality>(hashCode);
          }

          return TestSetModality::NOT_SET;
        }

        Aws::String GetNameForTestSetModality(TestSetModality enumValue)
        {
          switch(enumValue)
          {
          case TestSetModality::NOT_SET:
            return {};
          case TestSetModality::Text:
            return "Text";
          case TestSetModality::Audio:
            return "Audio";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestSetModalityMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
