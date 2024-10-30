/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Exclusion options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteMatrixExclusionOptions">AWS
   * API Reference</a></p>
   */
  class RouteMatrixExclusionOptions
  {
  public:
    AWS_GEOROUTES_API RouteMatrixExclusionOptions();
    AWS_GEOROUTES_API RouteMatrixExclusionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteMatrixExclusionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of countries to be avoided defined by two-letter or three-letter country
     * codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCountries() const{ return m_countries; }
    inline bool CountriesHasBeenSet() const { return m_countriesHasBeenSet; }
    inline void SetCountries(const Aws::Vector<Aws::String>& value) { m_countriesHasBeenSet = true; m_countries = value; }
    inline void SetCountries(Aws::Vector<Aws::String>&& value) { m_countriesHasBeenSet = true; m_countries = std::move(value); }
    inline RouteMatrixExclusionOptions& WithCountries(const Aws::Vector<Aws::String>& value) { SetCountries(value); return *this;}
    inline RouteMatrixExclusionOptions& WithCountries(Aws::Vector<Aws::String>&& value) { SetCountries(std::move(value)); return *this;}
    inline RouteMatrixExclusionOptions& AddCountries(const Aws::String& value) { m_countriesHasBeenSet = true; m_countries.push_back(value); return *this; }
    inline RouteMatrixExclusionOptions& AddCountries(Aws::String&& value) { m_countriesHasBeenSet = true; m_countries.push_back(std::move(value)); return *this; }
    inline RouteMatrixExclusionOptions& AddCountries(const char* value) { m_countriesHasBeenSet = true; m_countries.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_countries;
    bool m_countriesHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
