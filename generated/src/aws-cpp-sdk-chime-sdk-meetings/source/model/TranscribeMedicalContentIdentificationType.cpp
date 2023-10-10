/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/TranscribeMedicalContentIdentificationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMeetings
  {
    namespace Model
    {
      namespace TranscribeMedicalContentIdentificationTypeMapper
      {

        static const int PHI_HASH = HashingUtils::HashString("PHI");


        TranscribeMedicalContentIdentificationType GetTranscribeMedicalContentIdentificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PHI_HASH)
          {
            return TranscribeMedicalContentIdentificationType::PHI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeMedicalContentIdentificationType>(hashCode);
          }

          return TranscribeMedicalContentIdentificationType::NOT_SET;
        }

        Aws::String GetNameForTranscribeMedicalContentIdentificationType(TranscribeMedicalContentIdentificationType enumValue)
        {
          switch(enumValue)
          {
          case TranscribeMedicalContentIdentificationType::NOT_SET:
            return {};
          case TranscribeMedicalContentIdentificationType::PHI:
            return "PHI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribeMedicalContentIdentificationTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMeetings
} // namespace Aws
