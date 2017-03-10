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
#include <aws/elasticmapreduce/model/InstanceFleetStateChangeReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace InstanceFleetStateChangeReasonCodeMapper
      {

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
        static const int INSTANCE_FAILURE_HASH = HashingUtils::HashString("INSTANCE_FAILURE");
        static const int CLUSTER_TERMINATED_HASH = HashingUtils::HashString("CLUSTER_TERMINATED");


        InstanceFleetStateChangeReasonCode GetInstanceFleetStateChangeReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return InstanceFleetStateChangeReasonCode::INTERNAL_ERROR;
          }
          else if (hashCode == VALIDATION_ERROR_HASH)
          {
            return InstanceFleetStateChangeReasonCode::VALIDATION_ERROR;
          }
          else if (hashCode == INSTANCE_FAILURE_HASH)
          {
            return InstanceFleetStateChangeReasonCode::INSTANCE_FAILURE;
          }
          else if (hashCode == CLUSTER_TERMINATED_HASH)
          {
            return InstanceFleetStateChangeReasonCode::CLUSTER_TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceFleetStateChangeReasonCode>(hashCode);
          }

          return InstanceFleetStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForInstanceFleetStateChangeReasonCode(InstanceFleetStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case InstanceFleetStateChangeReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case InstanceFleetStateChangeReasonCode::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          case InstanceFleetStateChangeReasonCode::INSTANCE_FAILURE:
            return "INSTANCE_FAILURE";
          case InstanceFleetStateChangeReasonCode::CLUSTER_TERMINATED:
            return "CLUSTER_TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InstanceFleetStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
