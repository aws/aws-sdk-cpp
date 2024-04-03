/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/TimeSeriesDataPointSummaryFormOutput.h>
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
    AWS_DATAZONE_API AssetListingItemAdditionalAttributes();
    AWS_DATAZONE_API AssetListingItemAdditionalAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetListingItemAdditionalAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metadata forms that form additional attributes of the metadata asset.</p>
     */
    inline const Aws::String& GetForms() const{ return m_forms; }

    /**
     * <p>The metadata forms that form additional attributes of the metadata asset.</p>
     */
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }

    /**
     * <p>The metadata forms that form additional attributes of the metadata asset.</p>
     */
    inline void SetForms(const Aws::String& value) { m_formsHasBeenSet = true; m_forms = value; }

    /**
     * <p>The metadata forms that form additional attributes of the metadata asset.</p>
     */
    inline void SetForms(Aws::String&& value) { m_formsHasBeenSet = true; m_forms = std::move(value); }

    /**
     * <p>The metadata forms that form additional attributes of the metadata asset.</p>
     */
    inline void SetForms(const char* value) { m_formsHasBeenSet = true; m_forms.assign(value); }

    /**
     * <p>The metadata forms that form additional attributes of the metadata asset.</p>
     */
    inline AssetListingItemAdditionalAttributes& WithForms(const Aws::String& value) { SetForms(value); return *this;}

    /**
     * <p>The metadata forms that form additional attributes of the metadata asset.</p>
     */
    inline AssetListingItemAdditionalAttributes& WithForms(Aws::String&& value) { SetForms(std::move(value)); return *this;}

    /**
     * <p>The metadata forms that form additional attributes of the metadata asset.</p>
     */
    inline AssetListingItemAdditionalAttributes& WithForms(const char* value) { SetForms(value); return *this;}


    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& GetLatestTimeSeriesDataPointForms() const{ return m_latestTimeSeriesDataPointForms; }

    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline bool LatestTimeSeriesDataPointFormsHasBeenSet() const { return m_latestTimeSeriesDataPointFormsHasBeenSet; }

    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline void SetLatestTimeSeriesDataPointForms(const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms = value; }

    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline void SetLatestTimeSeriesDataPointForms(Aws::Vector<TimeSeriesDataPointSummaryFormOutput>&& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms = std::move(value); }

    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline AssetListingItemAdditionalAttributes& WithLatestTimeSeriesDataPointForms(const Aws::Vector<TimeSeriesDataPointSummaryFormOutput>& value) { SetLatestTimeSeriesDataPointForms(value); return *this;}

    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline AssetListingItemAdditionalAttributes& WithLatestTimeSeriesDataPointForms(Aws::Vector<TimeSeriesDataPointSummaryFormOutput>&& value) { SetLatestTimeSeriesDataPointForms(std::move(value)); return *this;}

    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline AssetListingItemAdditionalAttributes& AddLatestTimeSeriesDataPointForms(const TimeSeriesDataPointSummaryFormOutput& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms.push_back(value); return *this; }

    /**
     * <p>The latest time series data points forms included in the additional
     * attributes of an asset.</p>
     */
    inline AssetListingItemAdditionalAttributes& AddLatestTimeSeriesDataPointForms(TimeSeriesDataPointSummaryFormOutput&& value) { m_latestTimeSeriesDataPointFormsHasBeenSet = true; m_latestTimeSeriesDataPointForms.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_forms;
    bool m_formsHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPointSummaryFormOutput> m_latestTimeSeriesDataPointForms;
    bool m_latestTimeSeriesDataPointFormsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
