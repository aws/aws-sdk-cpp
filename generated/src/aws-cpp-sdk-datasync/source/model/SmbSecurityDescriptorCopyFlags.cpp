/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/SmbSecurityDescriptorCopyFlags.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace SmbSecurityDescriptorCopyFlagsMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t OWNER_DACL_HASH = ConstExprHashingUtils::HashString("OWNER_DACL");
        static constexpr uint32_t OWNER_DACL_SACL_HASH = ConstExprHashingUtils::HashString("OWNER_DACL_SACL");


        SmbSecurityDescriptorCopyFlags GetSmbSecurityDescriptorCopyFlagsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return SmbSecurityDescriptorCopyFlags::NONE;
          }
          else if (hashCode == OWNER_DACL_HASH)
          {
            return SmbSecurityDescriptorCopyFlags::OWNER_DACL;
          }
          else if (hashCode == OWNER_DACL_SACL_HASH)
          {
            return SmbSecurityDescriptorCopyFlags::OWNER_DACL_SACL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmbSecurityDescriptorCopyFlags>(hashCode);
          }

          return SmbSecurityDescriptorCopyFlags::NOT_SET;
        }

        Aws::String GetNameForSmbSecurityDescriptorCopyFlags(SmbSecurityDescriptorCopyFlags enumValue)
        {
          switch(enumValue)
          {
          case SmbSecurityDescriptorCopyFlags::NOT_SET:
            return {};
          case SmbSecurityDescriptorCopyFlags::NONE:
            return "NONE";
          case SmbSecurityDescriptorCopyFlags::OWNER_DACL:
            return "OWNER_DACL";
          case SmbSecurityDescriptorCopyFlags::OWNER_DACL_SACL:
            return "OWNER_DACL_SACL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmbSecurityDescriptorCopyFlagsMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
