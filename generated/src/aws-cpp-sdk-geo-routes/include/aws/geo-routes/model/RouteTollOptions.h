/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteEmissionType.h>
#include <aws/geo-routes/model/RouteTollVehicleCategory.h>
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
   * <p>Options related to Tolls on a route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteTollOptions">AWS
   * API Reference</a></p>
   */
  class RouteTollOptions
  {
  public:
    AWS_GEOROUTES_API RouteTollOptions();
    AWS_GEOROUTES_API RouteTollOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteTollOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies if the user has valid transponder with access to all toll systems.
     * This impacts toll calculation, and if true the price with transponders is
     * used.</p>
     */
    inline bool GetAllTransponders() const{ return m_allTransponders; }
    inline bool AllTranspondersHasBeenSet() const { return m_allTranspondersHasBeenSet; }
    inline void SetAllTransponders(bool value) { m_allTranspondersHasBeenSet = true; m_allTransponders = value; }
    inline RouteTollOptions& WithAllTransponders(bool value) { SetAllTransponders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the user has valid vignettes with access for all toll roads. If
     * a user has a vignette for a toll road, then toll cost for that road is omitted
     * since no further payment is necessary.</p>
     */
    inline bool GetAllVignettes() const{ return m_allVignettes; }
    inline bool AllVignettesHasBeenSet() const { return m_allVignettesHasBeenSet; }
    inline void SetAllVignettes(bool value) { m_allVignettesHasBeenSet = true; m_allVignettes = value; }
    inline RouteTollOptions& WithAllVignettes(bool value) { SetAllVignettes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Currency code corresponding to the price. This is the same as Currency
     * specified in the request.</p>
     */
    inline const Aws::String& GetCurrency() const{ return m_currency; }
    inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
    inline void SetCurrency(const Aws::String& value) { m_currencyHasBeenSet = true; m_currency = value; }
    inline void SetCurrency(Aws::String&& value) { m_currencyHasBeenSet = true; m_currency = std::move(value); }
    inline void SetCurrency(const char* value) { m_currencyHasBeenSet = true; m_currency.assign(value); }
    inline RouteTollOptions& WithCurrency(const Aws::String& value) { SetCurrency(value); return *this;}
    inline RouteTollOptions& WithCurrency(Aws::String&& value) { SetCurrency(std::move(value)); return *this;}
    inline RouteTollOptions& WithCurrency(const char* value) { SetCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Emission type of the vehicle for toll cost calculation.</p> <p> <b>Valid
     * values</b>: <code>Euro1, Euro2, Euro3, Euro4, Euro5, Euro6, EuroEev</code> </p>
     */
    inline const RouteEmissionType& GetEmissionType() const{ return m_emissionType; }
    inline bool EmissionTypeHasBeenSet() const { return m_emissionTypeHasBeenSet; }
    inline void SetEmissionType(const RouteEmissionType& value) { m_emissionTypeHasBeenSet = true; m_emissionType = value; }
    inline void SetEmissionType(RouteEmissionType&& value) { m_emissionTypeHasBeenSet = true; m_emissionType = std::move(value); }
    inline RouteTollOptions& WithEmissionType(const RouteEmissionType& value) { SetEmissionType(value); return *this;}
    inline RouteTollOptions& WithEmissionType(RouteEmissionType&& value) { SetEmissionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Vehicle category for toll cost calculation.</p>
     */
    inline const RouteTollVehicleCategory& GetVehicleCategory() const{ return m_vehicleCategory; }
    inline bool VehicleCategoryHasBeenSet() const { return m_vehicleCategoryHasBeenSet; }
    inline void SetVehicleCategory(const RouteTollVehicleCategory& value) { m_vehicleCategoryHasBeenSet = true; m_vehicleCategory = value; }
    inline void SetVehicleCategory(RouteTollVehicleCategory&& value) { m_vehicleCategoryHasBeenSet = true; m_vehicleCategory = std::move(value); }
    inline RouteTollOptions& WithVehicleCategory(const RouteTollVehicleCategory& value) { SetVehicleCategory(value); return *this;}
    inline RouteTollOptions& WithVehicleCategory(RouteTollVehicleCategory&& value) { SetVehicleCategory(std::move(value)); return *this;}
    ///@}
  private:

    bool m_allTransponders;
    bool m_allTranspondersHasBeenSet = false;

    bool m_allVignettes;
    bool m_allVignettesHasBeenSet = false;

    Aws::String m_currency;
    bool m_currencyHasBeenSet = false;

    RouteEmissionType m_emissionType;
    bool m_emissionTypeHasBeenSet = false;

    RouteTollVehicleCategory m_vehicleCategory;
    bool m_vehicleCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
