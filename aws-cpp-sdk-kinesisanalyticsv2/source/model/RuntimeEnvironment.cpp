/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
