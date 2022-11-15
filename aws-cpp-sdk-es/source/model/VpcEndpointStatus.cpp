/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/VpcEndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace VpcEndpointStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        VpcEndpointStatus GetVpcEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return VpcEndpointStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return VpcEndpointStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return VpcEndpointStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return VpcEndpointStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return VpcEndpointStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return VpcEndpointStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return VpcEndpointStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEndpointStatus>(hashCode);
          }

          return VpcEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForVpcEndpointStatus(VpcEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case VpcEndpointStatus::CREATING:
            return "CREATING";
          case VpcEndpointStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case VpcEndpointStatus::ACTIVE:
            return "ACTIVE";
          case VpcEndpointStatus::UPDATING:
            return "UPDATING";
          case VpcEndpointStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case VpcEndpointStatus::DELETING:
            return "DELETING";
          case VpcEndpointStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcEndpointStatusMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
