/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SupportedLanguages.h>
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
      namespace SupportedLanguagesMapper
      {

        static const int Python_3_HASH = HashingUtils::HashString("Python_3");


        SupportedLanguages GetSupportedLanguagesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Python_3_HASH)
          {
            return SupportedLanguages::Python_3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportedLanguages>(hashCode);
          }

          return SupportedLanguages::NOT_SET;
        }

        Aws::String GetNameForSupportedLanguages(SupportedLanguages enumValue)
        {
          switch(enumValue)
          {
          case SupportedLanguages::NOT_SET:
            return {};
          case SupportedLanguages::Python_3:
            return "Python_3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupportedLanguagesMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
