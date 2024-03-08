/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/DeliveryMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AmplifyBackend
  {
    namespace Model
    {
      namespace DeliveryMethodMapper
      {

        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
        static const int SMS_HASH = HashingUtils::HashString("SMS");


        DeliveryMethod GetDeliveryMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMAIL_HASH)
          {
            return DeliveryMethod::EMAIL;
          }
          else if (hashCode == SMS_HASH)
          {
            return DeliveryMethod::SMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryMethod>(hashCode);
          }

          return DeliveryMethod::NOT_SET;
        }

        Aws::String GetNameForDeliveryMethod(DeliveryMethod enumValue)
        {
          switch(enumValue)
          {
          case DeliveryMethod::NOT_SET:
            return {};
          case DeliveryMethod::EMAIL:
            return "EMAIL";
          case DeliveryMethod::SMS:
            return "SMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryMethodMapper
    } // namespace Model
  } // namespace AmplifyBackend
} // namespace Aws
