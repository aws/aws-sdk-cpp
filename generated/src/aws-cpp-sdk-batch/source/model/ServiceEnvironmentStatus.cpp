/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceEnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace ServiceEnvironmentStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int VALID_HASH = HashingUtils::HashString("VALID");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");


        ServiceEnvironmentStatus GetServiceEnvironmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ServiceEnvironmentStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ServiceEnvironmentStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ServiceEnvironmentStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ServiceEnvironmentStatus::DELETED;
          }
          else if (hashCode == VALID_HASH)
          {
            return ServiceEnvironmentStatus::VALID;
          }
          else if (hashCode == INVALID_HASH)
          {
            return ServiceEnvironmentStatus::INVALID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceEnvironmentStatus>(hashCode);
          }

          return ServiceEnvironmentStatus::NOT_SET;
        }

        Aws::String GetNameForServiceEnvironmentStatus(ServiceEnvironmentStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceEnvironmentStatus::NOT_SET:
            return {};
          case ServiceEnvironmentStatus::CREATING:
            return "CREATING";
          case ServiceEnvironmentStatus::UPDATING:
            return "UPDATING";
          case ServiceEnvironmentStatus::DELETING:
            return "DELETING";
          case ServiceEnvironmentStatus::DELETED:
            return "DELETED";
          case ServiceEnvironmentStatus::VALID:
            return "VALID";
          case ServiceEnvironmentStatus::INVALID:
            return "INVALID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceEnvironmentStatusMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
