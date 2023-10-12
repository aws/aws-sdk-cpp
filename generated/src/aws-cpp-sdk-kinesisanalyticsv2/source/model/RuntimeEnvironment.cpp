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

        static constexpr uint32_t SQL_1_0_HASH = ConstExprHashingUtils::HashString("SQL-1_0");
        static constexpr uint32_t FLINK_1_6_HASH = ConstExprHashingUtils::HashString("FLINK-1_6");
        static constexpr uint32_t FLINK_1_8_HASH = ConstExprHashingUtils::HashString("FLINK-1_8");
        static constexpr uint32_t ZEPPELIN_FLINK_1_0_HASH = ConstExprHashingUtils::HashString("ZEPPELIN-FLINK-1_0");
        static constexpr uint32_t FLINK_1_11_HASH = ConstExprHashingUtils::HashString("FLINK-1_11");
        static constexpr uint32_t FLINK_1_13_HASH = ConstExprHashingUtils::HashString("FLINK-1_13");
        static constexpr uint32_t ZEPPELIN_FLINK_2_0_HASH = ConstExprHashingUtils::HashString("ZEPPELIN-FLINK-2_0");
        static constexpr uint32_t FLINK_1_15_HASH = ConstExprHashingUtils::HashString("FLINK-1_15");
        static constexpr uint32_t ZEPPELIN_FLINK_3_0_HASH = ConstExprHashingUtils::HashString("ZEPPELIN-FLINK-3_0");


        RuntimeEnvironment GetRuntimeEnvironmentForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == ZEPPELIN_FLINK_3_0_HASH)
          {
            return RuntimeEnvironment::ZEPPELIN_FLINK_3_0;
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
          case RuntimeEnvironment::NOT_SET:
            return {};
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
          case RuntimeEnvironment::ZEPPELIN_FLINK_3_0:
            return "ZEPPELIN-FLINK-3_0";
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
