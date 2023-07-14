/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AclPermission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace AclPermissionMapper
      {

        static const int READ_HASH = HashingUtils::HashString("READ");
        static const int WRITE_HASH = HashingUtils::HashString("WRITE");
        static const int READ_ACP_HASH = HashingUtils::HashString("READ_ACP");
        static const int WRITE_ACP_HASH = HashingUtils::HashString("WRITE_ACP");
        static const int FULL_CONTROL_HASH = HashingUtils::HashString("FULL_CONTROL");


        AclPermission GetAclPermissionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_HASH)
          {
            return AclPermission::READ;
          }
          else if (hashCode == WRITE_HASH)
          {
            return AclPermission::WRITE;
          }
          else if (hashCode == READ_ACP_HASH)
          {
            return AclPermission::READ_ACP;
          }
          else if (hashCode == WRITE_ACP_HASH)
          {
            return AclPermission::WRITE_ACP;
          }
          else if (hashCode == FULL_CONTROL_HASH)
          {
            return AclPermission::FULL_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AclPermission>(hashCode);
          }

          return AclPermission::NOT_SET;
        }

        Aws::String GetNameForAclPermission(AclPermission enumValue)
        {
          switch(enumValue)
          {
          case AclPermission::READ:
            return "READ";
          case AclPermission::WRITE:
            return "WRITE";
          case AclPermission::READ_ACP:
            return "READ_ACP";
          case AclPermission::WRITE_ACP:
            return "WRITE_ACP";
          case AclPermission::FULL_CONTROL:
            return "FULL_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AclPermissionMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
