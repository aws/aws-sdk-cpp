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

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        AliasLifecycle GetAliasLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
