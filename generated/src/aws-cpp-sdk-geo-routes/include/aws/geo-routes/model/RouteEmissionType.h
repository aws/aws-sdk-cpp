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
    AWS_GEOROUTES_API RouteEmissionType();
    AWS_GEOROUTES_API RouteEmissionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteEmissionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CO 2 emission classes.</p>
     */
    inline const Aws::String& GetCo2EmissionClass() const{ return m_co2EmissionClass; }
    inline bool Co2EmissionClassHasBeenSet() const { return m_co2EmissionClassHasBeenSet; }
    inline void SetCo2EmissionClass(const Aws::String& value) { m_co2EmissionClassHasBeenSet = true; m_co2EmissionClass = value; }
    inline void SetCo2EmissionClass(Aws::String&& value) { m_co2EmissionClassHasBeenSet = true; m_co2EmissionClass = std::move(value); }
    inline void SetCo2EmissionClass(const char* value) { m_co2EmissionClassHasBeenSet = true; m_co2EmissionClass.assign(value); }
    inline RouteEmissionType& WithCo2EmissionClass(const Aws::String& value) { SetCo2EmissionClass(value); return *this;}
    inline RouteEmissionType& WithCo2EmissionClass(Aws::String&& value) { SetCo2EmissionClass(std::move(value)); return *this;}
    inline RouteEmissionType& WithCo2EmissionClass(const char* value) { SetCo2EmissionClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the emission.</p> <p> <b>Valid values</b>: <code>Euro1, Euro2, Euro3,
     * Euro4, Euro5, Euro6, EuroEev</code> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline RouteEmissionType& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline RouteEmissionType& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline RouteEmissionType& WithType(const char* value) { SetType(value); return *this;}
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
