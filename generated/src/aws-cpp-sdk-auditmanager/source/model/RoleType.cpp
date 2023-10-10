/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/RoleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace RoleTypeMapper
      {

        static const int PROCESS_OWNER_HASH = HashingUtils::HashString("PROCESS_OWNER");
        static const int RESOURCE_OWNER_HASH = HashingUtils::HashString("RESOURCE_OWNER");


        RoleType GetRoleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROCESS_OWNER_HASH)
          {
            return RoleType::PROCESS_OWNER;
          }
          else if (hashCode == RESOURCE_OWNER_HASH)
          {
            return RoleType::RESOURCE_OWNER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoleType>(hashCode);
          }

          return RoleType::NOT_SET;
        }

        Aws::String GetNameForRoleType(RoleType enumValue)
        {
          switch(enumValue)
          {
          case RoleType::NOT_SET:
            return {};
          case RoleType::PROCESS_OWNER:
            return "PROCESS_OWNER";
          case RoleType::RESOURCE_OWNER:
            return "RESOURCE_OWNER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoleTypeMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
