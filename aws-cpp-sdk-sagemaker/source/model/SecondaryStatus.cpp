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

#include <aws/sagemaker/model/SecondaryStatus.h>
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
      namespace SecondaryStatusMapper
      {

        static const int Starting_HASH = HashingUtils::HashString("Starting");
        static const int Downloading_HASH = HashingUtils::HashString("Downloading");
        static const int Training_HASH = HashingUtils::HashString("Training");
        static const int Uploading_HASH = HashingUtils::HashString("Uploading");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int MaxRuntimeExceeded_HASH = HashingUtils::HashString("MaxRuntimeExceeded");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        SecondaryStatus GetSecondaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Starting_HASH)
          {
            return SecondaryStatus::Starting;
          }
          else if (hashCode == Downloading_HASH)
          {
            return SecondaryStatus::Downloading;
          }
          else if (hashCode == Training_HASH)
          {
            return SecondaryStatus::Training;
          }
          else if (hashCode == Uploading_HASH)
          {
            return SecondaryStatus::Uploading;
          }
          else if (hashCode == Stopping_HASH)
          {
            return SecondaryStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return SecondaryStatus::Stopped;
          }
          else if (hashCode == MaxRuntimeExceeded_HASH)
          {
            return SecondaryStatus::MaxRuntimeExceeded;
          }
          else if (hashCode == Completed_HASH)
          {
            return SecondaryStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return SecondaryStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecondaryStatus>(hashCode);
          }

          return SecondaryStatus::NOT_SET;
        }

        Aws::String GetNameForSecondaryStatus(SecondaryStatus enumValue)
        {
          switch(enumValue)
          {
          case SecondaryStatus::Starting:
            return "Starting";
          case SecondaryStatus::Downloading:
            return "Downloading";
          case SecondaryStatus::Training:
            return "Training";
          case SecondaryStatus::Uploading:
            return "Uploading";
          case SecondaryStatus::Stopping:
            return "Stopping";
          case SecondaryStatus::Stopped:
            return "Stopped";
          case SecondaryStatus::MaxRuntimeExceeded:
            return "MaxRuntimeExceeded";
          case SecondaryStatus::Completed:
            return "Completed";
          case SecondaryStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SecondaryStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
