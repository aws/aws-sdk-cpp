/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DatePartitionSequenceValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace DatePartitionSequenceValueMapper
      {

        static constexpr uint32_t YYYYMMDD_HASH = ConstExprHashingUtils::HashString("YYYYMMDD");
        static constexpr uint32_t YYYYMMDDHH_HASH = ConstExprHashingUtils::HashString("YYYYMMDDHH");
        static constexpr uint32_t YYYYMM_HASH = ConstExprHashingUtils::HashString("YYYYMM");
        static constexpr uint32_t MMYYYYDD_HASH = ConstExprHashingUtils::HashString("MMYYYYDD");
        static constexpr uint32_t DDMMYYYY_HASH = ConstExprHashingUtils::HashString("DDMMYYYY");


        DatePartitionSequenceValue GetDatePartitionSequenceValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == YYYYMMDD_HASH)
          {
            return DatePartitionSequenceValue::YYYYMMDD;
          }
          else if (hashCode == YYYYMMDDHH_HASH)
          {
            return DatePartitionSequenceValue::YYYYMMDDHH;
          }
          else if (hashCode == YYYYMM_HASH)
          {
            return DatePartitionSequenceValue::YYYYMM;
          }
          else if (hashCode == MMYYYYDD_HASH)
          {
            return DatePartitionSequenceValue::MMYYYYDD;
          }
          else if (hashCode == DDMMYYYY_HASH)
          {
            return DatePartitionSequenceValue::DDMMYYYY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DatePartitionSequenceValue>(hashCode);
          }

          return DatePartitionSequenceValue::NOT_SET;
        }

        Aws::String GetNameForDatePartitionSequenceValue(DatePartitionSequenceValue enumValue)
        {
          switch(enumValue)
          {
          case DatePartitionSequenceValue::NOT_SET:
            return {};
          case DatePartitionSequenceValue::YYYYMMDD:
            return "YYYYMMDD";
          case DatePartitionSequenceValue::YYYYMMDDHH:
            return "YYYYMMDDHH";
          case DatePartitionSequenceValue::YYYYMM:
            return "YYYYMM";
          case DatePartitionSequenceValue::MMYYYYDD:
            return "MMYYYYDD";
          case DatePartitionSequenceValue::DDMMYYYY:
            return "DDMMYYYY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DatePartitionSequenceValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
