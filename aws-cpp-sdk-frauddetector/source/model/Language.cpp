/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/Language.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace LanguageMapper
      {

        static const int DETECTORPL_HASH = HashingUtils::HashString("DETECTORPL");


        Language GetLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DETECTORPL_HASH)
          {
            return Language::DETECTORPL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Language>(hashCode);
          }

          return Language::NOT_SET;
        }

        Aws::String GetNameForLanguage(Language enumValue)
        {
          switch(enumValue)
          {
          case Language::DETECTORPL:
            return "DETECTORPL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LanguageMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
