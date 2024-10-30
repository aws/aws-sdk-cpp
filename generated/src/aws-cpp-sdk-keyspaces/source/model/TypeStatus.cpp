/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/TypeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace TypeStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int RESTORING_HASH = HashingUtils::HashString("RESTORING");


        TypeStatus GetTypeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TypeStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return TypeStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TypeStatus::DELETING;
          }
          else if (hashCode == RESTORING_HASH)
          {
            return TypeStatus::RESTORING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TypeStatus>(hashCode);
          }

          return TypeStatus::NOT_SET;
        }

        Aws::String GetNameForTypeStatus(TypeStatus enumValue)
        {
          switch(enumValue)
          {
          case TypeStatus::NOT_SET:
            return {};
          case TypeStatus::ACTIVE:
            return "ACTIVE";
          case TypeStatus::CREATING:
            return "CREATING";
          case TypeStatus::DELETING:
            return "DELETING";
          case TypeStatus::RESTORING:
            return "RESTORING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeStatusMapper
    } // namespace Model
  } // namespace Keyspaces
} // namespace Aws
