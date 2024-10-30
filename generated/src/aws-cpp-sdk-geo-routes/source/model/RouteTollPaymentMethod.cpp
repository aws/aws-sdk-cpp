/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollPaymentMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace RouteTollPaymentMethodMapper
      {

        static const int BankCard_HASH = HashingUtils::HashString("BankCard");
        static const int Cash_HASH = HashingUtils::HashString("Cash");
        static const int CashExact_HASH = HashingUtils::HashString("CashExact");
        static const int CreditCard_HASH = HashingUtils::HashString("CreditCard");
        static const int PassSubscription_HASH = HashingUtils::HashString("PassSubscription");
        static const int TravelCard_HASH = HashingUtils::HashString("TravelCard");
        static const int Transponder_HASH = HashingUtils::HashString("Transponder");
        static const int VideoToll_HASH = HashingUtils::HashString("VideoToll");


        RouteTollPaymentMethod GetRouteTollPaymentMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BankCard_HASH)
          {
            return RouteTollPaymentMethod::BankCard;
          }
          else if (hashCode == Cash_HASH)
          {
            return RouteTollPaymentMethod::Cash;
          }
          else if (hashCode == CashExact_HASH)
          {
            return RouteTollPaymentMethod::CashExact;
          }
          else if (hashCode == CreditCard_HASH)
          {
            return RouteTollPaymentMethod::CreditCard;
          }
          else if (hashCode == PassSubscription_HASH)
          {
            return RouteTollPaymentMethod::PassSubscription;
          }
          else if (hashCode == TravelCard_HASH)
          {
            return RouteTollPaymentMethod::TravelCard;
          }
          else if (hashCode == Transponder_HASH)
          {
            return RouteTollPaymentMethod::Transponder;
          }
          else if (hashCode == VideoToll_HASH)
          {
            return RouteTollPaymentMethod::VideoToll;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteTollPaymentMethod>(hashCode);
          }

          return RouteTollPaymentMethod::NOT_SET;
        }

        Aws::String GetNameForRouteTollPaymentMethod(RouteTollPaymentMethod enumValue)
        {
          switch(enumValue)
          {
          case RouteTollPaymentMethod::NOT_SET:
            return {};
          case RouteTollPaymentMethod::BankCard:
            return "BankCard";
          case RouteTollPaymentMethod::Cash:
            return "Cash";
          case RouteTollPaymentMethod::CashExact:
            return "CashExact";
          case RouteTollPaymentMethod::CreditCard:
            return "CreditCard";
          case RouteTollPaymentMethod::PassSubscription:
            return "PassSubscription";
          case RouteTollPaymentMethod::TravelCard:
            return "TravelCard";
          case RouteTollPaymentMethod::Transponder:
            return "Transponder";
          case RouteTollPaymentMethod::VideoToll:
            return "VideoToll";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteTollPaymentMethodMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
