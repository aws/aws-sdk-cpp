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

        static const int YYYYMMDD_HASH = HashingUtils::HashString("YYYYMMDD");
        static const int YYYYMMDDHH_HASH = HashingUtils::HashString("YYYYMMDDHH");
        static const int YYYYMM_HASH = HashingUtils::HashString("YYYYMM");
        static const int MMYYYYDD_HASH = HashingUtils::HashString("MMYYYYDD");
        static const int DDMMYYYY_HASH = HashingUtils::HashString("DDMMYYYY");


        DatePartitionSequenceValue GetDatePartitionSequenceValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
