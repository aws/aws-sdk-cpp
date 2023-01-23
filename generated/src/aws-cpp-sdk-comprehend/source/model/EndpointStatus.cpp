/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace EndpointStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_SERVICE_HASH = HashingUtils::HashString("IN_SERVICE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        EndpointStatus GetEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EndpointStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EndpointStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EndpointStatus::FAILED;
          }
          else if (hashCode == IN_SERVICE_HASH)
          {
            return EndpointStatus::IN_SERVICE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return EndpointStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointStatus>(hashCode);
          }

          return EndpointStatus::NOT_SET;
        }

        Aws::String GetNameForEndpointStatus(EndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case EndpointStatus::CREATING:
            return "CREATING";
          case EndpointStatus::DELETING:
            return "DELETING";
          case EndpointStatus::FAILED:
            return "FAILED";
          case EndpointStatus::IN_SERVICE:
            return "IN_SERVICE";
          case EndpointStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointStatusMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
