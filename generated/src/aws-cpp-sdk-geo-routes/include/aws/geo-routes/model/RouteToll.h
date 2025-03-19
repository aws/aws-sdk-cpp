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
    AWS_GEOROUTES_API RouteToll() = default;
    AWS_GEOROUTES_API RouteToll(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteToll& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alpha-2 or alpha-3 character code for the country.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    RouteToll& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Locations or sites where the toll fare is collected.</p>
     */
    inline const Aws::Vector<RouteTollPaymentSite>& GetPaymentSites() const { return m_paymentSites; }
    inline bool PaymentSitesHasBeenSet() const { return m_paymentSitesHasBeenSet; }
    template<typename PaymentSitesT = Aws::Vector<RouteTollPaymentSite>>
    void SetPaymentSites(PaymentSitesT&& value) { m_paymentSitesHasBeenSet = true; m_paymentSites = std::forward<PaymentSitesT>(value); }
    template<typename PaymentSitesT = Aws::Vector<RouteTollPaymentSite>>
    RouteToll& WithPaymentSites(PaymentSitesT&& value) { SetPaymentSites(std::forward<PaymentSitesT>(value)); return *this;}
    template<typename PaymentSitesT = RouteTollPaymentSite>
    RouteToll& AddPaymentSites(PaymentSitesT&& value) { m_paymentSitesHasBeenSet = true; m_paymentSites.emplace_back(std::forward<PaymentSitesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Toll rates that need to be paid to travel this leg of the route.</p>
     */
    inline const Aws::Vector<RouteTollRate>& GetRates() const { return m_rates; }
    inline bool RatesHasBeenSet() const { return m_ratesHasBeenSet; }
    template<typename RatesT = Aws::Vector<RouteTollRate>>
    void SetRates(RatesT&& value) { m_ratesHasBeenSet = true; m_rates = std::forward<RatesT>(value); }
    template<typename RatesT = Aws::Vector<RouteTollRate>>
    RouteToll& WithRates(RatesT&& value) { SetRates(std::forward<RatesT>(value)); return *this;}
    template<typename RatesT = RouteTollRate>
    RouteToll& AddRates(RatesT&& value) { m_ratesHasBeenSet = true; m_rates.emplace_back(std::forward<RatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Toll systems are authorities that collect payments for the toll.</p>
     */
    inline const Aws::Vector<int>& GetSystems() const { return m_systems; }
    inline bool SystemsHasBeenSet() const { return m_systemsHasBeenSet; }
    template<typename SystemsT = Aws::Vector<int>>
    void SetSystems(SystemsT&& value) { m_systemsHasBeenSet = true; m_systems = std::forward<SystemsT>(value); }
    template<typename SystemsT = Aws::Vector<int>>
    RouteToll& WithSystems(SystemsT&& value) { SetSystems(std::forward<SystemsT>(value)); return *this;}
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
