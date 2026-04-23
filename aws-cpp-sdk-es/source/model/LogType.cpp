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

#include <aws/es/model/LogType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace LogTypeMapper
      {

        static const int INDEX_SLOW_LOGS_HASH = HashingUtils::HashString("INDEX_SLOW_LOGS");
        static const int SEARCH_SLOW_LOGS_HASH = HashingUtils::HashString("SEARCH_SLOW_LOGS");
        static const int ES_APPLICATION_LOGS_HASH = HashingUtils::HashString("ES_APPLICATION_LOGS");


        LogType GetLogTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDEX_SLOW_LOGS_HASH)
          {
            return LogType::INDEX_SLOW_LOGS;
          }
          else if (hashCode == SEARCH_SLOW_LOGS_HASH)
          {
            return LogType::SEARCH_SLOW_LOGS;
          }
          else if (hashCode == ES_APPLICATION_LOGS_HASH)
          {
            return LogType::ES_APPLICATION_LOGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogType>(hashCode);
          }

          return LogType::NOT_SET;
        }

        Aws::String GetNameForLogType(LogType enumValue)
        {
          switch(enumValue)
          {
          case LogType::INDEX_SLOW_LOGS:
            return "INDEX_SLOW_LOGS";
          case LogType::SEARCH_SLOW_LOGS:
            return "SEARCH_SLOW_LOGS";
          case LogType::ES_APPLICATION_LOGS:
            return "ES_APPLICATION_LOGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
