/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/BPAStatusMessage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace BPAStatusMessageMapper
      {

        static constexpr uint32_t DEFAULTED_FOR_SLR_MISSING_HASH = ConstExprHashingUtils::HashString("DEFAULTED_FOR_SLR_MISSING");
        static constexpr uint32_t SYNC_ON_HOLD_HASH = ConstExprHashingUtils::HashString("SYNC_ON_HOLD");
        static constexpr uint32_t DEFAULTED_FOR_SLR_MISSING_ON_HOLD_HASH = ConstExprHashingUtils::HashString("DEFAULTED_FOR_SLR_MISSING_ON_HOLD");
        static constexpr uint32_t Unknown_HASH = ConstExprHashingUtils::HashString("Unknown");


        BPAStatusMessage GetBPAStatusMessageForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULTED_FOR_SLR_MISSING_HASH)
          {
            return BPAStatusMessage::DEFAULTED_FOR_SLR_MISSING;
          }
          else if (hashCode == SYNC_ON_HOLD_HASH)
          {
            return BPAStatusMessage::SYNC_ON_HOLD;
          }
          else if (hashCode == DEFAULTED_FOR_SLR_MISSING_ON_HOLD_HASH)
          {
            return BPAStatusMessage::DEFAULTED_FOR_SLR_MISSING_ON_HOLD;
          }
          else if (hashCode == Unknown_HASH)
          {
            return BPAStatusMessage::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BPAStatusMessage>(hashCode);
          }

          return BPAStatusMessage::NOT_SET;
        }

        Aws::String GetNameForBPAStatusMessage(BPAStatusMessage enumValue)
        {
          switch(enumValue)
          {
          case BPAStatusMessage::NOT_SET:
            return {};
          case BPAStatusMessage::DEFAULTED_FOR_SLR_MISSING:
            return "DEFAULTED_FOR_SLR_MISSING";
          case BPAStatusMessage::SYNC_ON_HOLD:
            return "SYNC_ON_HOLD";
          case BPAStatusMessage::DEFAULTED_FOR_SLR_MISSING_ON_HOLD:
            return "DEFAULTED_FOR_SLR_MISSING_ON_HOLD";
          case BPAStatusMessage::Unknown:
            return "Unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BPAStatusMessageMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
