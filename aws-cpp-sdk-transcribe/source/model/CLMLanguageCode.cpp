/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CLMLanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace CLMLanguageCodeMapper
      {

        static const int en_US_HASH = HashingUtils::HashString("en-US");


        CLMLanguageCode GetCLMLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return CLMLanguageCode::en_US;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CLMLanguageCode>(hashCode);
          }

          return CLMLanguageCode::NOT_SET;
        }

        Aws::String GetNameForCLMLanguageCode(CLMLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case CLMLanguageCode::en_US:
            return "en-US";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CLMLanguageCodeMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
