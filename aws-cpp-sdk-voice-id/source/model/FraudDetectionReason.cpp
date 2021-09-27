/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/FraudDetectionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VoiceID
  {
    namespace Model
    {
      namespace FraudDetectionReasonMapper
      {

        static const int KNOWN_FRAUDSTER_HASH = HashingUtils::HashString("KNOWN_FRAUDSTER");


        FraudDetectionReason GetFraudDetectionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KNOWN_FRAUDSTER_HASH)
          {
            return FraudDetectionReason::KNOWN_FRAUDSTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FraudDetectionReason>(hashCode);
          }

          return FraudDetectionReason::NOT_SET;
        }

        Aws::String GetNameForFraudDetectionReason(FraudDetectionReason enumValue)
        {
          switch(enumValue)
          {
          case FraudDetectionReason::KNOWN_FRAUDSTER:
            return "KNOWN_FRAUDSTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FraudDetectionReasonMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
