/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AnsweringMachineDetectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace AnsweringMachineDetectionStatusMapper
      {

        static const int ANSWERED_HASH = HashingUtils::HashString("ANSWERED");
        static const int UNDETECTED_HASH = HashingUtils::HashString("UNDETECTED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int HUMAN_ANSWERED_HASH = HashingUtils::HashString("HUMAN_ANSWERED");
        static const int SIT_TONE_DETECTED_HASH = HashingUtils::HashString("SIT_TONE_DETECTED");
        static const int SIT_TONE_BUSY_HASH = HashingUtils::HashString("SIT_TONE_BUSY");
        static const int SIT_TONE_INVALID_NUMBER_HASH = HashingUtils::HashString("SIT_TONE_INVALID_NUMBER");
        static const int FAX_MACHINE_DETECTED_HASH = HashingUtils::HashString("FAX_MACHINE_DETECTED");
        static const int VOICEMAIL_BEEP_HASH = HashingUtils::HashString("VOICEMAIL_BEEP");
        static const int VOICEMAIL_NO_BEEP_HASH = HashingUtils::HashString("VOICEMAIL_NO_BEEP");
        static const int AMD_UNRESOLVED_HASH = HashingUtils::HashString("AMD_UNRESOLVED");
        static const int AMD_UNANSWERED_HASH = HashingUtils::HashString("AMD_UNANSWERED");
        static const int AMD_ERROR_HASH = HashingUtils::HashString("AMD_ERROR");
        static const int AMD_NOT_APPLICABLE_HASH = HashingUtils::HashString("AMD_NOT_APPLICABLE");


        AnsweringMachineDetectionStatus GetAnsweringMachineDetectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANSWERED_HASH)
          {
            return AnsweringMachineDetectionStatus::ANSWERED;
          }
          else if (hashCode == UNDETECTED_HASH)
          {
            return AnsweringMachineDetectionStatus::UNDETECTED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return AnsweringMachineDetectionStatus::ERROR_;
          }
          else if (hashCode == HUMAN_ANSWERED_HASH)
          {
            return AnsweringMachineDetectionStatus::HUMAN_ANSWERED;
          }
          else if (hashCode == SIT_TONE_DETECTED_HASH)
          {
            return AnsweringMachineDetectionStatus::SIT_TONE_DETECTED;
          }
          else if (hashCode == SIT_TONE_BUSY_HASH)
          {
            return AnsweringMachineDetectionStatus::SIT_TONE_BUSY;
          }
          else if (hashCode == SIT_TONE_INVALID_NUMBER_HASH)
          {
            return AnsweringMachineDetectionStatus::SIT_TONE_INVALID_NUMBER;
          }
          else if (hashCode == FAX_MACHINE_DETECTED_HASH)
          {
            return AnsweringMachineDetectionStatus::FAX_MACHINE_DETECTED;
          }
          else if (hashCode == VOICEMAIL_BEEP_HASH)
          {
            return AnsweringMachineDetectionStatus::VOICEMAIL_BEEP;
          }
          else if (hashCode == VOICEMAIL_NO_BEEP_HASH)
          {
            return AnsweringMachineDetectionStatus::VOICEMAIL_NO_BEEP;
          }
          else if (hashCode == AMD_UNRESOLVED_HASH)
          {
            return AnsweringMachineDetectionStatus::AMD_UNRESOLVED;
          }
          else if (hashCode == AMD_UNANSWERED_HASH)
          {
            return AnsweringMachineDetectionStatus::AMD_UNANSWERED;
          }
          else if (hashCode == AMD_ERROR_HASH)
          {
            return AnsweringMachineDetectionStatus::AMD_ERROR;
          }
          else if (hashCode == AMD_NOT_APPLICABLE_HASH)
          {
            return AnsweringMachineDetectionStatus::AMD_NOT_APPLICABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnsweringMachineDetectionStatus>(hashCode);
          }

          return AnsweringMachineDetectionStatus::NOT_SET;
        }

        Aws::String GetNameForAnsweringMachineDetectionStatus(AnsweringMachineDetectionStatus enumValue)
        {
          switch(enumValue)
          {
          case AnsweringMachineDetectionStatus::NOT_SET:
            return {};
          case AnsweringMachineDetectionStatus::ANSWERED:
            return "ANSWERED";
          case AnsweringMachineDetectionStatus::UNDETECTED:
            return "UNDETECTED";
          case AnsweringMachineDetectionStatus::ERROR_:
            return "ERROR";
          case AnsweringMachineDetectionStatus::HUMAN_ANSWERED:
            return "HUMAN_ANSWERED";
          case AnsweringMachineDetectionStatus::SIT_TONE_DETECTED:
            return "SIT_TONE_DETECTED";
          case AnsweringMachineDetectionStatus::SIT_TONE_BUSY:
            return "SIT_TONE_BUSY";
          case AnsweringMachineDetectionStatus::SIT_TONE_INVALID_NUMBER:
            return "SIT_TONE_INVALID_NUMBER";
          case AnsweringMachineDetectionStatus::FAX_MACHINE_DETECTED:
            return "FAX_MACHINE_DETECTED";
          case AnsweringMachineDetectionStatus::VOICEMAIL_BEEP:
            return "VOICEMAIL_BEEP";
          case AnsweringMachineDetectionStatus::VOICEMAIL_NO_BEEP:
            return "VOICEMAIL_NO_BEEP";
          case AnsweringMachineDetectionStatus::AMD_UNRESOLVED:
            return "AMD_UNRESOLVED";
          case AnsweringMachineDetectionStatus::AMD_UNANSWERED:
            return "AMD_UNANSWERED";
          case AnsweringMachineDetectionStatus::AMD_ERROR:
            return "AMD_ERROR";
          case AnsweringMachineDetectionStatus::AMD_NOT_APPLICABLE:
            return "AMD_NOT_APPLICABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnsweringMachineDetectionStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
