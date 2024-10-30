/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteDirection.h>
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
   * <p>The route number.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteNumber">AWS
   * API Reference</a></p>
   */
  class RouteNumber
  {
  public:
    AWS_GEOROUTES_API RouteNumber();
    AWS_GEOROUTES_API RouteNumber(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Directional identifier of the route.</p>
     */
    inline const RouteDirection& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const RouteDirection& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(RouteDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline RouteNumber& WithDirection(const RouteDirection& value) { SetDirection(value); return *this;}
    inline RouteNumber& WithDirection(RouteDirection&& value) { SetDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of languages for instructions corresponding to the route number.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline RouteNumber& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline RouteNumber& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline RouteNumber& WithLanguage(const char* value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route number.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline RouteNumber& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline RouteNumber& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline RouteNumber& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    RouteDirection m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
