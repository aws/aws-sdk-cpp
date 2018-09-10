﻿/*
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

#include <aws/iot/model/AuditTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AuditTaskStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        AuditTaskStatus GetAuditTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return AuditTaskStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AuditTaskStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AuditTaskStatus::FAILED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return AuditTaskStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditTaskStatus>(hashCode);
          }

          return AuditTaskStatus::NOT_SET;
        }

        Aws::String GetNameForAuditTaskStatus(AuditTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case AuditTaskStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AuditTaskStatus::COMPLETED:
            return "COMPLETED";
          case AuditTaskStatus::FAILED:
            return "FAILED";
          case AuditTaskStatus::CANCELED:
            return "CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AuditTaskStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
