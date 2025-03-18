/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ColumnStatisticsType.h>
#include <aws/glue/model/BooleanColumnStatisticsData.h>
#include <aws/glue/model/DateColumnStatisticsData.h>
#include <aws/glue/model/DecimalColumnStatisticsData.h>
#include <aws/glue/model/DoubleColumnStatisticsData.h>
#include <aws/glue/model/LongColumnStatisticsData.h>
#include <aws/glue/model/StringColumnStatisticsData.h>
#include <aws/glue/model/BinaryColumnStatisticsData.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Contains the individual types of column statistics data. Only one data object
   * should be set and indicated by the <code>Type</code> attribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class ColumnStatisticsData
  {
  public:
    AWS_GLUE_API ColumnStatisticsData() = default;
    AWS_GLUE_API ColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of column statistics data.</p>
     */
    inline ColumnStatisticsType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ColumnStatisticsType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ColumnStatisticsData& WithType(ColumnStatisticsType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean column statistics data.</p>
     */
    inline const BooleanColumnStatisticsData& GetBooleanColumnStatisticsData() const { return m_booleanColumnStatisticsData; }
    inline bool BooleanColumnStatisticsDataHasBeenSet() const { return m_booleanColumnStatisticsDataHasBeenSet; }
    template<typename BooleanColumnStatisticsDataT = BooleanColumnStatisticsData>
    void SetBooleanColumnStatisticsData(BooleanColumnStatisticsDataT&& value) { m_booleanColumnStatisticsDataHasBeenSet = true; m_booleanColumnStatisticsData = std::forward<BooleanColumnStatisticsDataT>(value); }
    template<typename BooleanColumnStatisticsDataT = BooleanColumnStatisticsData>
    ColumnStatisticsData& WithBooleanColumnStatisticsData(BooleanColumnStatisticsDataT&& value) { SetBooleanColumnStatisticsData(std::forward<BooleanColumnStatisticsDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date column statistics data.</p>
     */
    inline const DateColumnStatisticsData& GetDateColumnStatisticsData() const { return m_dateColumnStatisticsData; }
    inline bool DateColumnStatisticsDataHasBeenSet() const { return m_dateColumnStatisticsDataHasBeenSet; }
    template<typename DateColumnStatisticsDataT = DateColumnStatisticsData>
    void SetDateColumnStatisticsData(DateColumnStatisticsDataT&& value) { m_dateColumnStatisticsDataHasBeenSet = true; m_dateColumnStatisticsData = std::forward<DateColumnStatisticsDataT>(value); }
    template<typename DateColumnStatisticsDataT = DateColumnStatisticsData>
    ColumnStatisticsData& WithDateColumnStatisticsData(DateColumnStatisticsDataT&& value) { SetDateColumnStatisticsData(std::forward<DateColumnStatisticsDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Decimal column statistics data. UnscaledValues within are Base64-encoded
     * binary objects storing big-endian, two's complement representations of the
     * decimal's unscaled value. </p>
     */
    inline const DecimalColumnStatisticsData& GetDecimalColumnStatisticsData() const { return m_decimalColumnStatisticsData; }
    inline bool DecimalColumnStatisticsDataHasBeenSet() const { return m_decimalColumnStatisticsDataHasBeenSet; }
    template<typename DecimalColumnStatisticsDataT = DecimalColumnStatisticsData>
    void SetDecimalColumnStatisticsData(DecimalColumnStatisticsDataT&& value) { m_decimalColumnStatisticsDataHasBeenSet = true; m_decimalColumnStatisticsData = std::forward<DecimalColumnStatisticsDataT>(value); }
    template<typename DecimalColumnStatisticsDataT = DecimalColumnStatisticsData>
    ColumnStatisticsData& WithDecimalColumnStatisticsData(DecimalColumnStatisticsDataT&& value) { SetDecimalColumnStatisticsData(std::forward<DecimalColumnStatisticsDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Double column statistics data.</p>
     */
    inline const DoubleColumnStatisticsData& GetDoubleColumnStatisticsData() const { return m_doubleColumnStatisticsData; }
    inline bool DoubleColumnStatisticsDataHasBeenSet() const { return m_doubleColumnStatisticsDataHasBeenSet; }
    template<typename DoubleColumnStatisticsDataT = DoubleColumnStatisticsData>
    void SetDoubleColumnStatisticsData(DoubleColumnStatisticsDataT&& value) { m_doubleColumnStatisticsDataHasBeenSet = true; m_doubleColumnStatisticsData = std::forward<DoubleColumnStatisticsDataT>(value); }
    template<typename DoubleColumnStatisticsDataT = DoubleColumnStatisticsData>
    ColumnStatisticsData& WithDoubleColumnStatisticsData(DoubleColumnStatisticsDataT&& value) { SetDoubleColumnStatisticsData(std::forward<DoubleColumnStatisticsDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Long column statistics data.</p>
     */
    inline const LongColumnStatisticsData& GetLongColumnStatisticsData() const { return m_longColumnStatisticsData; }
    inline bool LongColumnStatisticsDataHasBeenSet() const { return m_longColumnStatisticsDataHasBeenSet; }
    template<typename LongColumnStatisticsDataT = LongColumnStatisticsData>
    void SetLongColumnStatisticsData(LongColumnStatisticsDataT&& value) { m_longColumnStatisticsDataHasBeenSet = true; m_longColumnStatisticsData = std::forward<LongColumnStatisticsDataT>(value); }
    template<typename LongColumnStatisticsDataT = LongColumnStatisticsData>
    ColumnStatisticsData& WithLongColumnStatisticsData(LongColumnStatisticsDataT&& value) { SetLongColumnStatisticsData(std::forward<LongColumnStatisticsDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>String column statistics data.</p>
     */
    inline const StringColumnStatisticsData& GetStringColumnStatisticsData() const { return m_stringColumnStatisticsData; }
    inline bool StringColumnStatisticsDataHasBeenSet() const { return m_stringColumnStatisticsDataHasBeenSet; }
    template<typename StringColumnStatisticsDataT = StringColumnStatisticsData>
    void SetStringColumnStatisticsData(StringColumnStatisticsDataT&& value) { m_stringColumnStatisticsDataHasBeenSet = true; m_stringColumnStatisticsData = std::forward<StringColumnStatisticsDataT>(value); }
    template<typename StringColumnStatisticsDataT = StringColumnStatisticsData>
    ColumnStatisticsData& WithStringColumnStatisticsData(StringColumnStatisticsDataT&& value) { SetStringColumnStatisticsData(std::forward<StringColumnStatisticsDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Binary column statistics data.</p>
     */
    inline const BinaryColumnStatisticsData& GetBinaryColumnStatisticsData() const { return m_binaryColumnStatisticsData; }
    inline bool BinaryColumnStatisticsDataHasBeenSet() const { return m_binaryColumnStatisticsDataHasBeenSet; }
    template<typename BinaryColumnStatisticsDataT = BinaryColumnStatisticsData>
    void SetBinaryColumnStatisticsData(BinaryColumnStatisticsDataT&& value) { m_binaryColumnStatisticsDataHasBeenSet = true; m_binaryColumnStatisticsData = std::forward<BinaryColumnStatisticsDataT>(value); }
    template<typename BinaryColumnStatisticsDataT = BinaryColumnStatisticsData>
    ColumnStatisticsData& WithBinaryColumnStatisticsData(BinaryColumnStatisticsDataT&& value) { SetBinaryColumnStatisticsData(std::forward<BinaryColumnStatisticsDataT>(value)); return *this;}
    ///@}
  private:

    ColumnStatisticsType m_type{ColumnStatisticsType::NOT_SET};
    bool m_typeHasBeenSet = false;

    BooleanColumnStatisticsData m_booleanColumnStatisticsData;
    bool m_booleanColumnStatisticsDataHasBeenSet = false;

    DateColumnStatisticsData m_dateColumnStatisticsData;
    bool m_dateColumnStatisticsDataHasBeenSet = false;

    DecimalColumnStatisticsData m_decimalColumnStatisticsData;
    bool m_decimalColumnStatisticsDataHasBeenSet = false;

    DoubleColumnStatisticsData m_doubleColumnStatisticsData;
    bool m_doubleColumnStatisticsDataHasBeenSet = false;

    LongColumnStatisticsData m_longColumnStatisticsData;
    bool m_longColumnStatisticsDataHasBeenSet = false;

    StringColumnStatisticsData m_stringColumnStatisticsData;
    bool m_stringColumnStatisticsDataHasBeenSet = false;

    BinaryColumnStatisticsData m_binaryColumnStatisticsData;
    bool m_binaryColumnStatisticsDataHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
