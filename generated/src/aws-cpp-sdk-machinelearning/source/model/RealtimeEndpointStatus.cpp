/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        RealtimeEndpointStatus GetRealtimeEndpointStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RealtimeEndpointStatus::NOT_SET:
            return {};
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

            return {};
          }
        }

      } // namespace RealtimeEndpointStatusMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
