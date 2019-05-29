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

#include <aws/securityhub/model/StandardsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace StandardsStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int INCOMPLETE_HASH = HashingUtils::HashString("INCOMPLETE");


        StandardsStatus GetStandardsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return StandardsStatus::PENDING;
          }
          else if (hashCode == READY_HASH)
          {
            return StandardsStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StandardsStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return StandardsStatus::DELETING;
          }
          else if (hashCode == INCOMPLETE_HASH)
          {
            return StandardsStatus::INCOMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandardsStatus>(hashCode);
          }

          return StandardsStatus::NOT_SET;
        }

        Aws::String GetNameForStandardsStatus(StandardsStatus enumValue)
        {
          switch(enumValue)
          {
          case StandardsStatus::PENDING:
            return "PENDING";
          case StandardsStatus::READY:
            return "READY";
          case StandardsStatus::FAILED:
            return "FAILED";
          case StandardsStatus::DELETING:
            return "DELETING";
          case StandardsStatus::INCOMPLETE:
            return "INCOMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StandardsStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
