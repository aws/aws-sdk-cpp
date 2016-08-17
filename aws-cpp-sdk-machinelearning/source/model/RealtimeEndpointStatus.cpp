/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/model/RealtimeEndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MachineLearning
  {
    namespace Model
    {
      namespace RealtimeEndpointStatusMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RealtimeEndpointStatus GetRealtimeEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return RealtimeEndpointStatus::NONE;
          }
          else if (hashCode == READY_HASH)
          {
            return RealtimeEndpointStatus::READY;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return RealtimeEndpointStatus::UPDATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RealtimeEndpointStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealtimeEndpointStatus>(hashCode);
          }

          return RealtimeEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForRealtimeEndpointStatus(RealtimeEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case RealtimeEndpointStatus::NONE:
            return "NONE";
          case RealtimeEndpointStatus::READY:
            return "READY";
          case RealtimeEndpointStatus::UPDATING:
            return "UPDATING";
          case RealtimeEndpointStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RealtimeEndpointStatusMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
