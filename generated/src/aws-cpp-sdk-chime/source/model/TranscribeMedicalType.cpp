/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TranscribeMedicalType.h>
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
      namespace TranscribeMedicalTypeMapper
      {

        static const int CONVERSATION_HASH = HashingUtils::HashString("CONVERSATION");
        static const int DICTATION_HASH = HashingUtils::HashString("DICTATION");


        TranscribeMedicalType GetTranscribeMedicalTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONVERSATION_HASH)
          {
            return TranscribeMedicalType::CONVERSATION;
          }
          else if (hashCode == DICTATION_HASH)
          {
            return TranscribeMedicalType::DICTATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeMedicalType>(hashCode);
          }

          return TranscribeMedicalType::NOT_SET;
        }

        Aws::String GetNameForTranscribeMedicalType(TranscribeMedicalType enumValue)
        {
          switch(enumValue)
          {
          case TranscribeMedicalType::NOT_SET:
            return {};
          case TranscribeMedicalType::CONVERSATION:
            return "CONVERSATION";
          case TranscribeMedicalType::DICTATION:
            return "DICTATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribeMedicalTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
