/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AliasLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace AliasLifecycleMapper
      {

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");


        AliasLifecycle GetAliasLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return AliasLifecycle::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return AliasLifecycle::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AliasLifecycle::DELETING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AliasLifecycle::CREATE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return AliasLifecycle::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AliasLifecycle>(hashCode);
          }

          return AliasLifecycle::NOT_SET;
        }

        Aws::String GetNameForAliasLifecycle(AliasLifecycle enumValue)
        {
          switch(enumValue)
          {
          case AliasLifecycle::NOT_SET:
            return {};
          case AliasLifecycle::AVAILABLE:
            return "AVAILABLE";
          case AliasLifecycle::CREATING:
            return "CREATING";
          case AliasLifecycle::DELETING:
            return "DELETING";
          case AliasLifecycle::CREATE_FAILED:
            return "CREATE_FAILED";
          case AliasLifecycle::DELETE_FAILED:
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

      } // namespace AliasLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
