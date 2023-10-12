/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaFilesystemPermission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace LambdaFilesystemPermissionMapper
      {

        static constexpr uint32_t ro_HASH = ConstExprHashingUtils::HashString("ro");
        static constexpr uint32_t rw_HASH = ConstExprHashingUtils::HashString("rw");


        LambdaFilesystemPermission GetLambdaFilesystemPermissionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ro_HASH)
          {
            return LambdaFilesystemPermission::ro;
          }
          else if (hashCode == rw_HASH)
          {
            return LambdaFilesystemPermission::rw;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFilesystemPermission>(hashCode);
          }

          return LambdaFilesystemPermission::NOT_SET;
        }

        Aws::String GetNameForLambdaFilesystemPermission(LambdaFilesystemPermission enumValue)
        {
          switch(enumValue)
          {
          case LambdaFilesystemPermission::NOT_SET:
            return {};
          case LambdaFilesystemPermission::ro:
            return "ro";
          case LambdaFilesystemPermission::rw:
            return "rw";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaFilesystemPermissionMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
