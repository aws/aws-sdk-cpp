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

#include <aws/s3control/model/RequestedJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace RequestedJobStatusMapper
      {

        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Ready_HASH = HashingUtils::HashString("Ready");


        RequestedJobStatus GetRequestedJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cancelled_HASH)
          {
            return RequestedJobStatus::Cancelled;
          }
          else if (hashCode == Ready_HASH)
          {
            return RequestedJobStatus::Ready;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequestedJobStatus>(hashCode);
          }

          return RequestedJobStatus::NOT_SET;
        }

        Aws::String GetNameForRequestedJobStatus(RequestedJobStatus enumValue)
        {
          switch(enumValue)
          {
          case RequestedJobStatus::Cancelled:
            return "Cancelled";
          case RequestedJobStatus::Ready:
            return "Ready";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequestedJobStatusMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
