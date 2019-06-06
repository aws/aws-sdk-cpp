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

#include <aws/ssm/model/OpsItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace OpsItemStatusMapper
      {

        static const int Open_HASH = HashingUtils::HashString("Open");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Resolved_HASH = HashingUtils::HashString("Resolved");


        OpsItemStatus GetOpsItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Open_HASH)
          {
            return OpsItemStatus::Open;
          }
          else if (hashCode == InProgress_HASH)
          {
            return OpsItemStatus::InProgress;
          }
          else if (hashCode == Resolved_HASH)
          {
            return OpsItemStatus::Resolved;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemStatus>(hashCode);
          }

          return OpsItemStatus::NOT_SET;
        }

        Aws::String GetNameForOpsItemStatus(OpsItemStatus enumValue)
        {
          switch(enumValue)
          {
          case OpsItemStatus::Open:
            return "Open";
          case OpsItemStatus::InProgress:
            return "InProgress";
          case OpsItemStatus::Resolved:
            return "Resolved";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
