/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/SmbVersion.h>
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
      namespace SmbVersionMapper
      {

        static constexpr uint32_t AUTOMATIC_HASH = ConstExprHashingUtils::HashString("AUTOMATIC");
        static constexpr uint32_t SMB2_HASH = ConstExprHashingUtils::HashString("SMB2");
        static constexpr uint32_t SMB3_HASH = ConstExprHashingUtils::HashString("SMB3");
        static constexpr uint32_t SMB1_HASH = ConstExprHashingUtils::HashString("SMB1");
        static constexpr uint32_t SMB2_0_HASH = ConstExprHashingUtils::HashString("SMB2_0");


        SmbVersion GetSmbVersionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return SmbVersion::AUTOMATIC;
          }
          else if (hashCode == SMB2_HASH)
          {
            return SmbVersion::SMB2;
          }
          else if (hashCode == SMB3_HASH)
          {
            return SmbVersion::SMB3;
          }
          else if (hashCode == SMB1_HASH)
          {
            return SmbVersion::SMB1;
          }
          else if (hashCode == SMB2_0_HASH)
          {
            return SmbVersion::SMB2_0;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmbVersion>(hashCode);
          }

          return SmbVersion::NOT_SET;
        }

        Aws::String GetNameForSmbVersion(SmbVersion enumValue)
        {
          switch(enumValue)
          {
          case SmbVersion::NOT_SET:
            return {};
          case SmbVersion::AUTOMATIC:
            return "AUTOMATIC";
          case SmbVersion::SMB2:
            return "SMB2";
          case SmbVersion::SMB3:
            return "SMB3";
          case SmbVersion::SMB1:
            return "SMB1";
          case SmbVersion::SMB2_0:
            return "SMB2_0";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmbVersionMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
