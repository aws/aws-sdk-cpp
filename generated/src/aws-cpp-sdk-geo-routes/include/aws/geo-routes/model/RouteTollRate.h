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
    AWS_GEOROUTES_API RouteTollRate();
    AWS_GEOROUTES_API RouteTollRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTollRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time when the rate is valid.</p>
     */
    inline const Aws::String& GetApplicableTimes() const{ return m_applicableTimes; }
    inline bool ApplicableTimesHasBeenSet() const { return m_applicableTimesHasBeenSet; }
    inline void SetApplicableTimes(const Aws::String& value) { m_applicableTimesHasBeenSet = true; m_applicableTimes = value; }
    inline void SetApplicableTimes(Aws::String&& value) { m_applicableTimesHasBeenSet = true; m_applicableTimes = std::move(value); }
    inline void SetApplicableTimes(const char* value) { m_applicableTimesHasBeenSet = true; m_applicableTimes.assign(value); }
    inline RouteTollRate& WithApplicableTimes(const Aws::String& value) { SetApplicableTimes(value); return *this;}
    inline RouteTollRate& WithApplicableTimes(Aws::String&& value) { SetApplicableTimes(std::move(value)); return *this;}
    inline RouteTollRate& WithApplicableTimes(const char* value) { SetApplicableTimes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Price in the converted currency as specified in the request.</p>
     */
    inline const RouteTollPrice& GetConvertedPrice() const{ return m_convertedPrice; }
    inline bool ConvertedPriceHasBeenSet() const { return m_convertedPriceHasBeenSet; }
    inline void SetConvertedPrice(const RouteTollPrice& value) { m_convertedPriceHasBeenSet = true; m_convertedPrice = value; }
    inline void SetConvertedPrice(RouteTollPrice&& value) { m_convertedPriceHasBeenSet = true; m_convertedPrice = std::move(value); }
    inline RouteTollRate& WithConvertedPrice(const RouteTollPrice& value) { SetConvertedPrice(value); return *this;}
    inline RouteTollRate& WithConvertedPrice(RouteTollPrice&& value) { SetConvertedPrice(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Toll rate Id.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RouteTollRate& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RouteTollRate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RouteTollRate& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Price in the local regional currency.</p>
     */
    inline const RouteTollPrice& GetLocalPrice() const{ return m_localPrice; }
    inline bool LocalPriceHasBeenSet() const { return m_localPriceHasBeenSet; }
    inline void SetLocalPrice(const RouteTollPrice& value) { m_localPriceHasBeenSet = true; m_localPrice = value; }
    inline void SetLocalPrice(RouteTollPrice&& value) { m_localPriceHasBeenSet = true; m_localPrice = std::move(value); }
    inline RouteTollRate& WithLocalPrice(const RouteTollPrice& value) { SetLocalPrice(value); return *this;}
    inline RouteTollRate& WithLocalPrice(RouteTollPrice&& value) { SetLocalPrice(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the toll.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RouteTollRate& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RouteTollRate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RouteTollRate& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details if the toll rate can be a pass that supports multiple trips.</p>
     */
    inline const RouteTollPass& GetPass() const{ return m_pass; }
    inline bool PassHasBeenSet() const { return m_passHasBeenSet; }
    inline void SetPass(const RouteTollPass& value) { m_passHasBeenSet = true; m_pass = value; }
    inline void SetPass(RouteTollPass&& value) { m_passHasBeenSet = true; m_pass = std::move(value); }
    inline RouteTollRate& WithPass(const RouteTollPass& value) { SetPass(value); return *this;}
    inline RouteTollRate& WithPass(RouteTollPass&& value) { SetPass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Accepted payment methods at the toll.</p>
     */
    inline const Aws::Vector<RouteTollPaymentMethod>& GetPaymentMethods() const{ return m_paymentMethods; }
    inline bool PaymentMethodsHasBeenSet() const { return m_paymentMethodsHasBeenSet; }
    inline void SetPaymentMethods(const Aws::Vector<RouteTollPaymentMethod>& value) { m_paymentMethodsHasBeenSet = true; m_paymentMethods = value; }
    inline void SetPaymentMethods(Aws::Vector<RouteTollPaymentMethod>&& value) { m_paymentMethodsHasBeenSet = true; m_paymentMethods = std::move(value); }
    inline RouteTollRate& WithPaymentMethods(const Aws::Vector<RouteTollPaymentMethod>& value) { SetPaymentMethods(value); return *this;}
    inline RouteTollRate& WithPaymentMethods(Aws::Vector<RouteTollPaymentMethod>&& value) { SetPaymentMethods(std::move(value)); return *this;}
    inline RouteTollRate& AddPaymentMethods(const RouteTollPaymentMethod& value) { m_paymentMethodsHasBeenSet = true; m_paymentMethods.push_back(value); return *this; }
    inline RouteTollRate& AddPaymentMethods(RouteTollPaymentMethod&& value) { m_paymentMethodsHasBeenSet = true; m_paymentMethods.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Transponders for which this toll can be applied.</p>
     */
    inline const Aws::Vector<RouteTransponder>& GetTransponders() const{ return m_transponders; }
    inline bool TranspondersHasBeenSet() const { return m_transpondersHasBeenSet; }
    inline void SetTransponders(const Aws::Vector<RouteTransponder>& value) { m_transpondersHasBeenSet = true; m_transponders = value; }
    inline void SetTransponders(Aws::Vector<RouteTransponder>&& value) { m_transpondersHasBeenSet = true; m_transponders = std::move(value); }
    inline RouteTollRate& WithTransponders(const Aws::Vector<RouteTransponder>& value) { SetTransponders(value); return *this;}
    inline RouteTollRate& WithTransponders(Aws::Vector<RouteTransponder>&& value) { SetTransponders(std::move(value)); return *this;}
    inline RouteTollRate& AddTransponders(const RouteTransponder& value) { m_transpondersHasBeenSet = true; m_transponders.push_back(value); return *this; }
    inline RouteTollRate& AddTransponders(RouteTransponder&& value) { m_transpondersHasBeenSet = true; m_transponders.push_back(std::move(value)); return *this; }
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
