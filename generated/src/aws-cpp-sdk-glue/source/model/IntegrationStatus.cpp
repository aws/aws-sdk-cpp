/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IntegrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace IntegrationStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int SYNCING_HASH = HashingUtils::HashString("SYNCING");
        static const int NEEDS_ATTENTION_HASH = HashingUtils::HashString("NEEDS_ATTENTION");


        IntegrationStatus GetIntegrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return IntegrationStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IntegrationStatus::ACTIVE;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return IntegrationStatus::MODIFYING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IntegrationStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return IntegrationStatus::DELETING;
          }
          else if (hashCode == SYNCING_HASH)
          {
            return IntegrationStatus::SYNCING;
          }
          else if (hashCode == NEEDS_ATTENTION_HASH)
          {
            return IntegrationStatus::NEEDS_ATTENTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationStatus>(hashCode);
          }

          return IntegrationStatus::NOT_SET;
        }

        Aws::String GetNameForIntegrationStatus(IntegrationStatus enumValue)
        {
          switch(enumValue)
          {
          case IntegrationStatus::NOT_SET:
            return {};
          case IntegrationStatus::CREATING:
            return "CREATING";
          case IntegrationStatus::ACTIVE:
            return "ACTIVE";
          case IntegrationStatus::MODIFYING:
            return "MODIFYING";
          case IntegrationStatus::FAILED:
            return "FAILED";
          case IntegrationStatus::DELETING:
            return "DELETING";
          case IntegrationStatus::SYNCING:
            return "SYNCING";
          case IntegrationStatus::NEEDS_ATTENTION:
            return "NEEDS_ATTENTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntegrationStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
