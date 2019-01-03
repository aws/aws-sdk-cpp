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

#include <aws/athena/model/QueryExecutionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace QueryExecutionStateMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        QueryExecutionState GetQueryExecutionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return QueryExecutionState::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return QueryExecutionState::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return QueryExecutionState::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return QueryExecutionState::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return QueryExecutionState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryExecutionState>(hashCode);
          }

          return QueryExecutionState::NOT_SET;
        }

        Aws::String GetNameForQueryExecutionState(QueryExecutionState enumValue)
        {
          switch(enumValue)
          {
          case QueryExecutionState::QUEUED:
            return "QUEUED";
          case QueryExecutionState::RUNNING:
            return "RUNNING";
          case QueryExecutionState::SUCCEEDED:
            return "SUCCEEDED";
          case QueryExecutionState::FAILED:
            return "FAILED";
          case QueryExecutionState::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryExecutionStateMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
