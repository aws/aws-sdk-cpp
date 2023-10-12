/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PhoneNumberOrderStatus.h>
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
      namespace PhoneNumberOrderStatusMapper
      {

        static constexpr uint32_t Processing_HASH = ConstExprHashingUtils::HashString("Processing");
        static constexpr uint32_t Successful_HASH = ConstExprHashingUtils::HashString("Successful");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Partial_HASH = ConstExprHashingUtils::HashString("Partial");


        PhoneNumberOrderStatus GetPhoneNumberOrderStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Processing_HASH)
          {
            return PhoneNumberOrderStatus::Processing;
          }
          else if (hashCode == Successful_HASH)
          {
            return PhoneNumberOrderStatus::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return PhoneNumberOrderStatus::Failed;
          }
          else if (hashCode == Partial_HASH)
          {
            return PhoneNumberOrderStatus::Partial;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberOrderStatus>(hashCode);
          }

          return PhoneNumberOrderStatus::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberOrderStatus(PhoneNumberOrderStatus enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberOrderStatus::NOT_SET:
            return {};
          case PhoneNumberOrderStatus::Processing:
            return "Processing";
          case PhoneNumberOrderStatus::Successful:
            return "Successful";
          case PhoneNumberOrderStatus::Failed:
            return "Failed";
          case PhoneNumberOrderStatus::Partial:
            return "Partial";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberOrderStatusMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
