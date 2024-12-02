/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/SignalType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace SignalTypeMapper
      {

        static const int FINDING_HASH = HashingUtils::HashString("FINDING");
        static const int CLOUD_TRAIL_HASH = HashingUtils::HashString("CLOUD_TRAIL");
        static const int S3_DATA_EVENTS_HASH = HashingUtils::HashString("S3_DATA_EVENTS");


        SignalType GetSignalTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINDING_HASH)
          {
            return SignalType::FINDING;
          }
          else if (hashCode == CLOUD_TRAIL_HASH)
          {
            return SignalType::CLOUD_TRAIL;
          }
          else if (hashCode == S3_DATA_EVENTS_HASH)
          {
            return SignalType::S3_DATA_EVENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignalType>(hashCode);
          }

          return SignalType::NOT_SET;
        }

        Aws::String GetNameForSignalType(SignalType enumValue)
        {
          switch(enumValue)
          {
          case SignalType::NOT_SET:
            return {};
          case SignalType::FINDING:
            return "FINDING";
          case SignalType::CLOUD_TRAIL:
            return "CLOUD_TRAIL";
          case SignalType::S3_DATA_EVENTS:
            return "S3_DATA_EVENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SignalTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
