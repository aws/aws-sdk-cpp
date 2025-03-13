/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteTollPrice.h>
#include <aws/geo-routes/model/RouteTollPass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteTollPaymentMethod.h>
#include <aws/geo-routes/model/RouteTransponder.h>
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
   * <p>The toll rate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTollRate">AWS
   * API Reference</a></p>
   */
  class RouteTollRate
  {
  public:
    AWS_GEOROUTES_API RouteTollRate() = default;
    AWS_GEOROUTES_API RouteTollRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTollRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time when the rate is valid.</p>
     */
    inline const Aws::String& GetApplicableTimes() const { return m_applicableTimes; }
    inline bool ApplicableTimesHasBeenSet() const { return m_applicableTimesHasBeenSet; }
    template<typename ApplicableTimesT = Aws::String>
    void SetApplicableTimes(ApplicableTimesT&& value) { m_applicableTimesHasBeenSet = true; m_applicableTimes = std::forward<ApplicableTimesT>(value); }
    template<typename ApplicableTimesT = Aws::String>
    RouteTollRate& WithApplicableTimes(ApplicableTimesT&& value) { SetApplicableTimes(std::forward<ApplicableTimesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Price in the converted currency as specified in the request.</p>
     */
    inline const RouteTollPrice& GetConvertedPrice() const { return m_convertedPrice; }
    inline bool ConvertedPriceHasBeenSet() const { return m_convertedPriceHasBeenSet; }
    template<typename ConvertedPriceT = RouteTollPrice>
    void SetConvertedPrice(ConvertedPriceT&& value) { m_convertedPriceHasBeenSet = true; m_convertedPrice = std::forward<ConvertedPriceT>(value); }
    template<typename ConvertedPriceT = RouteTollPrice>
    RouteTollRate& WithConvertedPrice(ConvertedPriceT&& value) { SetConvertedPrice(std::forward<ConvertedPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Toll rate Id.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RouteTollRate& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Price in the local regional currency.</p>
     */
    inline const RouteTollPrice& GetLocalPrice() const { return m_localPrice; }
    inline bool LocalPriceHasBeenSet() const { return m_localPriceHasBeenSet; }
    template<typename LocalPriceT = RouteTollPrice>
    void SetLocalPrice(LocalPriceT&& value) { m_localPriceHasBeenSet = true; m_localPrice = std::forward<LocalPriceT>(value); }
    template<typename LocalPriceT = RouteTollPrice>
    RouteTollRate& WithLocalPrice(LocalPriceT&& value) { SetLocalPrice(std::forward<LocalPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the toll.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RouteTollRate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details if the toll rate can be a pass that supports multiple trips.</p>
     */
    inline const RouteTollPass& GetPass() const { return m_pass; }
    inline bool PassHasBeenSet() const { return m_passHasBeenSet; }
    template<typename PassT = RouteTollPass>
    void SetPass(PassT&& value) { m_passHasBeenSet = true; m_pass = std::forward<PassT>(value); }
    template<typename PassT = RouteTollPass>
    RouteTollRate& WithPass(PassT&& value) { SetPass(std::forward<PassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Accepted payment methods at the toll.</p>
     */
    inline const Aws::Vector<RouteTollPaymentMethod>& GetPaymentMethods() const { return m_paymentMethods; }
    inline bool PaymentMethodsHasBeenSet() const { return m_paymentMethodsHasBeenSet; }
    template<typename PaymentMethodsT = Aws::Vector<RouteTollPaymentMethod>>
    void SetPaymentMethods(PaymentMethodsT&& value) { m_paymentMethodsHasBeenSet = true; m_paymentMethods = std::forward<PaymentMethodsT>(value); }
    template<typename PaymentMethodsT = Aws::Vector<RouteTollPaymentMethod>>
    RouteTollRate& WithPaymentMethods(PaymentMethodsT&& value) { SetPaymentMethods(std::forward<PaymentMethodsT>(value)); return *this;}
    inline RouteTollRate& AddPaymentMethods(RouteTollPaymentMethod value) { m_paymentMethodsHasBeenSet = true; m_paymentMethods.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Transponders for which this toll can be applied.</p>
     */
    inline const Aws::Vector<RouteTransponder>& GetTransponders() const { return m_transponders; }
    inline bool TranspondersHasBeenSet() const { return m_transpondersHasBeenSet; }
    template<typename TranspondersT = Aws::Vector<RouteTransponder>>
    void SetTransponders(TranspondersT&& value) { m_transpondersHasBeenSet = true; m_transponders = std::forward<TranspondersT>(value); }
    template<typename TranspondersT = Aws::Vector<RouteTransponder>>
    RouteTollRate& WithTransponders(TranspondersT&& value) { SetTransponders(std::forward<TranspondersT>(value)); return *this;}
    template<typename TranspondersT = RouteTransponder>
    RouteTollRate& AddTransponders(TranspondersT&& value) { m_transpondersHasBeenSet = true; m_transponders.emplace_back(std::forward<TranspondersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicableTimes;
    bool m_applicableTimesHasBeenSet = false;

    RouteTollPrice m_convertedPrice;
    bool m_convertedPriceHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    RouteTollPrice m_localPrice;
    bool m_localPriceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RouteTollPass m_pass;
    bool m_passHasBeenSet = false;

    Aws::Vector<RouteTollPaymentMethod> m_paymentMethods;
    bool m_paymentMethodsHasBeenSet = false;

    Aws::Vector<RouteTransponder> m_transponders;
    bool m_transpondersHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
