/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/geo-places/model/ComponentMatchScores.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>Details related to the match score.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/MatchScoreDetails">AWS
   * API Reference</a></p>
   */
  class MatchScoreDetails
  {
  public:
    AWS_GEOPLACES_API MatchScoreDetails() = default;
    AWS_GEOPLACES_API MatchScoreDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API MatchScoreDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates how well the entire input matches the returned. It is equal to 1 if
     * all input tokens are recognized and matched.</p>
     */
    inline double GetOverall() const { return m_overall; }
    inline bool OverallHasBeenSet() const { return m_overallHasBeenSet; }
    inline void SetOverall(double value) { m_overallHasBeenSet = true; m_overall = value; }
    inline MatchScoreDetails& WithOverall(double value) { SetOverall(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how well the component input matches the returned. It is equal to 1
     * if all input tokens are recognized and matched.</p>
     */
    inline const ComponentMatchScores& GetComponents() const { return m_components; }
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
    template<typename ComponentsT = ComponentMatchScores>
    void SetComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components = std::forward<ComponentsT>(value); }
    template<typename ComponentsT = ComponentMatchScores>
    MatchScoreDetails& WithComponents(ComponentsT&& value) { SetComponents(std::forward<ComponentsT>(value)); return *this;}
    ///@}
  private:

    double m_overall{0.0};
    bool m_overallHasBeenSet = false;

    ComponentMatchScores m_components;
    bool m_componentsHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
