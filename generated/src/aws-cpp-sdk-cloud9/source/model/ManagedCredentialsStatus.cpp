/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/ManagedCredentialsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Cloud9
  {
    namespace Model
    {
      namespace ManagedCredentialsStatusMapper
      {

        static const int ENABLED_ON_CREATE_HASH = HashingUtils::HashString("ENABLED_ON_CREATE");
        static const int ENABLED_BY_OWNER_HASH = HashingUtils::HashString("ENABLED_BY_OWNER");
        static const int DISABLED_BY_DEFAULT_HASH = HashingUtils::HashString("DISABLED_BY_DEFAULT");
        static const int DISABLED_BY_OWNER_HASH = HashingUtils::HashString("DISABLED_BY_OWNER");
        static const int DISABLED_BY_COLLABORATOR_HASH = HashingUtils::HashString("DISABLED_BY_COLLABORATOR");
        static const int PENDING_REMOVAL_BY_COLLABORATOR_HASH = HashingUtils::HashString("PENDING_REMOVAL_BY_COLLABORATOR");
        static const int PENDING_START_REMOVAL_BY_COLLABORATOR_HASH = HashingUtils::HashString("PENDING_START_REMOVAL_BY_COLLABORATOR");
        static const int PENDING_REMOVAL_BY_OWNER_HASH = HashingUtils::HashString("PENDING_REMOVAL_BY_OWNER");
        static const int PENDING_START_REMOVAL_BY_OWNER_HASH = HashingUtils::HashString("PENDING_START_REMOVAL_BY_OWNER");
        static const int FAILED_REMOVAL_BY_COLLABORATOR_HASH = HashingUtils::HashString("FAILED_REMOVAL_BY_COLLABORATOR");
        static const int FAILED_REMOVAL_BY_OWNER_HASH = HashingUtils::HashString("FAILED_REMOVAL_BY_OWNER");


        ManagedCredentialsStatus GetManagedCredentialsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_ON_CREATE_HASH)
          {
            return ManagedCredentialsStatus::ENABLED_ON_CREATE;
          }
          else if (hashCode == ENABLED_BY_OWNER_HASH)
          {
            return ManagedCredentialsStatus::ENABLED_BY_OWNER;
          }
          else if (hashCode == DISABLED_BY_DEFAULT_HASH)
          {
            return ManagedCredentialsStatus::DISABLED_BY_DEFAULT;
          }
          else if (hashCode == DISABLED_BY_OWNER_HASH)
          {
            return ManagedCredentialsStatus::DISABLED_BY_OWNER;
          }
          else if (hashCode == DISABLED_BY_COLLABORATOR_HASH)
          {
            return ManagedCredentialsStatus::DISABLED_BY_COLLABORATOR;
          }
          else if (hashCode == PENDING_REMOVAL_BY_COLLABORATOR_HASH)
          {
            return ManagedCredentialsStatus::PENDING_REMOVAL_BY_COLLABORATOR;
          }
          else if (hashCode == PENDING_START_REMOVAL_BY_COLLABORATOR_HASH)
          {
            return ManagedCredentialsStatus::PENDING_START_REMOVAL_BY_COLLABORATOR;
          }
          else if (hashCode == PENDING_REMOVAL_BY_OWNER_HASH)
          {
            return ManagedCredentialsStatus::PENDING_REMOVAL_BY_OWNER;
          }
          else if (hashCode == PENDING_START_REMOVAL_BY_OWNER_HASH)
          {
            return ManagedCredentialsStatus::PENDING_START_REMOVAL_BY_OWNER;
          }
          else if (hashCode == FAILED_REMOVAL_BY_COLLABORATOR_HASH)
          {
            return ManagedCredentialsStatus::FAILED_REMOVAL_BY_COLLABORATOR;
          }
          else if (hashCode == FAILED_REMOVAL_BY_OWNER_HASH)
          {
            return ManagedCredentialsStatus::FAILED_REMOVAL_BY_OWNER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedCredentialsStatus>(hashCode);
          }

          return ManagedCredentialsStatus::NOT_SET;
        }

        Aws::String GetNameForManagedCredentialsStatus(ManagedCredentialsStatus enumValue)
        {
          switch(enumValue)
          {
          case ManagedCredentialsStatus::NOT_SET:
            return {};
          case ManagedCredentialsStatus::ENABLED_ON_CREATE:
            return "ENABLED_ON_CREATE";
          case ManagedCredentialsStatus::ENABLED_BY_OWNER:
            return "ENABLED_BY_OWNER";
          case ManagedCredentialsStatus::DISABLED_BY_DEFAULT:
            return "DISABLED_BY_DEFAULT";
          case ManagedCredentialsStatus::DISABLED_BY_OWNER:
            return "DISABLED_BY_OWNER";
          case ManagedCredentialsStatus::DISABLED_BY_COLLABORATOR:
            return "DISABLED_BY_COLLABORATOR";
          case ManagedCredentialsStatus::PENDING_REMOVAL_BY_COLLABORATOR:
            return "PENDING_REMOVAL_BY_COLLABORATOR";
          case ManagedCredentialsStatus::PENDING_START_REMOVAL_BY_COLLABORATOR:
            return "PENDING_START_REMOVAL_BY_COLLABORATOR";
          case ManagedCredentialsStatus::PENDING_REMOVAL_BY_OWNER:
            return "PENDING_REMOVAL_BY_OWNER";
          case ManagedCredentialsStatus::PENDING_START_REMOVAL_BY_OWNER:
            return "PENDING_START_REMOVAL_BY_OWNER";
          case ManagedCredentialsStatus::FAILED_REMOVAL_BY_COLLABORATOR:
            return "FAILED_REMOVAL_BY_COLLABORATOR";
          case ManagedCredentialsStatus::FAILED_REMOVAL_BY_OWNER:
            return "FAILED_REMOVAL_BY_OWNER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedCredentialsStatusMapper
    } // namespace Model
  } // namespace Cloud9
} // namespace Aws
