/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DocDBElastic
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int VPC_ENDPOINT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VPC_ENDPOINT_LIMIT_EXCEEDED");
        static const int IP_ADDRESS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("IP_ADDRESS_LIMIT_EXCEEDED");
        static const int INVALID_SECURITY_GROUP_ID_HASH = HashingUtils::HashString("INVALID_SECURITY_GROUP_ID");
        static const int INVALID_SUBNET_ID_HASH = HashingUtils::HashString("INVALID_SUBNET_ID");
        static const int INACCESSIBLE_ENCRYPTION_CREDS_HASH = HashingUtils::HashString("INACCESSIBLE_ENCRYPTION_CREDS");
        static const int INACCESSIBLE_SECRET_ARN_HASH = HashingUtils::HashString("INACCESSIBLE_SECRET_ARN");
        static const int INACCESSIBLE_VPC_ENDPOINT_HASH = HashingUtils::HashString("INACCESSIBLE_VPC_ENDPOINT");
        static const int INCOMPATIBLE_NETWORK_HASH = HashingUtils::HashString("INCOMPATIBLE_NETWORK");
        static const int MERGING_HASH = HashingUtils::HashString("MERGING");
        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int SPLITTING_HASH = HashingUtils::HashString("SPLITTING");
        static const int COPYING_HASH = HashingUtils::HashString("COPYING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return Status::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return Status::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return Status::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return Status::UPDATING;
          }
          else if (hashCode == VPC_ENDPOINT_LIMIT_EXCEEDED_HASH)
          {
            return Status::VPC_ENDPOINT_LIMIT_EXCEEDED;
          }
          else if (hashCode == IP_ADDRESS_LIMIT_EXCEEDED_HASH)
          {
            return Status::IP_ADDRESS_LIMIT_EXCEEDED;
          }
          else if (hashCode == INVALID_SECURITY_GROUP_ID_HASH)
          {
            return Status::INVALID_SECURITY_GROUP_ID;
          }
          else if (hashCode == INVALID_SUBNET_ID_HASH)
          {
            return Status::INVALID_SUBNET_ID;
          }
          else if (hashCode == INACCESSIBLE_ENCRYPTION_CREDS_HASH)
          {
            return Status::INACCESSIBLE_ENCRYPTION_CREDS;
          }
          else if (hashCode == INACCESSIBLE_SECRET_ARN_HASH)
          {
            return Status::INACCESSIBLE_SECRET_ARN;
          }
          else if (hashCode == INACCESSIBLE_VPC_ENDPOINT_HASH)
          {
            return Status::INACCESSIBLE_VPC_ENDPOINT;
          }
          else if (hashCode == INCOMPATIBLE_NETWORK_HASH)
          {
            return Status::INCOMPATIBLE_NETWORK;
          }
          else if (hashCode == MERGING_HASH)
          {
            return Status::MERGING;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return Status::MODIFYING;
          }
          else if (hashCode == SPLITTING_HASH)
          {
            return Status::SPLITTING;
          }
          else if (hashCode == COPYING_HASH)
          {
            return Status::COPYING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return Status::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return Status::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return Status::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::NOT_SET:
            return {};
          case Status::CREATING:
            return "CREATING";
          case Status::ACTIVE:
            return "ACTIVE";
          case Status::DELETING:
            return "DELETING";
          case Status::UPDATING:
            return "UPDATING";
          case Status::VPC_ENDPOINT_LIMIT_EXCEEDED:
            return "VPC_ENDPOINT_LIMIT_EXCEEDED";
          case Status::IP_ADDRESS_LIMIT_EXCEEDED:
            return "IP_ADDRESS_LIMIT_EXCEEDED";
          case Status::INVALID_SECURITY_GROUP_ID:
            return "INVALID_SECURITY_GROUP_ID";
          case Status::INVALID_SUBNET_ID:
            return "INVALID_SUBNET_ID";
          case Status::INACCESSIBLE_ENCRYPTION_CREDS:
            return "INACCESSIBLE_ENCRYPTION_CREDS";
          case Status::INACCESSIBLE_SECRET_ARN:
            return "INACCESSIBLE_SECRET_ARN";
          case Status::INACCESSIBLE_VPC_ENDPOINT:
            return "INACCESSIBLE_VPC_ENDPOINT";
          case Status::INCOMPATIBLE_NETWORK:
            return "INCOMPATIBLE_NETWORK";
          case Status::MERGING:
            return "MERGING";
          case Status::MODIFYING:
            return "MODIFYING";
          case Status::SPLITTING:
            return "SPLITTING";
          case Status::COPYING:
            return "COPYING";
          case Status::STARTING:
            return "STARTING";
          case Status::STOPPING:
            return "STOPPING";
          case Status::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace DocDBElastic
} // namespace Aws
