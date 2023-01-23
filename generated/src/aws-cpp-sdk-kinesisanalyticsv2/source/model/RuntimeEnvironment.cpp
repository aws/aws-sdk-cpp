/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/RuntimeEnvironment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace RuntimeEnvironmentMapper
      {

        static const int SQL_1_0_HASH = HashingUtils::HashString("SQL-1_0");
        static const int FLINK_1_6_HASH = HashingUtils::HashString("FLINK-1_6");
        static const int FLINK_1_8_HASH = HashingUtils::HashString("FLINK-1_8");
        static const int ZEPPELIN_FLINK_1_0_HASH = HashingUtils::HashString("ZEPPELIN-FLINK-1_0");
        static const int FLINK_1_11_HASH = HashingUtils::HashString("FLINK-1_11");
        static const int FLINK_1_13_HASH = HashingUtils::HashString("FLINK-1_13");
        static const int ZEPPELIN_FLINK_2_0_HASH = HashingUtils::HashString("ZEPPELIN-FLINK-2_0");
        static const int FLINK_1_15_HASH = HashingUtils::HashString("FLINK-1_15");


        RuntimeEnvironment GetRuntimeEnvironmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SQL_1_0_HASH)
          {
            return RuntimeEnvironment::SQL_1_0;
          }
          else if (hashCode == FLINK_1_6_HASH)
          {
            return RuntimeEnvironment::FLINK_1_6;
          }
          else if (hashCode == FLINK_1_8_HASH)
          {
            return RuntimeEnvironment::FLINK_1_8;
          }
          else if (hashCode == ZEPPELIN_FLINK_1_0_HASH)
          {
            return RuntimeEnvironment::ZEPPELIN_FLINK_1_0;
          }
          else if (hashCode == FLINK_1_11_HASH)
          {
            return RuntimeEnvironment::FLINK_1_11;
          }
          else if (hashCode == FLINK_1_13_HASH)
          {
            return RuntimeEnvironment::FLINK_1_13;
          }
          else if (hashCode == ZEPPELIN_FLINK_2_0_HASH)
          {
            return RuntimeEnvironment::ZEPPELIN_FLINK_2_0;
          }
          else if (hashCode == FLINK_1_15_HASH)
          {
            return RuntimeEnvironment::FLINK_1_15;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuntimeEnvironment>(hashCode);
          }

          return RuntimeEnvironment::NOT_SET;
        }

        Aws::String GetNameForRuntimeEnvironment(RuntimeEnvironment enumValue)
        {
          switch(enumValue)
          {
          case RuntimeEnvironment::SQL_1_0:
            return "SQL-1_0";
          case RuntimeEnvironment::FLINK_1_6:
            return "FLINK-1_6";
          case RuntimeEnvironment::FLINK_1_8:
            return "FLINK-1_8";
          case RuntimeEnvironment::ZEPPELIN_FLINK_1_0:
            return "ZEPPELIN-FLINK-1_0";
          case RuntimeEnvironment::FLINK_1_11:
            return "FLINK-1_11";
          case RuntimeEnvironment::FLINK_1_13:
            return "FLINK-1_13";
          case RuntimeEnvironment::ZEPPELIN_FLINK_2_0:
            return "ZEPPELIN-FLINK-2_0";
          case RuntimeEnvironment::FLINK_1_15:
            return "FLINK-1_15";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuntimeEnvironmentMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
