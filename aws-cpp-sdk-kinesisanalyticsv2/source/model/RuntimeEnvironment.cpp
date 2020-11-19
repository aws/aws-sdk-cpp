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
        static const int FLINK_1_11_HASH = HashingUtils::HashString("FLINK-1_11");


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
          else if (hashCode == FLINK_1_11_HASH)
          {
            return RuntimeEnvironment::FLINK_1_11;
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
          case RuntimeEnvironment::FLINK_1_11:
            return "FLINK-1_11";
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
