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
