/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ComparisonMethod.h>
#include <aws/quicksight/model/ComparisonFormatConfiguration.h>
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
   * <p>The comparison display configuration of a KPI or gauge chart.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComparisonConfiguration">AWS
   * API Reference</a></p>
   */
  class ComparisonConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ComparisonConfiguration();
    AWS_QUICKSIGHT_API ComparisonConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComparisonConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The method of the comparison. Choose from the following options:</p> <ul>
     * <li> <p> <code>DIFFERENCE</code> </p> </li> <li> <p>
     * <code>PERCENT_DIFFERENCE</code> </p> </li> <li> <p> <code>PERCENT</code> </p>
     * </li> </ul>
     */
    inline const ComparisonMethod& GetComparisonMethod() const{ return m_comparisonMethod; }

    /**
     * <p>The method of the comparison. Choose from the following options:</p> <ul>
     * <li> <p> <code>DIFFERENCE</code> </p> </li> <li> <p>
     * <code>PERCENT_DIFFERENCE</code> </p> </li> <li> <p> <code>PERCENT</code> </p>
     * </li> </ul>
     */
    inline bool ComparisonMethodHasBeenSet() const { return m_comparisonMethodHasBeenSet; }

    /**
     * <p>The method of the comparison. Choose from the following options:</p> <ul>
     * <li> <p> <code>DIFFERENCE</code> </p> </li> <li> <p>
     * <code>PERCENT_DIFFERENCE</code> </p> </li> <li> <p> <code>PERCENT</code> </p>
     * </li> </ul>
     */
    inline void SetComparisonMethod(const ComparisonMethod& value) { m_comparisonMethodHasBeenSet = true; m_comparisonMethod = value; }

    /**
     * <p>The method of the comparison. Choose from the following options:</p> <ul>
     * <li> <p> <code>DIFFERENCE</code> </p> </li> <li> <p>
     * <code>PERCENT_DIFFERENCE</code> </p> </li> <li> <p> <code>PERCENT</code> </p>
     * </li> </ul>
     */
    inline void SetComparisonMethod(ComparisonMethod&& value) { m_comparisonMethodHasBeenSet = true; m_comparisonMethod = std::move(value); }

    /**
     * <p>The method of the comparison. Choose from the following options:</p> <ul>
     * <li> <p> <code>DIFFERENCE</code> </p> </li> <li> <p>
     * <code>PERCENT_DIFFERENCE</code> </p> </li> <li> <p> <code>PERCENT</code> </p>
     * </li> </ul>
     */
    inline ComparisonConfiguration& WithComparisonMethod(const ComparisonMethod& value) { SetComparisonMethod(value); return *this;}

    /**
     * <p>The method of the comparison. Choose from the following options:</p> <ul>
     * <li> <p> <code>DIFFERENCE</code> </p> </li> <li> <p>
     * <code>PERCENT_DIFFERENCE</code> </p> </li> <li> <p> <code>PERCENT</code> </p>
     * </li> </ul>
     */
    inline ComparisonConfiguration& WithComparisonMethod(ComparisonMethod&& value) { SetComparisonMethod(std::move(value)); return *this;}


    /**
     * <p>The format of the comparison.</p>
     */
    inline const ComparisonFormatConfiguration& GetComparisonFormat() const{ return m_comparisonFormat; }

    /**
     * <p>The format of the comparison.</p>
     */
    inline bool ComparisonFormatHasBeenSet() const { return m_comparisonFormatHasBeenSet; }

    /**
     * <p>The format of the comparison.</p>
     */
    inline void SetComparisonFormat(const ComparisonFormatConfiguration& value) { m_comparisonFormatHasBeenSet = true; m_comparisonFormat = value; }

    /**
     * <p>The format of the comparison.</p>
     */
    inline void SetComparisonFormat(ComparisonFormatConfiguration&& value) { m_comparisonFormatHasBeenSet = true; m_comparisonFormat = std::move(value); }

    /**
     * <p>The format of the comparison.</p>
     */
    inline ComparisonConfiguration& WithComparisonFormat(const ComparisonFormatConfiguration& value) { SetComparisonFormat(value); return *this;}

    /**
     * <p>The format of the comparison.</p>
     */
    inline ComparisonConfiguration& WithComparisonFormat(ComparisonFormatConfiguration&& value) { SetComparisonFormat(std::move(value)); return *this;}

  private:

    ComparisonMethod m_comparisonMethod;
    bool m_comparisonMethodHasBeenSet = false;

    ComparisonFormatConfiguration m_comparisonFormat;
    bool m_comparisonFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
