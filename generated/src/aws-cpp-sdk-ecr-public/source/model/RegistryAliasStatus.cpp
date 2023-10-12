/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/RegistryAliasStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECRPublic
  {
    namespace Model
    {
      namespace RegistryAliasStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");


        RegistryAliasStatus GetRegistryAliasStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return RegistryAliasStatus::ACTIVE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return RegistryAliasStatus::PENDING;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return RegistryAliasStatus::REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistryAliasStatus>(hashCode);
          }

          return RegistryAliasStatus::NOT_SET;
        }

        Aws::String GetNameForRegistryAliasStatus(RegistryAliasStatus enumValue)
        {
          switch(enumValue)
          {
          case RegistryAliasStatus::NOT_SET:
            return {};
          case RegistryAliasStatus::ACTIVE:
            return "ACTIVE";
          case RegistryAliasStatus::PENDING:
            return "PENDING";
          case RegistryAliasStatus::REJECTED:
            return "REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistryAliasStatusMapper
    } // namespace Model
  } // namespace ECRPublic
} // namespace Aws
