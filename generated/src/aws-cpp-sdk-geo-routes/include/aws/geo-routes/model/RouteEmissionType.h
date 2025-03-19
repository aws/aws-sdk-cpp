/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
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
   * <p>Type of the emission.</p> <p> <b>Valid values</b>: <code>Euro1, Euro2, Euro3,
   * Euro4, Euro5, Euro6, EuroEev</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteEmissionType">AWS
   * API Reference</a></p>
   */
  class RouteEmissionType
  {
  public:
    AWS_GEOROUTES_API RouteEmissionType() = default;
    AWS_GEOROUTES_API RouteEmissionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteEmissionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CO 2 emission classes.</p>
     */
    inline const Aws::String& GetCo2EmissionClass() const { return m_co2EmissionClass; }
    inline bool Co2EmissionClassHasBeenSet() const { return m_co2EmissionClassHasBeenSet; }
    template<typename Co2EmissionClassT = Aws::String>
    void SetCo2EmissionClass(Co2EmissionClassT&& value) { m_co2EmissionClassHasBeenSet = true; m_co2EmissionClass = std::forward<Co2EmissionClassT>(value); }
    template<typename Co2EmissionClassT = Aws::String>
    RouteEmissionType& WithCo2EmissionClass(Co2EmissionClassT&& value) { SetCo2EmissionClass(std::forward<Co2EmissionClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the emission.</p> <p> <b>Valid values</b>: <code>Euro1, Euro2, Euro3,
     * Euro4, Euro5, Euro6, EuroEev</code> </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    RouteEmissionType& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_co2EmissionClass;
    bool m_co2EmissionClassHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
