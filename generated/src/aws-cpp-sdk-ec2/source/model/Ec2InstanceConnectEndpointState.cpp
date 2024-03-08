/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Ec2InstanceConnectEndpointState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace Ec2InstanceConnectEndpointStateMapper
      {

        static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
        static const int create_complete_HASH = HashingUtils::HashString("create-complete");
        static const int create_failed_HASH = HashingUtils::HashString("create-failed");
        static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
        static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");
        static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");


        Ec2InstanceConnectEndpointState GetEc2InstanceConnectEndpointStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == create_in_progress_HASH)
          {
            return Ec2InstanceConnectEndpointState::create_in_progress;
          }
          else if (hashCode == create_complete_HASH)
          {
            return Ec2InstanceConnectEndpointState::create_complete;
          }
          else if (hashCode == create_failed_HASH)
          {
            return Ec2InstanceConnectEndpointState::create_failed;
          }
          else if (hashCode == delete_in_progress_HASH)
          {
            return Ec2InstanceConnectEndpointState::delete_in_progress;
          }
          else if (hashCode == delete_complete_HASH)
          {
            return Ec2InstanceConnectEndpointState::delete_complete;
          }
          else if (hashCode == delete_failed_HASH)
          {
            return Ec2InstanceConnectEndpointState::delete_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ec2InstanceConnectEndpointState>(hashCode);
          }

          return Ec2InstanceConnectEndpointState::NOT_SET;
        }

        Aws::String GetNameForEc2InstanceConnectEndpointState(Ec2InstanceConnectEndpointState enumValue)
        {
          switch(enumValue)
          {
          case Ec2InstanceConnectEndpointState::NOT_SET:
            return {};
          case Ec2InstanceConnectEndpointState::create_in_progress:
            return "create-in-progress";
          case Ec2InstanceConnectEndpointState::create_complete:
            return "create-complete";
          case Ec2InstanceConnectEndpointState::create_failed:
            return "create-failed";
          case Ec2InstanceConnectEndpointState::delete_in_progress:
            return "delete-in-progress";
          case Ec2InstanceConnectEndpointState::delete_complete:
            return "delete-complete";
          case Ec2InstanceConnectEndpointState::delete_failed:
            return "delete-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ec2InstanceConnectEndpointStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
