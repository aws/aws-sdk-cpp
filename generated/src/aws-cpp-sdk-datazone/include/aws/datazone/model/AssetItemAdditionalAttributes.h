/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/FormOutput.h>
#include <aws/datazone/model/TimeSeriesDataPointSummaryFormOutput.h>
#include <aws/datazone/model/MatchRationaleItem.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The additional attributes of an inventory asset.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetItemAdditionalAttributes">AWS
   * API Reference</a></p>
   */
  class AssetItemAdditionalAttributes
  {
  public:
    AWS_DATAZONE_API AssetItemAdditionalAttributes() = default;
    AWS_DATAZONE_API AssetItemAdditionalAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetItemAdditionalAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The forms included in the additional attributes of an inventory asset.</p>
     */
    inline const Aws::Vector<FormOutput>& GetFormsOutput() const { return m_formsOutput; }
    inline bool FormsOutputHasBeenSet() const { return m_formsOutputHasBeenSet; }
    template<typename FormsOutputT = Aws::Vector<FormOutput>>
    void SetFormsOutput(FormsOutputT&& value) { m_formsOutputHasBeenSet = true; m_formsOutput = std::forward<FormsOutputT>(value); }
    template<typename FormsOutputT = Aws::Vector<FormOutput>>
    AssetItemAdditionalAttributes& WithFormsOutput(FormsOutputT&& value) { SetFormsOutput(std::forward<FormsOutputT>(value)); return *this;}
    template<typename FormsOutputT = FormOutput>
    AssetItemAdditionalAttributes& AddFormsOutput(FormsOutputT&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace_back(std::forward<FormsOutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& GetLatestTimeSeriesDataPointFormsOutput() const { return m_latestTimeSeriesDataPointFormsOutput; }
    inline bool LatestTimeSeriesDataPointFormsOutputHasBeenSet() const { return m_latestTimeSeriesDataPointFormsOutputHasBeenSet; }
    template<typename LatestTimeSeriesDataPointFormsOutputT = Aws::Vector<TimeSeriesDataPointSummaryFormOutput>>
    void SetLatestTimeSeriesDataPointFormsOutput(LatestTimeSeriesDataPointFormsOutputT&& value) { m_latestTimeSeriesDataPointFormsOutputHasBeenSet = true; m_latestTimeSeriesDataPointFormsOutput = std::forward<LatestTimeSeriesDataPointFormsOutputT>(value); }
    template<typename LatestTimeSeriesDataPointFormsOutputT = Aws::Vector<TimeSeriesDataPointSummaryFormOutput>>
    AssetItemAdditionalAttributes& WithLatestTimeSeriesDataPointFormsOutput(LatestTimeSeriesDataPointFormsOutputT&& value) { SetLatestTimeSeriesDataPointFormsOutput(std::forward<LatestTimeSeriesDataPointFormsOutputT>(value)); return *this;}
    template<typename LatestTimeSeriesDataPointFormsOutputT = TimeSeriesDataPointSummaryFormOutput>
    AssetItemAdditionalAttributes& AddLatestTimeSeriesDataPointFormsOutput(LatestTimeSeriesDataPointFormsOutputT&& value) { m_latestTimeSeriesDataPointFormsOutputHasBeenSet = true; m_latestTimeSeriesDataPointFormsOutput.emplace_back(std::forward<LatestTimeSeriesDataPointFormsOutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of rationales indicating why this item was matched by search.</p>
     */
    inline const Aws::Vector<MatchRationaleItem>& GetMatchRationale() const { return m_matchRationale; }
    inline bool MatchRationaleHasBeenSet() const { return m_matchRationaleHasBeenSet; }
    template<typename MatchRationaleT = Aws::Vector<MatchRationaleItem>>
    void SetMatchRationale(MatchRationaleT&& value) { m_matchRationaleHasBeenSet = true; m_matchRationale = std::forward<MatchRationaleT>(value); }
    template<typename MatchRationaleT = Aws::Vector<MatchRationaleItem>>
    AssetItemAdditionalAttributes& WithMatchRationale(MatchRationaleT&& value) { SetMatchRationale(std::forward<MatchRationaleT>(value)); return *this;}
    template<typename MatchRationaleT = MatchRationaleItem>
    AssetItemAdditionalAttributes& AddMatchRationale(MatchRationaleT&& value) { m_matchRationaleHasBeenSet = true; m_matchRationale.emplace_back(std::forward<MatchRationaleT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The read-only forms included in the additional attributes of an inventory
     * asset.</p>
     */
    inline const Aws::Vector<FormOutput>& GetReadOnlyFormsOutput() const { return m_readOnlyFormsOutput; }
    inline bool ReadOnlyFormsOutputHasBeenSet() const { return m_readOnlyFormsOutputHasBeenSet; }
    template<typename ReadOnlyFormsOutputT = Aws::Vector<FormOutput>>
    void SetReadOnlyFormsOutput(ReadOnlyFormsOutputT&& value) { m_readOnlyFormsOutputHasBeenSet = true; m_readOnlyFormsOutput = std::forward<ReadOnlyFormsOutputT>(value); }
    template<typename ReadOnlyFormsOutputT = Aws::Vector<FormOutput>>
    AssetItemAdditionalAttributes& WithReadOnlyFormsOutput(ReadOnlyFormsOutputT&& value) { SetReadOnlyFormsOutput(std::forward<ReadOnlyFormsOutputT>(value)); return *this;}
    template<typename ReadOnlyFormsOutputT = FormOutput>
    AssetItemAdditionalAttributes& AddReadOnlyFormsOutput(ReadOnlyFormsOutputT&& value) { m_readOnlyFormsOutputHasBeenSet = true; m_readOnlyFormsOutput.emplace_back(std::forward<ReadOnlyFormsOutputT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FormOutput> m_formsOutput;
    bool m_formsOutputHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPointSummaryFormOutput> m_latestTimeSeriesDataPointFormsOutput;
    bool m_latestTimeSeriesDataPointFormsOutputHasBeenSet = false;

    Aws::Vector<MatchRationaleItem> m_matchRationale;
    bool m_matchRationaleHasBeenSet = false;

    Aws::Vector<FormOutput> m_readOnlyFormsOutput;
    bool m_readOnlyFormsOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
