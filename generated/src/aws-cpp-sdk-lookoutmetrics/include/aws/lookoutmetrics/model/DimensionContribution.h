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
    AWS_LOOKOUTMETRICS_API DimensionContribution();
    AWS_LOOKOUTMETRICS_API DimensionContribution(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DimensionContribution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dimension.</p>
     */
    inline const Aws::String& GetDimensionName() const{ return m_dimensionName; }

    /**
     * <p>The name of the dimension.</p>
     */
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }

    /**
     * <p>The name of the dimension.</p>
     */
    inline void SetDimensionName(const Aws::String& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = value; }

    /**
     * <p>The name of the dimension.</p>
     */
    inline void SetDimensionName(Aws::String&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::move(value); }

    /**
     * <p>The name of the dimension.</p>
     */
    inline void SetDimensionName(const char* value) { m_dimensionNameHasBeenSet = true; m_dimensionName.assign(value); }

    /**
     * <p>The name of the dimension.</p>
     */
    inline DimensionContribution& WithDimensionName(const Aws::String& value) { SetDimensionName(value); return *this;}

    /**
     * <p>The name of the dimension.</p>
     */
    inline DimensionContribution& WithDimensionName(Aws::String&& value) { SetDimensionName(std::move(value)); return *this;}

    /**
     * <p>The name of the dimension.</p>
     */
    inline DimensionContribution& WithDimensionName(const char* value) { SetDimensionName(value); return *this;}


    /**
     * <p>A list of dimension values that contributed to the anomaly.</p>
     */
    inline const Aws::Vector<DimensionValueContribution>& GetDimensionValueContributionList() const{ return m_dimensionValueContributionList; }

    /**
     * <p>A list of dimension values that contributed to the anomaly.</p>
     */
    inline bool DimensionValueContributionListHasBeenSet() const { return m_dimensionValueContributionListHasBeenSet; }

    /**
     * <p>A list of dimension values that contributed to the anomaly.</p>
     */
    inline void SetDimensionValueContributionList(const Aws::Vector<DimensionValueContribution>& value) { m_dimensionValueContributionListHasBeenSet = true; m_dimensionValueContributionList = value; }

    /**
     * <p>A list of dimension values that contributed to the anomaly.</p>
     */
    inline void SetDimensionValueContributionList(Aws::Vector<DimensionValueContribution>&& value) { m_dimensionValueContributionListHasBeenSet = true; m_dimensionValueContributionList = std::move(value); }

    /**
     * <p>A list of dimension values that contributed to the anomaly.</p>
     */
    inline DimensionContribution& WithDimensionValueContributionList(const Aws::Vector<DimensionValueContribution>& value) { SetDimensionValueContributionList(value); return *this;}

    /**
     * <p>A list of dimension values that contributed to the anomaly.</p>
     */
    inline DimensionContribution& WithDimensionValueContributionList(Aws::Vector<DimensionValueContribution>&& value) { SetDimensionValueContributionList(std::move(value)); return *this;}

    /**
     * <p>A list of dimension values that contributed to the anomaly.</p>
     */
    inline DimensionContribution& AddDimensionValueContributionList(const DimensionValueContribution& value) { m_dimensionValueContributionListHasBeenSet = true; m_dimensionValueContributionList.push_back(value); return *this; }

    /**
     * <p>A list of dimension values that contributed to the anomaly.</p>
     */
    inline DimensionContribution& AddDimensionValueContributionList(DimensionValueContribution&& value) { m_dimensionValueContributionListHasBeenSet = true; m_dimensionValueContributionList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    Aws::Vector<DimensionValueContribution> m_dimensionValueContributionList;
    bool m_dimensionValueContributionListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
