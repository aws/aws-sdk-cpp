/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DeliveryMediumType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace DeliveryMediumTypeMapper
      {

        static const int SMS_HASH = HashingUtils::HashString("SMS");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");


        DeliveryMediumType GetDeliveryMediumTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMS_HASH)
          {
            return DeliveryMediumType::SMS;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return DeliveryMediumType::EMAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryMediumType>(hashCode);
          }

          return DeliveryMediumType::NOT_SET;
        }

        Aws::String GetNameForDeliveryMediumType(DeliveryMediumType enumValue)
        {
          switch(enumValue)
          {
          case DeliveryMediumType::SMS:
            return "SMS";
          case DeliveryMediumType::EMAIL:
            return "EMAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryMediumTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
