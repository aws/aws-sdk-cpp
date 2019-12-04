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

#include <aws/sagemaker/model/CaptureStatus.h>
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
      namespace CaptureStatusMapper
      {

        static const int Started_HASH = HashingUtils::HashString("Started");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        CaptureStatus GetCaptureStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Started_HASH)
          {
            return CaptureStatus::Started;
          }
          else if (hashCode == Stopped_HASH)
          {
            return CaptureStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaptureStatus>(hashCode);
          }

          return CaptureStatus::NOT_SET;
        }

        Aws::String GetNameForCaptureStatus(CaptureStatus enumValue)
        {
          switch(enumValue)
          {
          case CaptureStatus::Started:
            return "Started";
          case CaptureStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaptureStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
