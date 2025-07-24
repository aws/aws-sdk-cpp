/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Additional attributes of an inventory asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetListingItemAdditionalAttributes">AWS
   * API Reference</a></p>
   */
  class AssetListingItemAdditionalAttributes
  {
  public:
    AWS_DATAZONE_API AssetListingItemAdditionalAttributes() = default;
    AWS_DATAZONE_API AssetListingItemAdditionalAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetListingItemAdditionalAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metadata forms that form additional attributes of the metadata asset.</p>
     */
    inline const Aws::String& GetForms() const { return m_forms; }
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
    template<typename FormsT = Aws::String>
    void SetForms(FormsT&& value) { m_formsHasBeenSet = true; m_forms = std::forward<FormsT>(value); }
    template<typename FormsT = Aws::String>
    AssetListingItemAdditionalAttributes& WithForms(FormsT&& value) { SetForms(std::forward<FormsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& GetLatestTimeSeriesDataPointForms() const { return m_latestTimeSeriesDataPointForms; }
    inline bool LatestTimeSeriesDataPointFormsHasBeenSet() const { return m_latestTimeSeriesDataPointFormsHasBeenSet; }
    template<typename LatestTimeSeriesDataPointFormsT = Aws::Vector<TimeSeriesDataPointSummaryFormOutput>>
    void SetLatestTimeSeriesDataPointForms(LatestTimeSeriesDataPointFormsT&& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms = std::forward<LatestTimeSeriesDataPointFormsT>(value); }
    template<typename LatestTimeSeriesDataPointFormsT = Aws::Vector<TimeSeriesDataPointSummaryFormOutput>>
    AssetListingItemAdditionalAttributes& WithLatestTimeSeriesDataPointForms(LatestTimeSeriesDataPointFormsT&& value) { SetLatestTimeSeriesDataPointForms(std::forward<LatestTimeSeriesDataPointFormsT>(value)); return *this;}
    template<typename LatestTimeSeriesDataPointFormsT = TimeSeriesDataPointSummaryFormOutput>
    AssetListingItemAdditionalAttributes& AddLatestTimeSeriesDataPointForms(LatestTimeSeriesDataPointFormsT&& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms.emplace_back(std::forward<LatestTimeSeriesDataPointFormsT>(value)); return *this; }
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
    AssetListingItemAdditionalAttributes& WithMatchRationale(MatchRationaleT&& value) { SetMatchRationale(std::forward<MatchRationaleT>(value)); return *this;}
    template<typename MatchRationaleT = MatchRationaleItem>
    AssetListingItemAdditionalAttributes& AddMatchRationale(MatchRationaleT&& value) { m_matchRationaleHasBeenSet = true; m_matchRationale.emplace_back(std::forward<MatchRationaleT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_forms;
    bool m_formsHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPointSummaryFormOutput> m_latestTimeSeriesDataPointForms;
    bool m_latestTimeSeriesDataPointFormsHasBeenSet = false;

    Aws::Vector<MatchRationaleItem> m_matchRationale;
    bool m_matchRationaleHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
