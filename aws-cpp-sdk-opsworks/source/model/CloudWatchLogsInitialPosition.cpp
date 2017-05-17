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

#include <aws/opsworks/model/CloudWatchLogsInitialPosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace CloudWatchLogsInitialPositionMapper
      {

        static const int start_of_file_HASH = HashingUtils::HashString("start_of_file");
        static const int end_of_file_HASH = HashingUtils::HashString("end_of_file");


        CloudWatchLogsInitialPosition GetCloudWatchLogsInitialPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == start_of_file_HASH)
          {
            return CloudWatchLogsInitialPosition::start_of_file;
          }
          else if (hashCode == end_of_file_HASH)
          {
            return CloudWatchLogsInitialPosition::end_of_file;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchLogsInitialPosition>(hashCode);
          }

          return CloudWatchLogsInitialPosition::NOT_SET;
        }

        Aws::String GetNameForCloudWatchLogsInitialPosition(CloudWatchLogsInitialPosition enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchLogsInitialPosition::start_of_file:
            return "start_of_file";
          case CloudWatchLogsInitialPosition::end_of_file:
            return "end_of_file";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CloudWatchLogsInitialPositionMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
