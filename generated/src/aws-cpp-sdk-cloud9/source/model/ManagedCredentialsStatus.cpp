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

        static constexpr uint32_t ENABLED_ON_CREATE_HASH = ConstExprHashingUtils::HashString("ENABLED_ON_CREATE");
        static constexpr uint32_t ENABLED_BY_OWNER_HASH = ConstExprHashingUtils::HashString("ENABLED_BY_OWNER");
        static constexpr uint32_t DISABLED_BY_DEFAULT_HASH = ConstExprHashingUtils::HashString("DISABLED_BY_DEFAULT");
        static constexpr uint32_t DISABLED_BY_OWNER_HASH = ConstExprHashingUtils::HashString("DISABLED_BY_OWNER");
        static constexpr uint32_t DISABLED_BY_COLLABORATOR_HASH = ConstExprHashingUtils::HashString("DISABLED_BY_COLLABORATOR");
        static constexpr uint32_t PENDING_REMOVAL_BY_COLLABORATOR_HASH = ConstExprHashingUtils::HashString("PENDING_REMOVAL_BY_COLLABORATOR");
        static constexpr uint32_t PENDING_START_REMOVAL_BY_COLLABORATOR_HASH = ConstExprHashingUtils::HashString("PENDING_START_REMOVAL_BY_COLLABORATOR");
        static constexpr uint32_t PENDING_REMOVAL_BY_OWNER_HASH = ConstExprHashingUtils::HashString("PENDING_REMOVAL_BY_OWNER");
        static constexpr uint32_t PENDING_START_REMOVAL_BY_OWNER_HASH = ConstExprHashingUtils::HashString("PENDING_START_REMOVAL_BY_OWNER");
        static constexpr uint32_t FAILED_REMOVAL_BY_COLLABORATOR_HASH = ConstExprHashingUtils::HashString("FAILED_REMOVAL_BY_COLLABORATOR");
        static constexpr uint32_t FAILED_REMOVAL_BY_OWNER_HASH = ConstExprHashingUtils::HashString("FAILED_REMOVAL_BY_OWNER");


        ManagedCredentialsStatus GetManagedCredentialsStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
