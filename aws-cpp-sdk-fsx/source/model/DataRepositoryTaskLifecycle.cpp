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

#include <aws/fsx/model/DataRepositoryTaskLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace DataRepositoryTaskLifecycleMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int EXECUTING_HASH = HashingUtils::HashString("EXECUTING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int CANCELING_HASH = HashingUtils::HashString("CANCELING");


        DataRepositoryTaskLifecycle GetDataRepositoryTaskLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DataRepositoryTaskLifecycle::PENDING;
          }
          else if (hashCode == EXECUTING_HASH)
          {
            return DataRepositoryTaskLifecycle::EXECUTING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataRepositoryTaskLifecycle::FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DataRepositoryTaskLifecycle::SUCCEEDED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return DataRepositoryTaskLifecycle::CANCELED;
          }
          else if (hashCode == CANCELING_HASH)
          {
            return DataRepositoryTaskLifecycle::CANCELING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataRepositoryTaskLifecycle>(hashCode);
          }

          return DataRepositoryTaskLifecycle::NOT_SET;
        }

        Aws::String GetNameForDataRepositoryTaskLifecycle(DataRepositoryTaskLifecycle enumValue)
        {
          switch(enumValue)
          {
          case DataRepositoryTaskLifecycle::PENDING:
            return "PENDING";
          case DataRepositoryTaskLifecycle::EXECUTING:
            return "EXECUTING";
          case DataRepositoryTaskLifecycle::FAILED:
            return "FAILED";
          case DataRepositoryTaskLifecycle::SUCCEEDED:
            return "SUCCEEDED";
          case DataRepositoryTaskLifecycle::CANCELED:
            return "CANCELED";
          case DataRepositoryTaskLifecycle::CANCELING:
            return "CANCELING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataRepositoryTaskLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
