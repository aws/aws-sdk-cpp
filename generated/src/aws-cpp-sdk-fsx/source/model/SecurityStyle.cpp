/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SecurityStyle.h>
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
      namespace SecurityStyleMapper
      {

        static constexpr uint32_t UNIX_HASH = ConstExprHashingUtils::HashString("UNIX");
        static constexpr uint32_t NTFS_HASH = ConstExprHashingUtils::HashString("NTFS");
        static constexpr uint32_t MIXED_HASH = ConstExprHashingUtils::HashString("MIXED");


        SecurityStyle GetSecurityStyleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNIX_HASH)
          {
            return SecurityStyle::UNIX;
          }
          else if (hashCode == NTFS_HASH)
          {
            return SecurityStyle::NTFS;
          }
          else if (hashCode == MIXED_HASH)
          {
            return SecurityStyle::MIXED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SecurityStyle>(hashCode);
          }

          return SecurityStyle::NOT_SET;
        }

        Aws::String GetNameForSecurityStyle(SecurityStyle enumValue)
        {
          switch(enumValue)
          {
          case SecurityStyle::NOT_SET:
            return {};
          case SecurityStyle::UNIX:
            return "UNIX";
          case SecurityStyle::NTFS:
            return "NTFS";
          case SecurityStyle::MIXED:
            return "MIXED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SecurityStyleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
