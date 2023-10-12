/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/NfsVersion.h>
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
      namespace NfsVersionMapper
      {

        static constexpr uint32_t AUTOMATIC_HASH = ConstExprHashingUtils::HashString("AUTOMATIC");
        static constexpr uint32_t NFS3_HASH = ConstExprHashingUtils::HashString("NFS3");
        static constexpr uint32_t NFS4_0_HASH = ConstExprHashingUtils::HashString("NFS4_0");
        static constexpr uint32_t NFS4_1_HASH = ConstExprHashingUtils::HashString("NFS4_1");


        NfsVersion GetNfsVersionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return NfsVersion::AUTOMATIC;
          }
          else if (hashCode == NFS3_HASH)
          {
            return NfsVersion::NFS3;
          }
          else if (hashCode == NFS4_0_HASH)
          {
            return NfsVersion::NFS4_0;
          }
          else if (hashCode == NFS4_1_HASH)
          {
            return NfsVersion::NFS4_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NfsVersion>(hashCode);
          }

          return NfsVersion::NOT_SET;
        }

        Aws::String GetNameForNfsVersion(NfsVersion enumValue)
        {
          switch(enumValue)
          {
          case NfsVersion::NOT_SET:
            return {};
          case NfsVersion::AUTOMATIC:
            return "AUTOMATIC";
          case NfsVersion::NFS3:
            return "NFS3";
          case NfsVersion::NFS4_0:
            return "NFS4_0";
          case NfsVersion::NFS4_1:
            return "NFS4_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NfsVersionMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
