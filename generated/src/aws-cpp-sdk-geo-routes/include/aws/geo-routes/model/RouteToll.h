/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteTollPaymentSite.h>
#include <aws/geo-routes/model/RouteTollRate.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Provides details about toll information along a route, including the payment
   * sites, applicable toll rates, toll systems, and the country associated with the
   * toll collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteToll">AWS
   * API Reference</a></p>
   */
  class RouteToll
  {
  public:
    AWS_GEOROUTES_API RouteToll();
    AWS_GEOROUTES_API RouteToll(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteToll& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline RouteToll& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline RouteToll& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline RouteToll& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Locations or sites where the toll fare is collected.</p>
     */
    inline const Aws::Vector<RouteTollPaymentSite>& GetPaymentSites() const{ return m_paymentSites; }
    inline bool PaymentSitesHasBeenSet() const { return m_paymentSitesHasBeenSet; }
    inline void SetPaymentSites(const Aws::Vector<RouteTollPaymentSite>& value) { m_paymentSitesHasBeenSet = true; m_paymentSites = value; }
    inline void SetPaymentSites(Aws::Vector<RouteTollPaymentSite>&& value) { m_paymentSitesHasBeenSet = true; m_paymentSites = std::move(value); }
    inline RouteToll& WithPaymentSites(const Aws::Vector<RouteTollPaymentSite>& value) { SetPaymentSites(value); return *this;}
    inline RouteToll& WithPaymentSites(Aws::Vector<RouteTollPaymentSite>&& value) { SetPaymentSites(std::move(value)); return *this;}
    inline RouteToll& AddPaymentSites(const RouteTollPaymentSite& value) { m_paymentSitesHasBeenSet = true; m_paymentSites.push_back(value); return *this; }
    inline RouteToll& AddPaymentSites(RouteTollPaymentSite&& value) { m_paymentSitesHasBeenSet = true; m_paymentSites.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Toll rates that need to be paid to travel this leg of the route.</p>
     */
    inline const Aws::Vector<RouteTollRate>& GetRates() const{ return m_rates; }
    inline bool RatesHasBeenSet() const { return m_ratesHasBeenSet; }
    inline void SetRates(const Aws::Vector<RouteTollRate>& value) { m_ratesHasBeenSet = true; m_rates = value; }
    inline void SetRates(Aws::Vector<RouteTollRate>&& value) { m_ratesHasBeenSet = true; m_rates = std::move(value); }
    inline RouteToll& WithRates(const Aws::Vector<RouteTollRate>& value) { SetRates(value); return *this;}
    inline RouteToll& WithRates(Aws::Vector<RouteTollRate>&& value) { SetRates(std::move(value)); return *this;}
    inline RouteToll& AddRates(const RouteTollRate& value) { m_ratesHasBeenSet = true; m_rates.push_back(value); return *this; }
    inline RouteToll& AddRates(RouteTollRate&& value) { m_ratesHasBeenSet = true; m_rates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Toll systems are authorities that collect payments for the toll.</p>
     */
    inline const Aws::Vector<int>& GetSystems() const{ return m_systems; }
    inline bool SystemsHasBeenSet() const { return m_systemsHasBeenSet; }
    inline void SetSystems(const Aws::Vector<int>& value) { m_systemsHasBeenSet = true; m_systems = value; }
    inline void SetSystems(Aws::Vector<int>&& value) { m_systemsHasBeenSet = true; m_systems = std::move(value); }
    inline RouteToll& WithSystems(const Aws::Vector<int>& value) { SetSystems(value); return *this;}
    inline RouteToll& WithSystems(Aws::Vector<int>&& value) { SetSystems(std::move(value)); return *this;}
    inline RouteToll& AddSystems(int value) { m_systemsHasBeenSet = true; m_systems.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::Vector<RouteTollPaymentSite> m_paymentSites;
    bool m_paymentSitesHasBeenSet = false;

    Aws::Vector<RouteTollRate> m_rates;
    bool m_ratesHasBeenSet = false;

    Aws::Vector<int> m_systems;
    bool m_systemsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
