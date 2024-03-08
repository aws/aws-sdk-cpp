/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TranscribeMedicalLanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace TranscribeMedicalLanguageCodeMapper
      {

        static const int en_US_HASH = HashingUtils::HashString("en-US");


        TranscribeMedicalLanguageCode GetTranscribeMedicalLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return TranscribeMedicalLanguageCode::en_US;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeMedicalLanguageCode>(hashCode);
          }

          return TranscribeMedicalLanguageCode::NOT_SET;
        }

        Aws::String GetNameForTranscribeMedicalLanguageCode(TranscribeMedicalLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case TranscribeMedicalLanguageCode::NOT_SET:
            return {};
          case TranscribeMedicalLanguageCode::en_US:
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

      } // namespace TranscribeMedicalLanguageCodeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
