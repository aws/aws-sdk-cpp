/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteViolatedConstraints.h>
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
   * <p>Additional details of the notice.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteVehicleNoticeDetail">AWS
   * API Reference</a></p>
   */
  class RouteVehicleNoticeDetail
  {
  public:
    AWS_GEOROUTES_API RouteVehicleNoticeDetail() = default;
    AWS_GEOROUTES_API RouteVehicleNoticeDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleNoticeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The notice title.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    RouteVehicleNoticeDetail& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any violated constraints.</p>
     */
    inline const RouteViolatedConstraints& GetViolatedConstraints() const { return m_violatedConstraints; }
    inline bool ViolatedConstraintsHasBeenSet() const { return m_violatedConstraintsHasBeenSet; }
    template<typename ViolatedConstraintsT = RouteViolatedConstraints>
    void SetViolatedConstraints(ViolatedConstraintsT&& value) { m_violatedConstraintsHasBeenSet = true; m_violatedConstraints = std::forward<ViolatedConstraintsT>(value); }
    template<typename ViolatedConstraintsT = RouteViolatedConstraints>
    RouteVehicleNoticeDetail& WithViolatedConstraints(ViolatedConstraintsT&& value) { SetViolatedConstraints(std::forward<ViolatedConstraintsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    RouteViolatedConstraints m_violatedConstraints;
    bool m_violatedConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
