/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamResourceDiscoveryAssociationState.h>
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
      namespace IpamResourceDiscoveryAssociationStateMapper
      {

        static const int associate_in_progress_HASH = HashingUtils::HashString("associate-in-progress");
        static const int associate_complete_HASH = HashingUtils::HashString("associate-complete");
        static const int associate_failed_HASH = HashingUtils::HashString("associate-failed");
        static const int disassociate_in_progress_HASH = HashingUtils::HashString("disassociate-in-progress");
        static const int disassociate_complete_HASH = HashingUtils::HashString("disassociate-complete");
        static const int disassociate_failed_HASH = HashingUtils::HashString("disassociate-failed");
        static const int isolate_in_progress_HASH = HashingUtils::HashString("isolate-in-progress");
        static const int isolate_complete_HASH = HashingUtils::HashString("isolate-complete");
        static const int restore_in_progress_HASH = HashingUtils::HashString("restore-in-progress");


        IpamResourceDiscoveryAssociationState GetIpamResourceDiscoveryAssociationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == associate_in_progress_HASH)
          {
            return IpamResourceDiscoveryAssociationState::associate_in_progress;
          }
          else if (hashCode == associate_complete_HASH)
          {
            return IpamResourceDiscoveryAssociationState::associate_complete;
          }
          else if (hashCode == associate_failed_HASH)
          {
            return IpamResourceDiscoveryAssociationState::associate_failed;
          }
          else if (hashCode == disassociate_in_progress_HASH)
          {
            return IpamResourceDiscoveryAssociationState::disassociate_in_progress;
          }
          else if (hashCode == disassociate_complete_HASH)
          {
            return IpamResourceDiscoveryAssociationState::disassociate_complete;
          }
          else if (hashCode == disassociate_failed_HASH)
          {
            return IpamResourceDiscoveryAssociationState::disassociate_failed;
          }
          else if (hashCode == isolate_in_progress_HASH)
          {
            return IpamResourceDiscoveryAssociationState::isolate_in_progress;
          }
          else if (hashCode == isolate_complete_HASH)
          {
            return IpamResourceDiscoveryAssociationState::isolate_complete;
          }
          else if (hashCode == restore_in_progress_HASH)
          {
            return IpamResourceDiscoveryAssociationState::restore_in_progress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamResourceDiscoveryAssociationState>(hashCode);
          }

          return IpamResourceDiscoveryAssociationState::NOT_SET;
        }

        Aws::String GetNameForIpamResourceDiscoveryAssociationState(IpamResourceDiscoveryAssociationState enumValue)
        {
          switch(enumValue)
          {
          case IpamResourceDiscoveryAssociationState::NOT_SET:
            return {};
          case IpamResourceDiscoveryAssociationState::associate_in_progress:
            return "associate-in-progress";
          case IpamResourceDiscoveryAssociationState::associate_complete:
            return "associate-complete";
          case IpamResourceDiscoveryAssociationState::associate_failed:
            return "associate-failed";
          case IpamResourceDiscoveryAssociationState::disassociate_in_progress:
            return "disassociate-in-progress";
          case IpamResourceDiscoveryAssociationState::disassociate_complete:
            return "disassociate-complete";
          case IpamResourceDiscoveryAssociationState::disassociate_failed:
            return "disassociate-failed";
          case IpamResourceDiscoveryAssociationState::isolate_in_progress:
            return "isolate-in-progress";
          case IpamResourceDiscoveryAssociationState::isolate_complete:
            return "isolate-complete";
          case IpamResourceDiscoveryAssociationState::restore_in_progress:
            return "restore-in-progress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamResourceDiscoveryAssociationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
