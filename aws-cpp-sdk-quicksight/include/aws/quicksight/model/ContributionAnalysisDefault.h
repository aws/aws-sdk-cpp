/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The contribution analysis visual display for a line, pie, or bar
   * chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ContributionAnalysisDefault">AWS
   * API Reference</a></p>
   */
  class ContributionAnalysisDefault
  {
  public:
    AWS_QUICKSIGHT_API ContributionAnalysisDefault();
    AWS_QUICKSIGHT_API ContributionAnalysisDefault(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ContributionAnalysisDefault& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The measure field that is used in the contribution analysis.</p>
     */
    inline const Aws::String& GetMeasureFieldId() const{ return m_measureFieldId; }

    /**
     * <p>The measure field that is used in the contribution analysis.</p>
     */
    inline bool MeasureFieldIdHasBeenSet() const { return m_measureFieldIdHasBeenSet; }

    /**
     * <p>The measure field that is used in the contribution analysis.</p>
     */
    inline void SetMeasureFieldId(const Aws::String& value) { m_measureFieldIdHasBeenSet = true; m_measureFieldId = value; }

    /**
     * <p>The measure field that is used in the contribution analysis.</p>
     */
    inline void SetMeasureFieldId(Aws::String&& value) { m_measureFieldIdHasBeenSet = true; m_measureFieldId = std::move(value); }

    /**
     * <p>The measure field that is used in the contribution analysis.</p>
     */
    inline void SetMeasureFieldId(const char* value) { m_measureFieldIdHasBeenSet = true; m_measureFieldId.assign(value); }

    /**
     * <p>The measure field that is used in the contribution analysis.</p>
     */
    inline ContributionAnalysisDefault& WithMeasureFieldId(const Aws::String& value) { SetMeasureFieldId(value); return *this;}

    /**
     * <p>The measure field that is used in the contribution analysis.</p>
     */
    inline ContributionAnalysisDefault& WithMeasureFieldId(Aws::String&& value) { SetMeasureFieldId(std::move(value)); return *this;}

    /**
     * <p>The measure field that is used in the contribution analysis.</p>
     */
    inline ContributionAnalysisDefault& WithMeasureFieldId(const char* value) { SetMeasureFieldId(value); return *this;}


    /**
     * <p>The dimensions columns that are used in the contribution analysis, usually a
     * list of <code>ColumnIdentifiers</code>.</p>
     */
    inline const Aws::Vector<ColumnIdentifier>& GetContributorDimensions() const{ return m_contributorDimensions; }

    /**
     * <p>The dimensions columns that are used in the contribution analysis, usually a
     * list of <code>ColumnIdentifiers</code>.</p>
     */
    inline bool ContributorDimensionsHasBeenSet() const { return m_contributorDimensionsHasBeenSet; }

    /**
     * <p>The dimensions columns that are used in the contribution analysis, usually a
     * list of <code>ColumnIdentifiers</code>.</p>
     */
    inline void SetContributorDimensions(const Aws::Vector<ColumnIdentifier>& value) { m_contributorDimensionsHasBeenSet = true; m_contributorDimensions = value; }

    /**
     * <p>The dimensions columns that are used in the contribution analysis, usually a
     * list of <code>ColumnIdentifiers</code>.</p>
     */
    inline void SetContributorDimensions(Aws::Vector<ColumnIdentifier>&& value) { m_contributorDimensionsHasBeenSet = true; m_contributorDimensions = std::move(value); }

    /**
     * <p>The dimensions columns that are used in the contribution analysis, usually a
     * list of <code>ColumnIdentifiers</code>.</p>
     */
    inline ContributionAnalysisDefault& WithContributorDimensions(const Aws::Vector<ColumnIdentifier>& value) { SetContributorDimensions(value); return *this;}

    /**
     * <p>The dimensions columns that are used in the contribution analysis, usually a
     * list of <code>ColumnIdentifiers</code>.</p>
     */
    inline ContributionAnalysisDefault& WithContributorDimensions(Aws::Vector<ColumnIdentifier>&& value) { SetContributorDimensions(std::move(value)); return *this;}

    /**
     * <p>The dimensions columns that are used in the contribution analysis, usually a
     * list of <code>ColumnIdentifiers</code>.</p>
     */
    inline ContributionAnalysisDefault& AddContributorDimensions(const ColumnIdentifier& value) { m_contributorDimensionsHasBeenSet = true; m_contributorDimensions.push_back(value); return *this; }

    /**
     * <p>The dimensions columns that are used in the contribution analysis, usually a
     * list of <code>ColumnIdentifiers</code>.</p>
     */
    inline ContributionAnalysisDefault& AddContributorDimensions(ColumnIdentifier&& value) { m_contributorDimensionsHasBeenSet = true; m_contributorDimensions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_measureFieldId;
    bool m_measureFieldIdHasBeenSet = false;

    Aws::Vector<ColumnIdentifier> m_contributorDimensions;
    bool m_contributorDimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
