/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/OrderedPhoneNumberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace OrderedPhoneNumberStatusMapper
      {

        static const int Processing_HASH = HashingUtils::HashString("Processing");
        static const int Acquired_HASH = HashingUtils::HashString("Acquired");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        OrderedPhoneNumberStatus GetOrderedPhoneNumberStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Processing_HASH)
          {
            return OrderedPhoneNumberStatus::Processing;
          }
          else if (hashCode == Acquired_HASH)
          {
            return OrderedPhoneNumberStatus::Acquired;
          }
          else if (hashCode == Failed_HASH)
          {
            return OrderedPhoneNumberStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrderedPhoneNumberStatus>(hashCode);
          }

          return OrderedPhoneNumberStatus::NOT_SET;
        }

        Aws::String GetNameForOrderedPhoneNumberStatus(OrderedPhoneNumberStatus enumValue)
        {
          switch(enumValue)
          {
          case OrderedPhoneNumberStatus::Processing:
            return "Processing";
          case OrderedPhoneNumberStatus::Acquired:
            return "Acquired";
          case OrderedPhoneNumberStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrderedPhoneNumberStatusMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
