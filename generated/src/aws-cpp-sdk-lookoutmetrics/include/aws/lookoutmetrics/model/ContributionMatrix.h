/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/DimensionContribution.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Details about dimensions that contributed to an anomaly.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/ContributionMatrix">AWS
   * API Reference</a></p>
   */
  class ContributionMatrix
  {
  public:
    AWS_LOOKOUTMETRICS_API ContributionMatrix() = default;
    AWS_LOOKOUTMETRICS_API ContributionMatrix(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API ContributionMatrix& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of contributing dimensions.</p>
     */
    inline const Aws::Vector<DimensionContribution>& GetDimensionContributionList() const { return m_dimensionContributionList; }
    inline bool DimensionContributionListHasBeenSet() const { return m_dimensionContributionListHasBeenSet; }
    template<typename DimensionContributionListT = Aws::Vector<DimensionContribution>>
    void SetDimensionContributionList(DimensionContributionListT&& value) { m_dimensionContributionListHasBeenSet = true; m_dimensionContributionList = std::forward<DimensionContributionListT>(value); }
    template<typename DimensionContributionListT = Aws::Vector<DimensionContribution>>
    ContributionMatrix& WithDimensionContributionList(DimensionContributionListT&& value) { SetDimensionContributionList(std::forward<DimensionContributionListT>(value)); return *this;}
    template<typename DimensionContributionListT = DimensionContribution>
    ContributionMatrix& AddDimensionContributionList(DimensionContributionListT&& value) { m_dimensionContributionListHasBeenSet = true; m_dimensionContributionList.emplace_back(std::forward<DimensionContributionListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionContribution> m_dimensionContributionList;
    bool m_dimensionContributionListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
