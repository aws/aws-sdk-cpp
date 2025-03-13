/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/DimensionValueContribution.h>
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
   * <p>Details about a dimension that contributed to an anomaly.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DimensionContribution">AWS
   * API Reference</a></p>
   */
  class DimensionContribution
  {
  public:
    AWS_LOOKOUTMETRICS_API DimensionContribution() = default;
    AWS_LOOKOUTMETRICS_API DimensionContribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DimensionContribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dimension.</p>
     */
    inline const Aws::String& GetDimensionName() const { return m_dimensionName; }
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }
    template<typename DimensionNameT = Aws::String>
    void SetDimensionName(DimensionNameT&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::forward<DimensionNameT>(value); }
    template<typename DimensionNameT = Aws::String>
    DimensionContribution& WithDimensionName(DimensionNameT&& value) { SetDimensionName(std::forward<DimensionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of dimension values that contributed to the anomaly.</p>
     */
    inline const Aws::Vector<DimensionValueContribution>& GetDimensionValueContributionList() const { return m_dimensionValueContributionList; }
    inline bool DimensionValueContributionListHasBeenSet() const { return m_dimensionValueContributionListHasBeenSet; }
    template<typename DimensionValueContributionListT = Aws::Vector<DimensionValueContribution>>
    void SetDimensionValueContributionList(DimensionValueContributionListT&& value) { m_dimensionValueContributionListHasBeenSet = true; m_dimensionValueContributionList = std::forward<DimensionValueContributionListT>(value); }
    template<typename DimensionValueContributionListT = Aws::Vector<DimensionValueContribution>>
    DimensionContribution& WithDimensionValueContributionList(DimensionValueContributionListT&& value) { SetDimensionValueContributionList(std::forward<DimensionValueContributionListT>(value)); return *this;}
    template<typename DimensionValueContributionListT = DimensionValueContribution>
    DimensionContribution& AddDimensionValueContributionList(DimensionValueContributionListT&& value) { m_dimensionValueContributionListHasBeenSet = true; m_dimensionValueContributionList.emplace_back(std::forward<DimensionValueContributionListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    Aws::Vector<DimensionValueContribution> m_dimensionValueContributionList;
    bool m_dimensionValueContributionListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
