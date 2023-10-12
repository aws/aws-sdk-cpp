/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DataQualityMetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace DataQualityMetricTypeMapper
      {

        static constexpr uint32_t COLUMN_COMPLETENESS_HASH = ConstExprHashingUtils::HashString("COLUMN_COMPLETENESS");
        static constexpr uint32_t DIMENSION_UNIQUENESS_HASH = ConstExprHashingUtils::HashString("DIMENSION_UNIQUENESS");
        static constexpr uint32_t TIME_SERIES_COUNT_HASH = ConstExprHashingUtils::HashString("TIME_SERIES_COUNT");
        static constexpr uint32_t ROWS_PROCESSED_HASH = ConstExprHashingUtils::HashString("ROWS_PROCESSED");
        static constexpr uint32_t ROWS_PARTIAL_COMPLIANCE_HASH = ConstExprHashingUtils::HashString("ROWS_PARTIAL_COMPLIANCE");
        static constexpr uint32_t INVALID_ROWS_COMPLIANCE_HASH = ConstExprHashingUtils::HashString("INVALID_ROWS_COMPLIANCE");
        static constexpr uint32_t BACKTEST_TRAINING_DATA_START_TIME_STAMP_HASH = ConstExprHashingUtils::HashString("BACKTEST_TRAINING_DATA_START_TIME_STAMP");
        static constexpr uint32_t BACKTEST_TRAINING_DATA_END_TIME_STAMP_HASH = ConstExprHashingUtils::HashString("BACKTEST_TRAINING_DATA_END_TIME_STAMP");
        static constexpr uint32_t BACKTEST_INFERENCE_DATA_START_TIME_STAMP_HASH = ConstExprHashingUtils::HashString("BACKTEST_INFERENCE_DATA_START_TIME_STAMP");
        static constexpr uint32_t BACKTEST_INFERENCE_DATA_END_TIME_STAMP_HASH = ConstExprHashingUtils::HashString("BACKTEST_INFERENCE_DATA_END_TIME_STAMP");


        DataQualityMetricType GetDataQualityMetricTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLUMN_COMPLETENESS_HASH)
          {
            return DataQualityMetricType::COLUMN_COMPLETENESS;
          }
          else if (hashCode == DIMENSION_UNIQUENESS_HASH)
          {
            return DataQualityMetricType::DIMENSION_UNIQUENESS;
          }
          else if (hashCode == TIME_SERIES_COUNT_HASH)
          {
            return DataQualityMetricType::TIME_SERIES_COUNT;
          }
          else if (hashCode == ROWS_PROCESSED_HASH)
          {
            return DataQualityMetricType::ROWS_PROCESSED;
          }
          else if (hashCode == ROWS_PARTIAL_COMPLIANCE_HASH)
          {
            return DataQualityMetricType::ROWS_PARTIAL_COMPLIANCE;
          }
          else if (hashCode == INVALID_ROWS_COMPLIANCE_HASH)
          {
            return DataQualityMetricType::INVALID_ROWS_COMPLIANCE;
          }
          else if (hashCode == BACKTEST_TRAINING_DATA_START_TIME_STAMP_HASH)
          {
            return DataQualityMetricType::BACKTEST_TRAINING_DATA_START_TIME_STAMP;
          }
          else if (hashCode == BACKTEST_TRAINING_DATA_END_TIME_STAMP_HASH)
          {
            return DataQualityMetricType::BACKTEST_TRAINING_DATA_END_TIME_STAMP;
          }
          else if (hashCode == BACKTEST_INFERENCE_DATA_START_TIME_STAMP_HASH)
          {
            return DataQualityMetricType::BACKTEST_INFERENCE_DATA_START_TIME_STAMP;
          }
          else if (hashCode == BACKTEST_INFERENCE_DATA_END_TIME_STAMP_HASH)
          {
            return DataQualityMetricType::BACKTEST_INFERENCE_DATA_END_TIME_STAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataQualityMetricType>(hashCode);
          }

          return DataQualityMetricType::NOT_SET;
        }

        Aws::String GetNameForDataQualityMetricType(DataQualityMetricType enumValue)
        {
          switch(enumValue)
          {
          case DataQualityMetricType::NOT_SET:
            return {};
          case DataQualityMetricType::COLUMN_COMPLETENESS:
            return "COLUMN_COMPLETENESS";
          case DataQualityMetricType::DIMENSION_UNIQUENESS:
            return "DIMENSION_UNIQUENESS";
          case DataQualityMetricType::TIME_SERIES_COUNT:
            return "TIME_SERIES_COUNT";
          case DataQualityMetricType::ROWS_PROCESSED:
            return "ROWS_PROCESSED";
          case DataQualityMetricType::ROWS_PARTIAL_COMPLIANCE:
            return "ROWS_PARTIAL_COMPLIANCE";
          case DataQualityMetricType::INVALID_ROWS_COMPLIANCE:
            return "INVALID_ROWS_COMPLIANCE";
          case DataQualityMetricType::BACKTEST_TRAINING_DATA_START_TIME_STAMP:
            return "BACKTEST_TRAINING_DATA_START_TIME_STAMP";
          case DataQualityMetricType::BACKTEST_TRAINING_DATA_END_TIME_STAMP:
            return "BACKTEST_TRAINING_DATA_END_TIME_STAMP";
          case DataQualityMetricType::BACKTEST_INFERENCE_DATA_START_TIME_STAMP:
            return "BACKTEST_INFERENCE_DATA_START_TIME_STAMP";
          case DataQualityMetricType::BACKTEST_INFERENCE_DATA_END_TIME_STAMP:
            return "BACKTEST_INFERENCE_DATA_END_TIME_STAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataQualityMetricTypeMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
