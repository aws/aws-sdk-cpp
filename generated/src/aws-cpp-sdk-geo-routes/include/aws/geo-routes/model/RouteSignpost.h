/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteSignpostLabel.h>
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
   * <p>Sign post information of the action, applicable only for TurnByTurn steps.
   * See RouteSignpost for details of sub-attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteSignpost">AWS
   * API Reference</a></p>
   */
  class RouteSignpost
  {
  public:
    AWS_GEOROUTES_API RouteSignpost() = default;
    AWS_GEOROUTES_API RouteSignpost(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteSignpost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Labels present on the sign post.</p>
     */
    inline const Aws::Vector<RouteSignpostLabel>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Vector<RouteSignpostLabel>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<RouteSignpostLabel>>
    RouteSignpost& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = RouteSignpostLabel>
    RouteSignpost& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RouteSignpostLabel> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
