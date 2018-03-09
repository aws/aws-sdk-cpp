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

#include <aws/sagemaker/model/NotebookInstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace NotebookInstanceStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InService_HASH = HashingUtils::HashString("InService");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        NotebookInstanceStatus GetNotebookInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return NotebookInstanceStatus::Pending;
          }
          else if (hashCode == InService_HASH)
          {
            return NotebookInstanceStatus::InService;
          }
          else if (hashCode == Stopping_HASH)
          {
            return NotebookInstanceStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return NotebookInstanceStatus::Stopped;
          }
          else if (hashCode == Failed_HASH)
          {
            return NotebookInstanceStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return NotebookInstanceStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookInstanceStatus>(hashCode);
          }

          return NotebookInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForNotebookInstanceStatus(NotebookInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case NotebookInstanceStatus::Pending:
            return "Pending";
          case NotebookInstanceStatus::InService:
            return "InService";
          case NotebookInstanceStatus::Stopping:
            return "Stopping";
          case NotebookInstanceStatus::Stopped:
            return "Stopped";
          case NotebookInstanceStatus::Failed:
            return "Failed";
          case NotebookInstanceStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace NotebookInstanceStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
