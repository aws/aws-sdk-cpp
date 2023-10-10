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

        static const int UNIX_HASH = HashingUtils::HashString("UNIX");
        static const int NTFS_HASH = HashingUtils::HashString("NTFS");
        static const int MIXED_HASH = HashingUtils::HashString("MIXED");


        SecurityStyle GetSecurityStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
