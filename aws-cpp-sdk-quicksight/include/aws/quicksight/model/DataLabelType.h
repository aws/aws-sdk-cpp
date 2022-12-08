/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FieldLabelType.h>
#include <aws/quicksight/model/DataPathLabelType.h>
#include <aws/quicksight/model/RangeEndsLabelType.h>
#include <aws/quicksight/model/MinimumLabelType.h>
#include <aws/quicksight/model/MaximumLabelType.h>
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
   * <p>The option that determines the data label type.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataLabelType">AWS
   * API Reference</a></p>
   */
  class DataLabelType
  {
  public:
    AWS_QUICKSIGHT_API DataLabelType();
    AWS_QUICKSIGHT_API DataLabelType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataLabelType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the label configuration for the entire field.</p>
     */
    inline const FieldLabelType& GetFieldLabelType() const{ return m_fieldLabelType; }

    /**
     * <p>Determines the label configuration for the entire field.</p>
     */
    inline bool FieldLabelTypeHasBeenSet() const { return m_fieldLabelTypeHasBeenSet; }

    /**
     * <p>Determines the label configuration for the entire field.</p>
     */
    inline void SetFieldLabelType(const FieldLabelType& value) { m_fieldLabelTypeHasBeenSet = true; m_fieldLabelType = value; }

    /**
     * <p>Determines the label configuration for the entire field.</p>
     */
    inline void SetFieldLabelType(FieldLabelType&& value) { m_fieldLabelTypeHasBeenSet = true; m_fieldLabelType = std::move(value); }

    /**
     * <p>Determines the label configuration for the entire field.</p>
     */
    inline DataLabelType& WithFieldLabelType(const FieldLabelType& value) { SetFieldLabelType(value); return *this;}

    /**
     * <p>Determines the label configuration for the entire field.</p>
     */
    inline DataLabelType& WithFieldLabelType(FieldLabelType&& value) { SetFieldLabelType(std::move(value)); return *this;}


    /**
     * <p>The option that specifies individual data values for labels.</p>
     */
    inline const DataPathLabelType& GetDataPathLabelType() const{ return m_dataPathLabelType; }

    /**
     * <p>The option that specifies individual data values for labels.</p>
     */
    inline bool DataPathLabelTypeHasBeenSet() const { return m_dataPathLabelTypeHasBeenSet; }

    /**
     * <p>The option that specifies individual data values for labels.</p>
     */
    inline void SetDataPathLabelType(const DataPathLabelType& value) { m_dataPathLabelTypeHasBeenSet = true; m_dataPathLabelType = value; }

    /**
     * <p>The option that specifies individual data values for labels.</p>
     */
    inline void SetDataPathLabelType(DataPathLabelType&& value) { m_dataPathLabelTypeHasBeenSet = true; m_dataPathLabelType = std::move(value); }

    /**
     * <p>The option that specifies individual data values for labels.</p>
     */
    inline DataLabelType& WithDataPathLabelType(const DataPathLabelType& value) { SetDataPathLabelType(value); return *this;}

    /**
     * <p>The option that specifies individual data values for labels.</p>
     */
    inline DataLabelType& WithDataPathLabelType(DataPathLabelType&& value) { SetDataPathLabelType(std::move(value)); return *this;}


    /**
     * <p>Determines the label configuration for range end value in a visual.</p>
     */
    inline const RangeEndsLabelType& GetRangeEndsLabelType() const{ return m_rangeEndsLabelType; }

    /**
     * <p>Determines the label configuration for range end value in a visual.</p>
     */
    inline bool RangeEndsLabelTypeHasBeenSet() const { return m_rangeEndsLabelTypeHasBeenSet; }

    /**
     * <p>Determines the label configuration for range end value in a visual.</p>
     */
    inline void SetRangeEndsLabelType(const RangeEndsLabelType& value) { m_rangeEndsLabelTypeHasBeenSet = true; m_rangeEndsLabelType = value; }

    /**
     * <p>Determines the label configuration for range end value in a visual.</p>
     */
    inline void SetRangeEndsLabelType(RangeEndsLabelType&& value) { m_rangeEndsLabelTypeHasBeenSet = true; m_rangeEndsLabelType = std::move(value); }

    /**
     * <p>Determines the label configuration for range end value in a visual.</p>
     */
    inline DataLabelType& WithRangeEndsLabelType(const RangeEndsLabelType& value) { SetRangeEndsLabelType(value); return *this;}

    /**
     * <p>Determines the label configuration for range end value in a visual.</p>
     */
    inline DataLabelType& WithRangeEndsLabelType(RangeEndsLabelType&& value) { SetRangeEndsLabelType(std::move(value)); return *this;}


    /**
     * <p>Determines the label configuration for the minimum value in a visual.</p>
     */
    inline const MinimumLabelType& GetMinimumLabelType() const{ return m_minimumLabelType; }

    /**
     * <p>Determines the label configuration for the minimum value in a visual.</p>
     */
    inline bool MinimumLabelTypeHasBeenSet() const { return m_minimumLabelTypeHasBeenSet; }

    /**
     * <p>Determines the label configuration for the minimum value in a visual.</p>
     */
    inline void SetMinimumLabelType(const MinimumLabelType& value) { m_minimumLabelTypeHasBeenSet = true; m_minimumLabelType = value; }

    /**
     * <p>Determines the label configuration for the minimum value in a visual.</p>
     */
    inline void SetMinimumLabelType(MinimumLabelType&& value) { m_minimumLabelTypeHasBeenSet = true; m_minimumLabelType = std::move(value); }

    /**
     * <p>Determines the label configuration for the minimum value in a visual.</p>
     */
    inline DataLabelType& WithMinimumLabelType(const MinimumLabelType& value) { SetMinimumLabelType(value); return *this;}

    /**
     * <p>Determines the label configuration for the minimum value in a visual.</p>
     */
    inline DataLabelType& WithMinimumLabelType(MinimumLabelType&& value) { SetMinimumLabelType(std::move(value)); return *this;}


    /**
     * <p>Determines the label configuration for the maximum value in a visual.</p>
     */
    inline const MaximumLabelType& GetMaximumLabelType() const{ return m_maximumLabelType; }

    /**
     * <p>Determines the label configuration for the maximum value in a visual.</p>
     */
    inline bool MaximumLabelTypeHasBeenSet() const { return m_maximumLabelTypeHasBeenSet; }

    /**
     * <p>Determines the label configuration for the maximum value in a visual.</p>
     */
    inline void SetMaximumLabelType(const MaximumLabelType& value) { m_maximumLabelTypeHasBeenSet = true; m_maximumLabelType = value; }

    /**
     * <p>Determines the label configuration for the maximum value in a visual.</p>
     */
    inline void SetMaximumLabelType(MaximumLabelType&& value) { m_maximumLabelTypeHasBeenSet = true; m_maximumLabelType = std::move(value); }

    /**
     * <p>Determines the label configuration for the maximum value in a visual.</p>
     */
    inline DataLabelType& WithMaximumLabelType(const MaximumLabelType& value) { SetMaximumLabelType(value); return *this;}

    /**
     * <p>Determines the label configuration for the maximum value in a visual.</p>
     */
    inline DataLabelType& WithMaximumLabelType(MaximumLabelType&& value) { SetMaximumLabelType(std::move(value)); return *this;}

  private:

    FieldLabelType m_fieldLabelType;
    bool m_fieldLabelTypeHasBeenSet = false;

    DataPathLabelType m_dataPathLabelType;
    bool m_dataPathLabelTypeHasBeenSet = false;

    RangeEndsLabelType m_rangeEndsLabelType;
    bool m_rangeEndsLabelTypeHasBeenSet = false;

    MinimumLabelType m_minimumLabelType;
    bool m_minimumLabelTypeHasBeenSet = false;

    MaximumLabelType m_maximumLabelType;
    bool m_maximumLabelTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
