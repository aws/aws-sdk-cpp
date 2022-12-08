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
    AWS_GLUE_API ColumnStatisticsData();
    AWS_GLUE_API ColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of column statistics data.</p>
     */
    inline const ColumnStatisticsType& GetType() const{ return m_type; }

    /**
     * <p>The type of column statistics data.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of column statistics data.</p>
     */
    inline void SetType(const ColumnStatisticsType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of column statistics data.</p>
     */
    inline void SetType(ColumnStatisticsType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of column statistics data.</p>
     */
    inline ColumnStatisticsData& WithType(const ColumnStatisticsType& value) { SetType(value); return *this;}

    /**
     * <p>The type of column statistics data.</p>
     */
    inline ColumnStatisticsData& WithType(ColumnStatisticsType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Boolean column statistics data.</p>
     */
    inline const BooleanColumnStatisticsData& GetBooleanColumnStatisticsData() const{ return m_booleanColumnStatisticsData; }

    /**
     * <p>Boolean column statistics data.</p>
     */
    inline bool BooleanColumnStatisticsDataHasBeenSet() const { return m_booleanColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Boolean column statistics data.</p>
     */
    inline void SetBooleanColumnStatisticsData(const BooleanColumnStatisticsData& value) { m_booleanColumnStatisticsDataHasBeenSet = true; m_booleanColumnStatisticsData = value; }

    /**
     * <p>Boolean column statistics data.</p>
     */
    inline void SetBooleanColumnStatisticsData(BooleanColumnStatisticsData&& value) { m_booleanColumnStatisticsDataHasBeenSet = true; m_booleanColumnStatisticsData = std::move(value); }

    /**
     * <p>Boolean column statistics data.</p>
     */
    inline ColumnStatisticsData& WithBooleanColumnStatisticsData(const BooleanColumnStatisticsData& value) { SetBooleanColumnStatisticsData(value); return *this;}

    /**
     * <p>Boolean column statistics data.</p>
     */
    inline ColumnStatisticsData& WithBooleanColumnStatisticsData(BooleanColumnStatisticsData&& value) { SetBooleanColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Date column statistics data.</p>
     */
    inline const DateColumnStatisticsData& GetDateColumnStatisticsData() const{ return m_dateColumnStatisticsData; }

    /**
     * <p>Date column statistics data.</p>
     */
    inline bool DateColumnStatisticsDataHasBeenSet() const { return m_dateColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Date column statistics data.</p>
     */
    inline void SetDateColumnStatisticsData(const DateColumnStatisticsData& value) { m_dateColumnStatisticsDataHasBeenSet = true; m_dateColumnStatisticsData = value; }

    /**
     * <p>Date column statistics data.</p>
     */
    inline void SetDateColumnStatisticsData(DateColumnStatisticsData&& value) { m_dateColumnStatisticsDataHasBeenSet = true; m_dateColumnStatisticsData = std::move(value); }

    /**
     * <p>Date column statistics data.</p>
     */
    inline ColumnStatisticsData& WithDateColumnStatisticsData(const DateColumnStatisticsData& value) { SetDateColumnStatisticsData(value); return *this;}

    /**
     * <p>Date column statistics data.</p>
     */
    inline ColumnStatisticsData& WithDateColumnStatisticsData(DateColumnStatisticsData&& value) { SetDateColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Decimal column statistics data.</p>
     */
    inline const DecimalColumnStatisticsData& GetDecimalColumnStatisticsData() const{ return m_decimalColumnStatisticsData; }

    /**
     * <p>Decimal column statistics data.</p>
     */
    inline bool DecimalColumnStatisticsDataHasBeenSet() const { return m_decimalColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Decimal column statistics data.</p>
     */
    inline void SetDecimalColumnStatisticsData(const DecimalColumnStatisticsData& value) { m_decimalColumnStatisticsDataHasBeenSet = true; m_decimalColumnStatisticsData = value; }

    /**
     * <p>Decimal column statistics data.</p>
     */
    inline void SetDecimalColumnStatisticsData(DecimalColumnStatisticsData&& value) { m_decimalColumnStatisticsDataHasBeenSet = true; m_decimalColumnStatisticsData = std::move(value); }

    /**
     * <p>Decimal column statistics data.</p>
     */
    inline ColumnStatisticsData& WithDecimalColumnStatisticsData(const DecimalColumnStatisticsData& value) { SetDecimalColumnStatisticsData(value); return *this;}

    /**
     * <p>Decimal column statistics data.</p>
     */
    inline ColumnStatisticsData& WithDecimalColumnStatisticsData(DecimalColumnStatisticsData&& value) { SetDecimalColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Double column statistics data.</p>
     */
    inline const DoubleColumnStatisticsData& GetDoubleColumnStatisticsData() const{ return m_doubleColumnStatisticsData; }

    /**
     * <p>Double column statistics data.</p>
     */
    inline bool DoubleColumnStatisticsDataHasBeenSet() const { return m_doubleColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Double column statistics data.</p>
     */
    inline void SetDoubleColumnStatisticsData(const DoubleColumnStatisticsData& value) { m_doubleColumnStatisticsDataHasBeenSet = true; m_doubleColumnStatisticsData = value; }

    /**
     * <p>Double column statistics data.</p>
     */
    inline void SetDoubleColumnStatisticsData(DoubleColumnStatisticsData&& value) { m_doubleColumnStatisticsDataHasBeenSet = true; m_doubleColumnStatisticsData = std::move(value); }

    /**
     * <p>Double column statistics data.</p>
     */
    inline ColumnStatisticsData& WithDoubleColumnStatisticsData(const DoubleColumnStatisticsData& value) { SetDoubleColumnStatisticsData(value); return *this;}

    /**
     * <p>Double column statistics data.</p>
     */
    inline ColumnStatisticsData& WithDoubleColumnStatisticsData(DoubleColumnStatisticsData&& value) { SetDoubleColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Long column statistics data.</p>
     */
    inline const LongColumnStatisticsData& GetLongColumnStatisticsData() const{ return m_longColumnStatisticsData; }

    /**
     * <p>Long column statistics data.</p>
     */
    inline bool LongColumnStatisticsDataHasBeenSet() const { return m_longColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Long column statistics data.</p>
     */
    inline void SetLongColumnStatisticsData(const LongColumnStatisticsData& value) { m_longColumnStatisticsDataHasBeenSet = true; m_longColumnStatisticsData = value; }

    /**
     * <p>Long column statistics data.</p>
     */
    inline void SetLongColumnStatisticsData(LongColumnStatisticsData&& value) { m_longColumnStatisticsDataHasBeenSet = true; m_longColumnStatisticsData = std::move(value); }

    /**
     * <p>Long column statistics data.</p>
     */
    inline ColumnStatisticsData& WithLongColumnStatisticsData(const LongColumnStatisticsData& value) { SetLongColumnStatisticsData(value); return *this;}

    /**
     * <p>Long column statistics data.</p>
     */
    inline ColumnStatisticsData& WithLongColumnStatisticsData(LongColumnStatisticsData&& value) { SetLongColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>String column statistics data.</p>
     */
    inline const StringColumnStatisticsData& GetStringColumnStatisticsData() const{ return m_stringColumnStatisticsData; }

    /**
     * <p>String column statistics data.</p>
     */
    inline bool StringColumnStatisticsDataHasBeenSet() const { return m_stringColumnStatisticsDataHasBeenSet; }

    /**
     * <p>String column statistics data.</p>
     */
    inline void SetStringColumnStatisticsData(const StringColumnStatisticsData& value) { m_stringColumnStatisticsDataHasBeenSet = true; m_stringColumnStatisticsData = value; }

    /**
     * <p>String column statistics data.</p>
     */
    inline void SetStringColumnStatisticsData(StringColumnStatisticsData&& value) { m_stringColumnStatisticsDataHasBeenSet = true; m_stringColumnStatisticsData = std::move(value); }

    /**
     * <p>String column statistics data.</p>
     */
    inline ColumnStatisticsData& WithStringColumnStatisticsData(const StringColumnStatisticsData& value) { SetStringColumnStatisticsData(value); return *this;}

    /**
     * <p>String column statistics data.</p>
     */
    inline ColumnStatisticsData& WithStringColumnStatisticsData(StringColumnStatisticsData&& value) { SetStringColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Binary column statistics data.</p>
     */
    inline const BinaryColumnStatisticsData& GetBinaryColumnStatisticsData() const{ return m_binaryColumnStatisticsData; }

    /**
     * <p>Binary column statistics data.</p>
     */
    inline bool BinaryColumnStatisticsDataHasBeenSet() const { return m_binaryColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Binary column statistics data.</p>
     */
    inline void SetBinaryColumnStatisticsData(const BinaryColumnStatisticsData& value) { m_binaryColumnStatisticsDataHasBeenSet = true; m_binaryColumnStatisticsData = value; }

    /**
     * <p>Binary column statistics data.</p>
     */
    inline void SetBinaryColumnStatisticsData(BinaryColumnStatisticsData&& value) { m_binaryColumnStatisticsDataHasBeenSet = true; m_binaryColumnStatisticsData = std::move(value); }

    /**
     * <p>Binary column statistics data.</p>
     */
    inline ColumnStatisticsData& WithBinaryColumnStatisticsData(const BinaryColumnStatisticsData& value) { SetBinaryColumnStatisticsData(value); return *this;}

    /**
     * <p>Binary column statistics data.</p>
     */
    inline ColumnStatisticsData& WithBinaryColumnStatisticsData(BinaryColumnStatisticsData&& value) { SetBinaryColumnStatisticsData(std::move(value)); return *this;}

  private:

    ColumnStatisticsType m_type;
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
