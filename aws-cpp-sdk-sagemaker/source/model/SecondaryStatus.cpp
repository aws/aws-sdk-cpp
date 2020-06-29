/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int LaunchingMLInstances_HASH = HashingUtils::HashString("LaunchingMLInstances");
        static const int PreparingTrainingStack_HASH = HashingUtils::HashString("PreparingTrainingStack");
        static const int Downloading_HASH = HashingUtils::HashString("Downloading");
        static const int DownloadingTrainingImage_HASH = HashingUtils::HashString("DownloadingTrainingImage");
        static const int Training_HASH = HashingUtils::HashString("Training");
        static const int Uploading_HASH = HashingUtils::HashString("Uploading");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int MaxRuntimeExceeded_HASH = HashingUtils::HashString("MaxRuntimeExceeded");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Interrupted_HASH = HashingUtils::HashString("Interrupted");
        static const int MaxWaitTimeExceeded_HASH = HashingUtils::HashString("MaxWaitTimeExceeded");


        SecondaryStatus GetSecondaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Starting_HASH)
          {
            return SecondaryStatus::Starting;
          }
          else if (hashCode == LaunchingMLInstances_HASH)
          {
            return SecondaryStatus::LaunchingMLInstances;
          }
          else if (hashCode == PreparingTrainingStack_HASH)
          {
            return SecondaryStatus::PreparingTrainingStack;
          }
          else if (hashCode == Downloading_HASH)
          {
            return SecondaryStatus::Downloading;
          }
          else if (hashCode == DownloadingTrainingImage_HASH)
          {
            return SecondaryStatus::DownloadingTrainingImage;
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
          else if (hashCode == Interrupted_HASH)
          {
            return SecondaryStatus::Interrupted;
          }
          else if (hashCode == MaxWaitTimeExceeded_HASH)
          {
            return SecondaryStatus::MaxWaitTimeExceeded;
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
          case SecondaryStatus::LaunchingMLInstances:
            return "LaunchingMLInstances";
          case SecondaryStatus::PreparingTrainingStack:
            return "PreparingTrainingStack";
          case SecondaryStatus::Downloading:
            return "Downloading";
          case SecondaryStatus::DownloadingTrainingImage:
            return "DownloadingTrainingImage";
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
          case SecondaryStatus::Interrupted:
            return "Interrupted";
          case SecondaryStatus::MaxWaitTimeExceeded:
            return "MaxWaitTimeExceeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecondaryStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
