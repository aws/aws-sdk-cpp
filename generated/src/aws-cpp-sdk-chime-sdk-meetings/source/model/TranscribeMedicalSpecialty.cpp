/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/TranscribeMedicalSpecialty.h>
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
      namespace TranscribeMedicalSpecialtyMapper
      {

        static const int PRIMARYCARE_HASH = HashingUtils::HashString("PRIMARYCARE");
        static const int CARDIOLOGY_HASH = HashingUtils::HashString("CARDIOLOGY");
        static const int NEUROLOGY_HASH = HashingUtils::HashString("NEUROLOGY");
        static const int ONCOLOGY_HASH = HashingUtils::HashString("ONCOLOGY");
        static const int RADIOLOGY_HASH = HashingUtils::HashString("RADIOLOGY");
        static const int UROLOGY_HASH = HashingUtils::HashString("UROLOGY");


        TranscribeMedicalSpecialty GetTranscribeMedicalSpecialtyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARYCARE_HASH)
          {
            return TranscribeMedicalSpecialty::PRIMARYCARE;
          }
          else if (hashCode == CARDIOLOGY_HASH)
          {
            return TranscribeMedicalSpecialty::CARDIOLOGY;
          }
          else if (hashCode == NEUROLOGY_HASH)
          {
            return TranscribeMedicalSpecialty::NEUROLOGY;
          }
          else if (hashCode == ONCOLOGY_HASH)
          {
            return TranscribeMedicalSpecialty::ONCOLOGY;
          }
          else if (hashCode == RADIOLOGY_HASH)
          {
            return TranscribeMedicalSpecialty::RADIOLOGY;
          }
          else if (hashCode == UROLOGY_HASH)
          {
            return TranscribeMedicalSpecialty::UROLOGY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeMedicalSpecialty>(hashCode);
          }

          return TranscribeMedicalSpecialty::NOT_SET;
        }

        Aws::String GetNameForTranscribeMedicalSpecialty(TranscribeMedicalSpecialty enumValue)
        {
          switch(enumValue)
          {
          case TranscribeMedicalSpecialty::NOT_SET:
            return {};
          case TranscribeMedicalSpecialty::PRIMARYCARE:
            return "PRIMARYCARE";
          case TranscribeMedicalSpecialty::CARDIOLOGY:
            return "CARDIOLOGY";
          case TranscribeMedicalSpecialty::NEUROLOGY:
            return "NEUROLOGY";
          case TranscribeMedicalSpecialty::ONCOLOGY:
            return "ONCOLOGY";
          case TranscribeMedicalSpecialty::RADIOLOGY:
            return "RADIOLOGY";
          case TranscribeMedicalSpecialty::UROLOGY:
            return "UROLOGY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribeMedicalSpecialtyMapper
    } // namespace Model
  } // namespace ChimeSDKMeetings
} // namespace Aws
