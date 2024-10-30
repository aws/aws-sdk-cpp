/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{
  enum class RouteTollPaymentMethod
  {
    NOT_SET,
    BankCard,
    Cash,
    CashExact,
    CreditCard,
    PassSubscription,
    TravelCard,
    Transponder,
    VideoToll
  };

namespace RouteTollPaymentMethodMapper
{
AWS_GEOROUTES_API RouteTollPaymentMethod GetRouteTollPaymentMethodForName(const Aws::String& name);

AWS_GEOROUTES_API Aws::String GetNameForRouteTollPaymentMethod(RouteTollPaymentMethod value);
} // namespace RouteTollPaymentMethodMapper
} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
